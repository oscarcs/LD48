#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_Serializer
#include <haxe/Serializer.h>
#endif
#ifndef INCLUDED_haxe_Unserializer
#include <haxe/Unserializer.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_filesystem_File
#include <openfl/filesystem/File.h>
#endif
#ifndef INCLUDED_openfl_net_SharedObject
#include <openfl/net/SharedObject.h>
#endif
#ifndef INCLUDED_openfl_net_SharedObjectFlushStatus
#include <openfl/net/SharedObjectFlushStatus.h>
#endif
namespace openfl{
namespace net{

Void SharedObject_obj::__construct(::String name,::String localPath,Dynamic data)
{
HX_STACK_FRAME("openfl.net.SharedObject","new",0x9a737b25,"openfl.net.SharedObject.new","openfl/net/SharedObject.hx",26,0x31b7bda9)
HX_STACK_THIS(this)
HX_STACK_ARG(name,"name")
HX_STACK_ARG(localPath,"localPath")
HX_STACK_ARG(data,"data")
{
	HX_STACK_LINE(28)
	super::__construct(null());
	HX_STACK_LINE(30)
	this->name = name;
	HX_STACK_LINE(31)
	this->localPath = localPath;
	HX_STACK_LINE(32)
	this->data = data;
}
;
	return null();
}

//SharedObject_obj::~SharedObject_obj() { }

Dynamic SharedObject_obj::__CreateEmpty() { return  new SharedObject_obj; }
hx::ObjectPtr< SharedObject_obj > SharedObject_obj::__new(::String name,::String localPath,Dynamic data)
{  hx::ObjectPtr< SharedObject_obj > result = new SharedObject_obj();
	result->__construct(name,localPath,data);
	return result;}

Dynamic SharedObject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SharedObject_obj > result = new SharedObject_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void SharedObject_obj::clear( ){
{
		HX_STACK_FRAME("openfl.net.SharedObject","clear",0x69cf1792,"openfl.net.SharedObject.clear","openfl/net/SharedObject.hx",41,0x31b7bda9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(41)
		::openfl::net::SharedObject_obj::lime_clear_user_preference(this->name);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SharedObject_obj,clear,(void))

Void SharedObject_obj::close( ){
{
		HX_STACK_FRAME("openfl.net.SharedObject","close",0x69d6bdbd,"openfl.net.SharedObject.close","openfl/net/SharedObject.hx",58,0x31b7bda9)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SharedObject_obj,close,(void))

::openfl::net::SharedObjectFlushStatus SharedObject_obj::flush( hx::Null< int >  __o_minDiskSpace){
int minDiskSpace = __o_minDiskSpace.Default(0);
	HX_STACK_FRAME("openfl.net.SharedObject","flush",0x240f08c9,"openfl.net.SharedObject.flush","openfl/net/SharedObject.hx",122,0x31b7bda9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(minDiskSpace,"minDiskSpace")
{
		HX_STACK_LINE(124)
		::String encodedData = ::haxe::Serializer_obj::run(this->data);		HX_STACK_VAR(encodedData,"encodedData");
		HX_STACK_LINE(128)
		::openfl::net::SharedObject_obj::lime_set_user_preference(this->name,encodedData);
		HX_STACK_LINE(147)
		return ::openfl::net::SharedObjectFlushStatus_obj::FLUSHED;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(SharedObject_obj,flush,return )

Void SharedObject_obj::setProperty( ::String propertyName,Dynamic value){
{
		HX_STACK_FRAME("openfl.net.SharedObject","setProperty",0xd13889dc,"openfl.net.SharedObject.setProperty","openfl/net/SharedObject.hx",244,0x31b7bda9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(propertyName,"propertyName")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(244)
		if (((this->data != null()))){
			HX_STACK_LINE(246)
			Dynamic o = this->data;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(246)
			if (((o != null()))){
				HX_STACK_LINE(246)
				o->__SetField(propertyName,value,false);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SharedObject_obj,setProperty,(void))

int SharedObject_obj::get_size( ){
	HX_STACK_FRAME("openfl.net.SharedObject","get_size",0x91348765,"openfl.net.SharedObject.get_size","openfl/net/SharedObject.hx",262,0x31b7bda9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(262)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(SharedObject_obj,get_size,return )

::String SharedObject_obj::getFilePath( ::String name,::String localPath){
	HX_STACK_FRAME("openfl.net.SharedObject","getFilePath",0x7e2908bc,"openfl.net.SharedObject.getFilePath","openfl/net/SharedObject.hx",152,0x31b7bda9)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(localPath,"localPath")
	HX_STACK_LINE(154)
	::String path = ::openfl::filesystem::File_obj::get_applicationStorageDirectory()->nativePath;		HX_STACK_VAR(path,"path");
	HX_STACK_LINE(155)
	hx::AddEq(path,((((HX_CSTRING("/") + localPath) + HX_CSTRING("/")) + name) + HX_CSTRING(".sol")));
	HX_STACK_LINE(156)
	return path;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(SharedObject_obj,getFilePath,return )

::openfl::net::SharedObject SharedObject_obj::getLocal( ::String name,::String localPath,hx::Null< bool >  __o_secure){
bool secure = __o_secure.Default(false);
	HX_STACK_FRAME("openfl.net.SharedObject","getLocal",0x9dee0410,"openfl.net.SharedObject.getLocal","openfl/net/SharedObject.hx",161,0x31b7bda9)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(localPath,"localPath")
	HX_STACK_ARG(secure,"secure")
{
		HX_STACK_LINE(163)
		if (((localPath == null()))){
			HX_STACK_LINE(165)
			localPath = HX_CSTRING("");
		}
		HX_STACK_LINE(171)
		::String rawData = ::openfl::net::SharedObject_obj::lime_get_user_preference(name);		HX_STACK_VAR(rawData,"rawData");
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/net/SharedObject.hx",186,0x31b7bda9)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(186)
		Dynamic loadedData = _Function_1_1::Block();		HX_STACK_VAR(loadedData,"loadedData");
		HX_STACK_LINE(188)
		if (((bool((rawData != HX_CSTRING(""))) && bool((rawData != null()))))){
			HX_STACK_LINE(190)
			try
			{
			HX_STACK_CATCHABLE(Dynamic, 0);
			{
				HX_STACK_LINE(192)
				::haxe::Unserializer unserializer = ::haxe::Unserializer_obj::__new(rawData);		HX_STACK_VAR(unserializer,"unserializer");
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/net/SharedObject.hx",193,0x31b7bda9)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("resolveEnum") , ::Type_obj::resolveEnum_dyn(),false);
							__result->Add(HX_CSTRING("resolveClass") , ::openfl::net::SharedObject_obj::resolveClass_dyn(),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(193)
				unserializer->setResolver(_Function_3_1::Block());
				HX_STACK_LINE(194)
				Dynamic _g = unserializer->unserialize();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(194)
				loadedData = _g;
			}
			}
			catch(Dynamic __e){
				{
					HX_STACK_BEGIN_CATCH
					Dynamic e = __e;{
						HX_STACK_LINE(198)
						::haxe::Log_obj::trace(HX_CSTRING("Could not unserialize SharedObject"),hx::SourceInfo(HX_CSTRING("SharedObject.hx"),198,HX_CSTRING("openfl.net.SharedObject"),HX_CSTRING("getLocal")));
						struct _Function_3_1{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/net/SharedObject.hx",199,0x31b7bda9)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(199)
						loadedData = _Function_3_1::Block();
					}
				}
			}
		}
		HX_STACK_LINE(205)
		::openfl::net::SharedObject so = ::openfl::net::SharedObject_obj::__new(name,localPath,loadedData);		HX_STACK_VAR(so,"so");
		HX_STACK_LINE(206)
		return so;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(SharedObject_obj,getLocal,return )

::Class SharedObject_obj::resolveClass( ::String name){
	HX_STACK_FRAME("openfl.net.SharedObject","resolveClass",0x97c71247,"openfl.net.SharedObject.resolveClass","openfl/net/SharedObject.hx",211,0x31b7bda9)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(213)
	if (((name != null()))){
		HX_STACK_LINE(215)
		if ((::StringTools_obj::startsWith(name,HX_CSTRING("neash.")))){
			HX_STACK_LINE(217)
			::String _g = ::StringTools_obj::replace(name,HX_CSTRING("neash."),HX_CSTRING("openfl."));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(217)
			name = _g;
		}
		HX_STACK_LINE(221)
		if ((::StringTools_obj::startsWith(name,HX_CSTRING("native.")))){
			HX_STACK_LINE(223)
			::String _g1 = ::StringTools_obj::replace(name,HX_CSTRING("native."),HX_CSTRING("openfl."));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(223)
			name = _g1;
		}
		HX_STACK_LINE(227)
		if ((::StringTools_obj::startsWith(name,HX_CSTRING("flash.")))){
			HX_STACK_LINE(229)
			::String _g2 = ::StringTools_obj::replace(name,HX_CSTRING("flash."),HX_CSTRING("openfl."));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(229)
			name = _g2;
		}
		HX_STACK_LINE(233)
		return ::Type_obj::resolveClass(name);
	}
	HX_STACK_LINE(237)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SharedObject_obj,resolveClass,return )

Dynamic SharedObject_obj::lime_get_user_preference;

Dynamic SharedObject_obj::lime_set_user_preference;

Dynamic SharedObject_obj::lime_clear_user_preference;


SharedObject_obj::SharedObject_obj()
{
}

void SharedObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SharedObject);
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(localPath,"localPath");
	HX_MARK_MEMBER_NAME(name,"name");
	::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SharedObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(localPath,"localPath");
	HX_VISIT_MEMBER_NAME(name,"name");
	::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

Dynamic SharedObject_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		if (HX_FIELD_EQ(inName,"size") ) { return inCallProp ? get_size() : size; }
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		if (HX_FIELD_EQ(inName,"flush") ) { return flush_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getLocal") ) { return getLocal_dyn(); }
		if (HX_FIELD_EQ(inName,"get_size") ) { return get_size_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"localPath") ) { return localPath; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getFilePath") ) { return getFilePath_dyn(); }
		if (HX_FIELD_EQ(inName,"setProperty") ) { return setProperty_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"resolveClass") ) { return resolveClass_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"lime_get_user_preference") ) { return lime_get_user_preference; }
		if (HX_FIELD_EQ(inName,"lime_set_user_preference") ) { return lime_set_user_preference; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"lime_clear_user_preference") ) { return lime_clear_user_preference; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SharedObject_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"size") ) { size=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"localPath") ) { localPath=inValue.Cast< ::String >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"lime_get_user_preference") ) { lime_get_user_preference=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_set_user_preference") ) { lime_set_user_preference=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"lime_clear_user_preference") ) { lime_clear_user_preference=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SharedObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("data"));
	outFields->push(HX_CSTRING("size"));
	outFields->push(HX_CSTRING("localPath"));
	outFields->push(HX_CSTRING("name"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("getFilePath"),
	HX_CSTRING("getLocal"),
	HX_CSTRING("resolveClass"),
	HX_CSTRING("lime_get_user_preference"),
	HX_CSTRING("lime_set_user_preference"),
	HX_CSTRING("lime_clear_user_preference"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(SharedObject_obj,data),HX_CSTRING("data")},
	{hx::fsInt,(int)offsetof(SharedObject_obj,size),HX_CSTRING("size")},
	{hx::fsString,(int)offsetof(SharedObject_obj,localPath),HX_CSTRING("localPath")},
	{hx::fsString,(int)offsetof(SharedObject_obj,name),HX_CSTRING("name")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("data"),
	HX_CSTRING("size"),
	HX_CSTRING("localPath"),
	HX_CSTRING("name"),
	HX_CSTRING("clear"),
	HX_CSTRING("close"),
	HX_CSTRING("flush"),
	HX_CSTRING("setProperty"),
	HX_CSTRING("get_size"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SharedObject_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(SharedObject_obj::lime_get_user_preference,"lime_get_user_preference");
	HX_MARK_MEMBER_NAME(SharedObject_obj::lime_set_user_preference,"lime_set_user_preference");
	HX_MARK_MEMBER_NAME(SharedObject_obj::lime_clear_user_preference,"lime_clear_user_preference");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SharedObject_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SharedObject_obj::lime_get_user_preference,"lime_get_user_preference");
	HX_VISIT_MEMBER_NAME(SharedObject_obj::lime_set_user_preference,"lime_set_user_preference");
	HX_VISIT_MEMBER_NAME(SharedObject_obj::lime_clear_user_preference,"lime_clear_user_preference");
};

#endif

Class SharedObject_obj::__mClass;

void SharedObject_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.net.SharedObject"), hx::TCanCast< SharedObject_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void SharedObject_obj::__boot()
{
	lime_get_user_preference= ::openfl::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_get_user_preference"),(int)1);
	lime_set_user_preference= ::openfl::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_set_user_preference"),(int)2);
	lime_clear_user_preference= ::openfl::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_clear_user_preference"),(int)1);
}

} // end namespace openfl
} // end namespace net
