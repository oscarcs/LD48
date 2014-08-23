#include <hxcpp.h>

#ifndef INCLUDED_UI
#include <UI.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif

Void UI_obj::__construct()
{
HX_STACK_FRAME("UI","new",0x2351a546,"UI.new","UI.hx",21,0x217324ea)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(22)
	int spacing = (int)15;		HX_STACK_VAR(spacing,"spacing");
	HX_STACK_LINE(23)
	int lead = (::flixel::FlxG_obj::camera->height - (int)60);		HX_STACK_VAR(lead,"lead");
	HX_STACK_LINE(29)
	::flixel::text::FlxText _g = ::flixel::text::FlxText_obj::__new(spacing,(int)23,(int)0,HX_CSTRING("Z"),(int)16,null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(29)
	this->ZText = _g;
	HX_STACK_LINE(30)
	::flixel::text::FlxText _g1 = ::flixel::text::FlxText_obj::__new((this->ZText->x + spacing),(int)23,(int)0,HX_CSTRING("X"),(int)16,null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(30)
	this->XText = _g1;
	HX_STACK_LINE(31)
	::flixel::text::FlxText _g2 = ::flixel::text::FlxText_obj::__new((this->XText->x + spacing),(int)23,(int)0,HX_CSTRING("C"),(int)16,null());		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(31)
	this->CText = _g2;
	HX_STACK_LINE(33)
	this->ZText->scrollFactor->set_x((int)0);
	HX_STACK_LINE(34)
	this->XText->scrollFactor->set_x((int)0);
	HX_STACK_LINE(35)
	this->CText->scrollFactor->set_x((int)0);
	HX_STACK_LINE(37)
	this->ZText->scrollFactor->set_y((int)0);
	HX_STACK_LINE(38)
	this->XText->scrollFactor->set_y((int)0);
	HX_STACK_LINE(39)
	this->CText->scrollFactor->set_y((int)0);
	HX_STACK_LINE(42)
	super::__construct(null());
}
;
	return null();
}

//UI_obj::~UI_obj() { }

Dynamic UI_obj::__CreateEmpty() { return  new UI_obj; }
hx::ObjectPtr< UI_obj > UI_obj::__new()
{  hx::ObjectPtr< UI_obj > result = new UI_obj();
	result->__construct();
	return result;}

Dynamic UI_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UI_obj > result = new UI_obj();
	result->__construct();
	return result;}


UI_obj::UI_obj()
{
}

void UI_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UI);
	HX_MARK_MEMBER_NAME(XText,"XText");
	HX_MARK_MEMBER_NAME(ZText,"ZText");
	HX_MARK_MEMBER_NAME(CText,"CText");
	::flixel::group::FlxTypedGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void UI_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(XText,"XText");
	HX_VISIT_MEMBER_NAME(ZText,"ZText");
	HX_VISIT_MEMBER_NAME(CText,"CText");
	::flixel::group::FlxTypedGroup_obj::__Visit(HX_VISIT_ARG);
}

Dynamic UI_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"XText") ) { return XText; }
		if (HX_FIELD_EQ(inName,"ZText") ) { return ZText; }
		if (HX_FIELD_EQ(inName,"CText") ) { return CText; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UI_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"XText") ) { XText=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ZText") ) { ZText=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CText") ) { CText=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UI_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("XText"));
	outFields->push(HX_CSTRING("ZText"));
	outFields->push(HX_CSTRING("CText"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(UI_obj,XText),HX_CSTRING("XText")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(UI_obj,ZText),HX_CSTRING("ZText")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(UI_obj,CText),HX_CSTRING("CText")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("XText"),
	HX_CSTRING("ZText"),
	HX_CSTRING("CText"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UI_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UI_obj::__mClass,"__mClass");
};

#endif

Class UI_obj::__mClass;

void UI_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("UI"), hx::TCanCast< UI_obj> ,sStaticFields,sMemberFields,
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

void UI_obj::__boot()
{
}

