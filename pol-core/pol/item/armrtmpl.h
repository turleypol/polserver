/*
History
=======


Notes
=======

*/

#ifndef ARMRTMPL_H
#define ARMRTMPL_H

#include <string>
#include <set>

#include "../equipdsc.h"
namespace Pol {
  namespace Clib {
	class ConfigElem;
  }
  namespace Items {

	class ArmorDesc : public Core::EquipDesc
	{
	public:
	  //ArmorTemplate();
	  typedef EquipDesc base;
	  ArmorDesc( u32 objtype, Clib::ConfigElem& elem, const Plib::Package* pkg );
      virtual ~ArmorDesc() {};
	  virtual void PopulateStruct( Bscript::BStruct* descriptor ) const;
      virtual size_t estimatedSize( ) const;

	  unsigned short ar;
	  std::set<unsigned short> zones;
	  Core::ScriptDef on_hit_script;
	};
  }
}
#endif
