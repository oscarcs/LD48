#include <hxcpp.h>

#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
namespace sys{

Void FileSystem_obj::__construct()
{
	return null();
}

//FileSystem_obj::~FileSystem_obj() { }

Dynamic FileSystem_obj::__CreateEmpty() { return  new FileSystem_obj; }
hx::ObjectPtr< FileSystem_obj > FileSystem_obj::__new()
{  hx::ObjectPtr< FileSystem_obj > result = new FileSystem_obj();
	result->__construct();
	return result;}

Dynamic FileSystem_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FileSystem_obj > result = new FileSystem_obj();
	result->__construct();
	return result;}

Void FileSystem_obj::createDirectory( ::String path){
{
		HX_STACK_FRAME("sys.FileSystem","createDirectory",0x63bad3cf,"sys.FileSystem.createDirectory","E:\\Haxe\\haxe\\std/cpp/_std/sys/FileSystem.hx",69,0xbf51ec65)
		HX_STACK_ARG(path,"path")
		HX_STACK_LINE(70)
		::String path1 = ::haxe::io::Path_obj::addTrailingSlash(path);		HX_STACK_VAR(path1,"path1");
		HX_STACK_LINE(71)
		Array< ::String > parts;		HX_STACK_VAR(parts,"parts");
		HX_STACK_LINE(71)
		{
			HX_STACK_LINE(71)
			Array< ::String > _g = Array_obj< ::String >::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(71)
			while((true)){
				HX_STACK_LINE(71)
				::String _g1 = ::haxe::io::Path_obj::directory(path1);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(71)
				::String _g11 = path1 = _g1;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(71)
				if ((!(((_g11 != HX_CSTRING("")))))){
					HX_STACK_LINE(71)
					break;
				}
				HX_STACK_LINE(71)
				_g->push(path1);
			}
			HX_STACK_LINE(71)
			parts = _g;
		}
		HX_STACK_LINE(72)
		parts->reverse();
		HX_STACK_LINE(73)
		{
			HX_STACK_LINE(73)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(73)
			while((true)){
				HX_STACK_LINE(73)
				if ((!(((_g1 < parts->length))))){
					HX_STACK_LINE(73)
					break;
				}
				HX_STACK_LINE(73)
				::String part = parts->__get(_g1);		HX_STACK_VAR(part,"part");
				HX_STACK_LINE(73)
				++(_g1);
				HX_STACK_LINE(74)
				Dynamic _g2 = part.charCodeAt((part.length - (int)1));		HX_STACK_VAR(_g2,"_g2");
				struct _Function_3_1{
					inline static bool Block( ::String &part){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","E:\\Haxe\\haxe\\std/cpp/_std/sys/FileSystem.hx",74,0xbf51ec65)
						{
							HX_STACK_LINE(74)
							::String _g3 = ::haxe::io::Path_obj::removeTrailingSlashes(part);		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(74)
							return !(::sys::FileSystem_obj::sys_exists(_g3));
						}
						return null();
					}
				};
				struct _Function_3_2{
					inline static bool Block( ::String &part){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","E:\\Haxe\\haxe\\std/cpp/_std/sys/FileSystem.hx",74,0xbf51ec65)
						{
							HX_STACK_LINE(74)
							Dynamic _g4 = ::sys::FileSystem_obj::sys_create_dir(part,(int)493);		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(74)
							return (_g4 == null());
						}
						return null();
					}
				};
				HX_STACK_LINE(74)
				if (((  (((  (((_g2 != (int)58))) ? bool(_Function_3_1::Block(part)) : bool(false) ))) ? bool(_Function_3_2::Block(part)) : bool(false) ))){
					HX_STACK_LINE(75)
					HX_STACK_DO_THROW((HX_CSTRING("Could not create directory:") + part));
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FileSystem_obj,createDirectory,(void))

Void FileSystem_obj::deleteFile( ::String path){
{
		HX_STACK_FRAME("sys.FileSystem","deleteFile",0x4bd48509,"sys.FileSystem.deleteFile","E:\\Haxe\\haxe\\std/cpp/_std/sys/FileSystem.hx",79,0xbf51ec65)
		HX_STACK_ARG(path,"path")
		HX_STACK_LINE(80)
		Dynamic _g = ::sys::FileSystem_obj::file_delete(path);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(80)
		if (((_g == null()))){
			HX_STACK_LINE(81)
			HX_STACK_DO_THROW((HX_CSTRING("Could not delete file:") + path));
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FileSystem_obj,deleteFile,(void))

Dynamic FileSystem_obj::sys_exists;

Dynamic FileSystem_obj::file_delete;

Dynamic FileSystem_obj::sys_create_dir;


FileSystem_obj::FileSystem_obj()
{
}

Dynamic FileSystem_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"deleteFile") ) { return deleteFile_dyn(); }
		if (HX_FIELD_EQ(inName,"sys_exists") ) { return sys_exists; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"file_delete") ) { return file_delete; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"sys_create_dir") ) { return sys_create_dir; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"createDirectory") ) { return createDirectory_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FileSystem_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"sys_exists") ) { sys_exists=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"file_delete") ) { file_delete=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"sys_create_dir") ) { sys_create_dir=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FileSystem_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("createDirectory"),
	HX_CSTRING("deleteFile"),
	HX_CSTRING("sys_exists"),
	HX_CSTRING("file_delete"),
	HX_CSTRING("sys_create_dir"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FileSystem_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FileSystem_obj::sys_exists,"sys_exists");
	HX_MARK_MEMBER_NAME(FileSystem_obj::file_delete,"file_delete");
	HX_MARK_MEMBER_NAME(FileSystem_obj::sys_create_dir,"sys_create_dir");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FileSystem_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FileSystem_obj::sys_exists,"sys_exists");
	HX_VISIT_MEMBER_NAME(FileSystem_obj::file_delete,"file_delete");
	HX_VISIT_MEMBER_NAME(FileSystem_obj::sys_create_dir,"sys_create_dir");
};

#endif

Class FileSystem_obj::__mClass;

void FileSystem_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("sys.FileSystem"), hx::TCanCast< FileSystem_obj> ,sStaticFields,sMemberFields,
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

void FileSystem_obj::__boot()
{
	sys_exists= ::cpp::Lib_obj::load(HX_CSTRING("std"),HX_CSTRING("sys_exists"),(int)1);
	file_delete= ::cpp::Lib_obj::load(HX_CSTRING("std"),HX_CSTRING("file_delete"),(int)1);
	sys_create_dir= ::cpp::Lib_obj::load(HX_CSTRING("std"),HX_CSTRING("sys_create_dir"),(int)2);
}

} // end namespace sys
