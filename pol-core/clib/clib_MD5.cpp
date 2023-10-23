/** @file
 *
 * @par History
 * - 2003/06/29 Dave: MD5_Encrypt(), changed the order. the "safe" method was also really slow, so
 * do it only if the "fast" method fails.
 *                    also, store provider handle for further speed improvements
 */


#include "clib_MD5.h"

#include <iomanip>
#include <sstream>

#include "logfacility.h"
#include "pol_global_config.h"
#include "stlutil.h"

#ifdef WINDOWS
#include "Header_Windows.h"
#include <wincrypt.h>

namespace Pol
{
namespace Clib
{
static HCRYPTPROV hProv = 0;

bool MD5_Encrypt( const std::string& in, std::string& out )
{
  // bool bResult = true;

  // HCRYPTKEY hKey = nullptr;
  // HCRYPTKEY hXchgKey = nullptr;
  HCRYPTHASH hHash = 0;

  if ( !hProv )
  {
    if ( !CryptAcquireContext( &hProv, nullptr, MS_DEF_PROV, PROV_RSA_FULL, CRYPT_VERIFYCONTEXT ) )
    {
      if ( !CryptAcquireContext( &hProv, nullptr, nullptr, PROV_RSA_FULL, 0 ) )
      {
        ERROR_PRINT << "Error " << GetLastError() << " acquiring crypt context\n";
        return false;
      }
    }
  }

  if ( !CryptCreateHash( hProv, CALG_MD5, 0, 0, &hHash ) )
  {
    ERROR_PRINT << "Error " << GetLastError() << " creating hash\n";
    return false;
  }

  // Hash password string.
  if ( !CryptHashData( hHash, (const unsigned char*)( in.data() ),
                       static_cast<unsigned long>( in.length() ), 0 ) )
  {
    ERROR_PRINT << "Error " << GetLastError() << " adding data to hash\n";
    return false;
  }
  unsigned long len = 16;
  unsigned char buf[16];
  if ( !CryptGetHashParam( hHash, HP_HASHVAL, buf, &len, 0 ) )
  {
    ERROR_PRINT << "Error " << GetLastError() << " getting hash value\n";
    return false;
  }

  std::ostringstream os;
  for ( unsigned int i = 0; i < len; i++ )
  {
    os << std::setfill( '0' ) << std::setw( 2 ) << std::hex << (int)buf[i];
  }
  out = os.str();

  CryptDestroyHash( hHash );
  return true;
}

void MD5_Cleanup()
{
  if ( hProv )
  {
    CryptReleaseContext( hProv, 0 );
  }
}

#else

#include <openssl/evp.h>

namespace Pol
{
namespace Clib
{
bool MD5_Encrypt( const std::string& in, std::string& out )
{
  auto mctx = EVP_MD_CTX_new();

  EVP_DigestInit_ex( mctx, EVP_MD5(), nullptr );
  EVP_DigestUpdate( mctx, in.c_str(), in.length() );

  unsigned char hash[16];
  EVP_DigestFinal_ex( mctx, hash, nullptr );
  EVP_MD_CTX_free( mctx );
  fmt::Writer w;
  for ( auto& elem : hash )
  {
    w.Format( "{:02x}" ) << (int)elem;
  }
  out = w.str();

  return true;
}
void MD5_Cleanup()
{
  // OpenSSL cleanup, if any
}

#endif

bool MD5_Compare( const std::string& a, const std::string& b )
{
  bool ret = false;
  if ( stringicmp( a, b ) == 0 )
    ret = true;

  return ret;
}
}
}
