#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledPropertySet
#include <flixel/addons/editors/tiled/TiledPropertySet.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_xml_Fast
#include <haxe/xml/Fast.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_AttribAccess
#include <haxe/xml/_Fast/AttribAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeListAccess
#include <haxe/xml/_Fast/NodeListAccess.h>
#endif
namespace flixel{
namespace addons{
namespace editors{
namespace tiled{

Void TiledPropertySet_obj::__construct()
{
HX_STACK_FRAME("flixel.addons.editors.tiled.TiledPropertySet","new",0x0ee1ea52,"flixel.addons.editors.tiled.TiledPropertySet.new","flixel/addons/editors/tiled/TiledPropertySet.hx",13,0x279539bc)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(14)
	::haxe::ds::StringMap _g = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(14)
	this->keys = _g;
}
;
	return null();
}

//TiledPropertySet_obj::~TiledPropertySet_obj() { }

Dynamic TiledPropertySet_obj::__CreateEmpty() { return  new TiledPropertySet_obj; }
hx::ObjectPtr< TiledPropertySet_obj > TiledPropertySet_obj::__new()
{  hx::ObjectPtr< TiledPropertySet_obj > result = new TiledPropertySet_obj();
	result->__construct();
	return result;}

Dynamic TiledPropertySet_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TiledPropertySet_obj > result = new TiledPropertySet_obj();
	result->__construct();
	return result;}

::String TiledPropertySet_obj::get( ::String Key){
	HX_STACK_FRAME("flixel.addons.editors.tiled.TiledPropertySet","get",0x0edc9a88,"flixel.addons.editors.tiled.TiledPropertySet.get","flixel/addons/editors/tiled/TiledPropertySet.hx",19,0x279539bc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Key,"Key")
	HX_STACK_LINE(19)
	return this->keys->get(Key);
}


HX_DEFINE_DYNAMIC_FUNC1(TiledPropertySet_obj,get,return )

bool TiledPropertySet_obj::contains( ::String Key){
	HX_STACK_FRAME("flixel.addons.editors.tiled.TiledPropertySet","contains",0x498ff2ed,"flixel.addons.editors.tiled.TiledPropertySet.contains","flixel/addons/editors/tiled/TiledPropertySet.hx",24,0x279539bc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Key,"Key")
	HX_STACK_LINE(24)
	return this->keys->exists(Key);
}


HX_DEFINE_DYNAMIC_FUNC1(TiledPropertySet_obj,contains,return )

::String TiledPropertySet_obj::resolve( ::String Name){
	HX_STACK_FRAME("flixel.addons.editors.tiled.TiledPropertySet","resolve",0x30670dde,"flixel.addons.editors.tiled.TiledPropertySet.resolve","flixel/addons/editors/tiled/TiledPropertySet.hx",29,0x279539bc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Name,"Name")
	HX_STACK_LINE(29)
	return this->keys->get(Name);
}


HX_DEFINE_DYNAMIC_FUNC1(TiledPropertySet_obj,resolve,return )

Dynamic TiledPropertySet_obj::keysIterator( ){
	HX_STACK_FRAME("flixel.addons.editors.tiled.TiledPropertySet","keysIterator",0x218013d0,"flixel.addons.editors.tiled.TiledPropertySet.keysIterator","flixel/addons/editors/tiled/TiledPropertySet.hx",34,0x279539bc)
	HX_STACK_THIS(this)
	HX_STACK_LINE(34)
	return this->keys->keys();
}


HX_DEFINE_DYNAMIC_FUNC0(TiledPropertySet_obj,keysIterator,return )

Void TiledPropertySet_obj::extend( ::haxe::xml::Fast Source){
{
		HX_STACK_FRAME("flixel.addons.editors.tiled.TiledPropertySet","extend",0xeb97fb28,"flixel.addons.editors.tiled.TiledPropertySet.extend","flixel/addons/editors/tiled/TiledPropertySet.hx",38,0x279539bc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Source,"Source")
		HX_STACK_LINE(39)
		::haxe::xml::Fast prop;		HX_STACK_VAR(prop,"prop");
		HX_STACK_LINE(41)
		for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(Source->nodes->resolve(HX_CSTRING("property"))->iterator());  __it->hasNext(); ){
			::haxe::xml::Fast prop1 = __it->next();
			{
				HX_STACK_LINE(43)
				::String key = prop1->att->resolve(HX_CSTRING("name"));		HX_STACK_VAR(key,"key");
				HX_STACK_LINE(43)
				::String value = prop1->att->resolve(HX_CSTRING("value"));		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(43)
				this->keys->set(key,value);
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TiledPropertySet_obj,extend,(void))


TiledPropertySet_obj::TiledPropertySet_obj()
{
	HX_INIT_IMPLEMENT_DYNAMIC;
}

void TiledPropertySet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TiledPropertySet);
	HX_MARK_DYNAMIC;
	HX_MARK_MEMBER_NAME(keys,"keys");
	HX_MARK_END_CLASS();
}

void TiledPropertySet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_DYNAMIC;
	HX_VISIT_MEMBER_NAME(keys,"keys");
}

Dynamic TiledPropertySet_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"keys") ) { return keys; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"extend") ) { return extend_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"resolve") ) { return resolve_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"contains") ) { return contains_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"keysIterator") ) { return keysIterator_dyn(); }
	}
	HX_CHECK_DYNAMIC_GET_FIELD(inName);
	return super::__Field(inName,inCallProp);
}

Dynamic TiledPropertySet_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"keys") ) { keys=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	try { return super::__SetField(inName,inValue,inCallProp); }
	catch(Dynamic e) { HX_DYNAMIC_SET_FIELD(inName,inValue); }
	return inValue;
}

void TiledPropertySet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("keys"));
	HX_APPEND_DYNAMIC_FIELDS(outFields);
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(TiledPropertySet_obj,keys),HX_CSTRING("keys")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("get"),
	HX_CSTRING("contains"),
	HX_CSTRING("resolve"),
	HX_CSTRING("keysIterator"),
	HX_CSTRING("extend"),
	HX_CSTRING("keys"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TiledPropertySet_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TiledPropertySet_obj::__mClass,"__mClass");
};

#endif

Class TiledPropertySet_obj::__mClass;

void TiledPropertySet_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.addons.editors.tiled.TiledPropertySet"), hx::TCanCast< TiledPropertySet_obj> ,sStaticFields,sMemberFields,
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

void TiledPropertySet_obj::__boot()
{
}

} // end namespace flixel
} // end namespace addons
} // end namespace editors
} // end namespace tiled
