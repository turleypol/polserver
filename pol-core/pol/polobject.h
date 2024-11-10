#ifndef POLOBJECT_H
#define POLOBJECT_H

#ifndef BSCRIPT_BOBJECT_H
#include "../bscript/bobject.h"
#endif

#include "../bscript/executor.h"
#include "uoexec.h"

namespace Pol
{
namespace Core
{
class UOExecutor;
class PolObjectImp : public Bscript::BObjectImp
{
public:
  explicit PolObjectImp( Bscript::BObjectImp::BObjectType type ) : Bscript::BObjectImp( type ) {}

  virtual Bscript::BObjectImp* call_method( const char* methodname,
                                            Bscript::Executor& ex ) override;
  virtual Bscript::BObjectImp* call_method_id( const int id, Bscript::Executor& ex,
                                               bool forcebuiltin = false ) override;

  virtual Bscript::BObjectImp* call_polmethod( const char* methodname, Core::UOExecutor& uoex );
  virtual Bscript::BObjectImp* call_polmethod_id( const int id, Core::UOExecutor& uoex,
                                                  bool forcebuiltin = false );
};

template <class T>
class PolApplicObj : public Bscript::BApplicObj<T>
{
public:
  explicit PolApplicObj( const Bscript::BApplicObjType* object_type )
      : Bscript::BApplicObj<T>( object_type )
  {
  }
  explicit PolApplicObj( const Bscript::BApplicObjType* object_type, const T& value )
      : Bscript::BApplicObj<T>( object_type, value )
  {
  }

  virtual Bscript::BObjectImp* call_method( const char* methodname,
                                            Bscript::Executor& ex ) override;
  virtual Bscript::BObjectImp* call_method_id( const int id, Bscript::Executor& ex,
                                               bool forcebuiltin = false ) override;

  virtual Bscript::BObjectImp* call_polmethod( const char* methodname, Core::UOExecutor& ex );
  virtual Bscript::BObjectImp* call_polmethod_id( const int id, Core::UOExecutor& ex,
                                                  bool forcebuiltin = false );
  virtual Bscript::BObjectRef set_member( const char* membername, Bscript::BObjectImp* value,
                                          bool copy ) override;
  virtual Bscript::BObjectRef set_member_id( const int id, BObjectImp* value, bool copy ) override;
  virtual Bscript::BObjectRef get_member( const char* membername ) override;
  virtual Bscript::BObjectRef get_member_id( const int id ) override;
};

template <class T>
Bscript::BObjectImp* PolApplicObj<T>::call_method( const char* methodname, Bscript::Executor& ex )
{
  passert( ex.type() == Bscript::ExecutorType::POL );

  auto& uoex = static_cast<Core::UOExecutor&>( ex );
  return this->call_polmethod( methodname, uoex );
}

template <class T>
Bscript::BObjectImp* PolApplicObj<T>::call_method_id( const int id, Bscript::Executor& ex,
                                                      bool forcebuiltin )
{
  passert( ex.type() == Bscript::ExecutorType::POL );
  auto& uoex = static_cast<Core::UOExecutor&>( ex );
  return this->call_polmethod_id( id, uoex, forcebuiltin );
}

template <class T>
Bscript::BObjectImp* PolApplicObj<T>::call_polmethod( const char* methodname,
                                                      Core::UOExecutor& uoex )
{
  return Bscript::BObjectImp::call_method( methodname, uoex );
}

template <class T>
Bscript::BObjectImp* PolApplicObj<T>::call_polmethod_id( const int id, Core::UOExecutor& uoex,
                                                         bool forcebuiltin )
{
  return Bscript::BObjectImp::call_method_id( id, uoex, forcebuiltin );
}

template <class T>
Bscript::BObjectRef PolApplicObj<T>::set_member( const char* membername, BObjectImp* value,
                                                 bool copy )
{
  ObjMember* objmember = getKnownObjMember( membername );
  if ( objmember != nullptr )
    return set_member_id( objmember->id, value, copy );
  return BObjectRef( UninitObject::create() );
}

template <class T>
Bscript::BObjectRef PolApplicObj<T>::set_member_id( const int id, BObjectImp* value, bool /*copy*/ )
{
  BObjectImp* result = nullptr;
  if ( auto* l = impptrIf<BLong>( value ) )
    result = obj_->set_script_member_id( id, l->value() );
  else if ( auto* s = impptrIf<String>( value ) )
    result = obj_->set_script_member_id( id, s->value() );
  else if ( auto* d = impptrIf<Double>( value ) )
    result = obj_->set_script_member_id_double( id, d->value() );
  else if ( auto* b = impptrIf<BBoolean>( value ) )
    result = obj_->set_script_member_id( id, (int)b->value() );
  if ( result != nullptr )
    return BObjectRef( result );
  return BObjectRef( UninitObject::create() );
}

template <class T>
Bscript::BObjectRef PolApplicObj<T>::get_member( const char* membername )
{
  ObjMember* objmember = getKnownObjMember( membername );
  if ( objmember != nullptr )
    return this->get_member_id( objmember->id );
  return BObjectRef( UninitObject::create() );
}

template <class T>
Bscript::BObjectRef PolApplicObj<T>::get_member_id( const int id )
{
  BObjectImp* result = obj_->get_script_member_id( id );
  if ( result != nullptr )
    return BObjectRef( result );
  return BObjectRef( UninitObject::create() );
}
}  // namespace Core
}  // namespace Pol
#endif
