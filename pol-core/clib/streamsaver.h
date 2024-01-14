#ifndef CLIB_STREAMSAVER_H
#define CLIB_STREAMSAVER_H

#include <fmt/format.h>
#include <format/format.h>
#include <iosfwd>
#include <iterator>
#include <memory>
#include <string>
#include <thread>

#include "message_queue.h"

#if 0
#include "timer.h"
#endif

namespace Pol
{
namespace Clib
{
class StreamWriter
{
public:
  StreamWriter();
  virtual ~StreamWriter() = default;
  StreamWriter( const StreamWriter& ) = delete;
  StreamWriter& operator=( const StreamWriter& ) = delete;
  fmt::Writer& operator()();

  template <typename Str, typename T>
  void add( Str&& key, T&& value )
  {
    fmt::format_to( std::back_inserter( _buf ), "\t{}\t{}\n", key, value );
    _writer << _buf;
    if ( _writer->size() >= 500 )  // guard against to big objects
      flush();
    _buf = "";
  }
  template <typename Str, typename... Args>
  void write( Str&& format, Args&&... args )
  {
    if constexpr ( sizeof...( args ) == 0 )
      _buf += format;
    else
      fmt::format_to( std::back_inserter( _buf ), format, args... );
    _writer << _buf;
    if ( _writer->size() >= 500 )  // guard against to big objects
      flush();
    _buf = "";
  }
  virtual void init( const std::string& filepath ) = 0;
  virtual void flush() = 0;
  virtual void flush_file() = 0;

protected:
  std::string _buf = {};
  std::unique_ptr<fmt::Writer> _writer;
};

class FMTStreamWriter final : public StreamWriter
{
public:
  FMTStreamWriter() = default;
  virtual ~FMTStreamWriter() = default;
  virtual void init( const std::string& ) override{};  // argument is not used
  virtual void flush() override{};
  virtual void flush_file() override{};
};

class OFStreamWriter final : public StreamWriter
{
public:
  OFStreamWriter();
  OFStreamWriter( std::ofstream* stream );
  virtual ~OFStreamWriter();
  virtual void init( const std::string& filepath ) override;
  virtual void flush() override;
  virtual void flush_file() override;

private:
  std::ofstream* _stream;
#if 0
      Tools::HighPerfTimer::time_mu _fs_time;
#endif
  std::string _stream_name;
};

class OStreamWriter final : public StreamWriter
{
public:
  OStreamWriter();
  OStreamWriter( std::ostream* stream );
  virtual ~OStreamWriter();
  virtual void init( const std::string& filepath ) override;
  virtual void flush() override;
  virtual void flush_file() override;

private:
  std::ostream* _stream;
};


class ThreadedOFStreamWriter final : public StreamWriter
{
  typedef message_queue<std::string> writer_queue;

public:
  ThreadedOFStreamWriter();
  ThreadedOFStreamWriter( std::ofstream* stream );
  virtual ~ThreadedOFStreamWriter();
  virtual void init( const std::string& filepath ) override;
  virtual void flush() override;
  virtual void flush_file() override;

private:
  void start_worker();
  std::ofstream* _stream;
  writer_queue _msg_queue;
  std::thread _writethread;
  std::list<std::string> _writers_hold;
  std::string _stream_name;
};
}  // namespace Clib
}  // namespace Pol
#endif  // CLIB_STREAMSAVER_H
