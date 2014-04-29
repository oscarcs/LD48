#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledMap
#include <flixel/addons/editors/tiled/TiledMap.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledObject
#include <flixel/addons/editors/tiled/TiledObject.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledObjectGroup
#include <flixel/addons/editors/tiled/TiledObjectGroup.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledPropertySet
#include <flixel/addons/editors/tiled/TiledPropertySet.h>
#endif
#ifndef INCLUDED_haxe_xml_Fast
#include <haxe/xml/Fast.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_AttribAccess
#include <haxe/xml/_Fast/AttribAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_HasAttribAccess
#include <haxe/xml/_Fast/HasAttribAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeListAccess
#include <haxe/xml/_Fast/NodeListAccess.h>
#endif
namespace flixel{
namespace addons{
namespace editors{
namespace tiled{

Void TiledObjectGroup_obj::__construct(::haxe::xml::Fast Source,::flixel::addons::editors::tiled::TiledMap Parent)
{
HX_STACK_FRAME("flixel.addons.editors.tiled.TiledObjectGroup","new",0x9d90e185,"flixel.addons.editors.tiled.TiledObjectGroup.new","flixel/addons/editors/tiled/TiledObjectGroup.hx",21,0x90b069e9)
HX_STACK_THIS(this)
HX_STACK_ARG(Source,"Source")
HX_STACK_ARG(Parent,"Parent")
{
	HX_STACK_LINE(22)
	::flixel::addons::editors::tiled::TiledPropertySet _g = ::flixel::addons::editors::tiled::TiledPropertySet_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(22)
	this->properties = _g;
	HX_STACK_LINE(23)
	Array< ::Dynamic > _g1 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(23)
	this->objects = _g1;
	HX_STACK_LINE(25)
	this->map = Parent;
	HX_STACK_LINE(26)
	::String _g2 = Source->att->resolve(HX_CSTRING("name"));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(26)
	this->name = _g2;
	HX_STACK_LINE(27)
	bool _g4;		HX_STACK_VAR(_g4,"_g4");
	struct _Function_1_1{
		inline static bool Block( ::haxe::xml::Fast &Source){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/editors/tiled/TiledObjectGroup.hx",27,0x90b069e9)
			{
				HX_STACK_LINE(27)
				::String _g3 = Source->att->resolve(HX_CSTRING("visible"));		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(27)
				return (_g3 == HX_CSTRING("1"));
			}
			return null();
		}
	};
	HX_STACK_LINE(27)
	if (((  ((Source->has->resolve(HX_CSTRING("visible")))) ? bool(_Function_1_1::Block(Source)) : bool(false) ))){
		HX_STACK_LINE(27)
		_g4 = true;
	}
	else{
		HX_STACK_LINE(27)
		_g4 = false;
	}
	HX_STACK_LINE(27)
	this->visible = _g4;
	HX_STACK_LINE(28)
	Float _g6;		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(28)
	if ((Source->has->resolve(HX_CSTRING("opacity")))){
		HX_STACK_LINE(28)
		::String _g5 = Source->att->resolve(HX_CSTRING("opacity"));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(28)
		_g6 = ::Std_obj::parseFloat(_g5);
	}
	else{
		HX_STACK_LINE(28)
		_g6 = (int)0;
	}
	HX_STACK_LINE(28)
	this->opacity = _g6;
	HX_STACK_LINE(29)
	if ((Source->has->resolve(HX_CSTRING("color")))){
		HX_STACK_LINE(31)
		::String hex = Source->att->resolve(HX_CSTRING("color"));		HX_STACK_VAR(hex,"hex");
		HX_STACK_LINE(32)
		::String _g7 = hex.substring((int)1,hex.length);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(32)
		::String _g8 = (HX_CSTRING("0x") + _g7);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(32)
		hex = _g8;
		HX_STACK_LINE(33)
		Dynamic _g9 = ::Std_obj::parseInt(hex);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(33)
		this->color = _g9;
	}
	else{
		HX_STACK_LINE(36)
		this->color = (int)0;
	}
	HX_STACK_LINE(39)
	::haxe::xml::Fast node;		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(41)
	for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(Source->nodes->resolve(HX_CSTRING("properties"))->iterator());  __it->hasNext(); ){
		::haxe::xml::Fast node1 = __it->next();
		this->properties->extend(node1);
	}
	HX_STACK_LINE(47)
	for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(Source->nodes->resolve(HX_CSTRING("object"))->iterator());  __it->hasNext(); ){
		::haxe::xml::Fast node1 = __it->next();
		{
			HX_STACK_LINE(49)
			::flixel::addons::editors::tiled::TiledObject _g10 = ::flixel::addons::editors::tiled::TiledObject_obj::__new(node1,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(49)
			this->objects->push(_g10);
		}
;
	}
}
;
	return null();
}

//TiledObjectGroup_obj::~TiledObjectGroup_obj() { }

Dynamic TiledObjectGroup_obj::__CreateEmpty() { return  new TiledObjectGroup_obj; }
hx::ObjectPtr< TiledObjectGroup_obj > TiledObjectGroup_obj::__new(::haxe::xml::Fast Source,::flixel::addons::editors::tiled::TiledMap Parent)
{  hx::ObjectPtr< TiledObjectGroup_obj > result = new TiledObjectGroup_obj();
	result->__construct(Source,Parent);
	return result;}

Dynamic TiledObjectGroup_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TiledObjectGroup_obj > result = new TiledObjectGroup_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


TiledObjectGroup_obj::TiledObjectGroup_obj()
{
}

void TiledObjectGroup_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TiledObjectGroup);
	HX_MARK_MEMBER_NAME(map,"map");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(opacity,"opacity");
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_MEMBER_NAME(properties,"properties");
	HX_MARK_MEMBER_NAME(objects,"objects");
	HX_MARK_END_CLASS();
}

void TiledObjectGroup_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(map,"map");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(opacity,"opacity");
	HX_VISIT_MEMBER_NAME(visible,"visible");
	HX_VISIT_MEMBER_NAME(properties,"properties");
	HX_VISIT_MEMBER_NAME(objects,"objects");
}

Dynamic TiledObjectGroup_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { return map; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"opacity") ) { return opacity; }
		if (HX_FIELD_EQ(inName,"visible") ) { return visible; }
		if (HX_FIELD_EQ(inName,"objects") ) { return objects; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"properties") ) { return properties; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TiledObjectGroup_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { map=inValue.Cast< ::flixel::addons::editors::tiled::TiledMap >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"opacity") ) { opacity=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visible") ) { visible=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"objects") ) { objects=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"properties") ) { properties=inValue.Cast< ::flixel::addons::editors::tiled::TiledPropertySet >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TiledObjectGroup_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("map"));
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("color"));
	outFields->push(HX_CSTRING("opacity"));
	outFields->push(HX_CSTRING("visible"));
	outFields->push(HX_CSTRING("properties"));
	outFields->push(HX_CSTRING("objects"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::addons::editors::tiled::TiledMap*/ ,(int)offsetof(TiledObjectGroup_obj,map),HX_CSTRING("map")},
	{hx::fsString,(int)offsetof(TiledObjectGroup_obj,name),HX_CSTRING("name")},
	{hx::fsInt,(int)offsetof(TiledObjectGroup_obj,color),HX_CSTRING("color")},
	{hx::fsFloat,(int)offsetof(TiledObjectGroup_obj,opacity),HX_CSTRING("opacity")},
	{hx::fsBool,(int)offsetof(TiledObjectGroup_obj,visible),HX_CSTRING("visible")},
	{hx::fsObject /*::flixel::addons::editors::tiled::TiledPropertySet*/ ,(int)offsetof(TiledObjectGroup_obj,properties),HX_CSTRING("properties")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TiledObjectGroup_obj,objects),HX_CSTRING("objects")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("map"),
	HX_CSTRING("name"),
	HX_CSTRING("color"),
	HX_CSTRING("opacity"),
	HX_CSTRING("visible"),
	HX_CSTRING("properties"),
	HX_CSTRING("objects"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TiledObjectGroup_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TiledObjectGroup_obj::__mClass,"__mClass");
};

#endif

Class TiledObjectGroup_obj::__mClass;

void TiledObjectGroup_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.addons.editors.tiled.TiledObjectGroup"), hx::TCanCast< TiledObjectGroup_obj> ,sStaticFields,sMemberFields,
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

void TiledObjectGroup_obj::__boot()
{
}

} // end namespace flixel
} // end namespace addons
} // end namespace editors
} // end namespace tiled
