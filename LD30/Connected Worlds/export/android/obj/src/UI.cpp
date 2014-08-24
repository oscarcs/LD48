#include <hxcpp.h>

#ifndef INCLUDED_CameraFollowObject
#include <CameraFollowObject.h>
#endif
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
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
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
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRect
#include <flixel/util/FlxRect.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

Void UI_obj::__construct()
{
HX_STACK_FRAME("UI","new",0x2351a546,"UI.new","UI.hx",17,0x217324ea)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(18)
	::CameraFollowObject _g = ::CameraFollowObject_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(18)
	::flixel::FlxG_obj::camera->follow(_g,null(),null(),null());
	HX_STACK_LINE(19)
	{
		HX_STACK_LINE(19)
		::flixel::util::FlxRect _this = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(19)
		_this->x = (int)-500;
		HX_STACK_LINE(19)
		_this->y = (int)-500;
		HX_STACK_LINE(19)
		_this->width = (int)2000;
		HX_STACK_LINE(19)
		_this->height = (int)2000;
		HX_STACK_LINE(19)
		_this;
	}
	HX_STACK_LINE(20)
	::flixel::FlxG_obj::camera->setBounds((int)-500,(int)-500,(int)2000,(int)2000,null());
	HX_STACK_LINE(22)
	::flixel::group::FlxGroup _g1 = ::flixel::group::FlxGroup_obj::__new(null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(22)
	this->arrows = _g1;
	HX_STACK_LINE(24)
	::flixel::FlxSprite _g2 = ::flixel::FlxSprite_obj::__new((int)0,(int)0,HX_CSTRING("assets/images/up.png"));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(24)
	this->up = _g2;
	HX_STACK_LINE(25)
	::flixel::FlxSprite _g3 = ::flixel::FlxSprite_obj::__new((int)0,(int)0,HX_CSTRING("assets/images/down.png"));		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(25)
	this->down = _g3;
	HX_STACK_LINE(26)
	::flixel::FlxSprite _g4 = ::flixel::FlxSprite_obj::__new((int)0,(int)0,HX_CSTRING("assets/images/left.png"));		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(26)
	this->left = _g4;
	HX_STACK_LINE(27)
	::flixel::FlxSprite _g5 = ::flixel::FlxSprite_obj::__new((int)0,(int)0,HX_CSTRING("assets/images/right.png"));		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(27)
	this->right = _g5;
	HX_STACK_LINE(29)
	this->arrows->add(this->up);
	HX_STACK_LINE(30)
	this->arrows->add(this->down);
	HX_STACK_LINE(31)
	this->arrows->add(this->left);
	HX_STACK_LINE(32)
	this->arrows->add(this->right);
	HX_STACK_LINE(34)
	Float wd = (::flixel::FlxG_obj::width * ::flixel::FlxG_obj::camera->zoom);		HX_STACK_VAR(wd,"wd");
	HX_STACK_LINE(35)
	Float ht = (::flixel::FlxG_obj::height * ::flixel::FlxG_obj::camera->zoom);		HX_STACK_VAR(ht,"ht");
	HX_STACK_LINE(37)
	this->up->setPosition(((Float(wd) / Float((int)2)) - (int)16),(int)5);
	HX_STACK_LINE(38)
	this->down->setPosition(((Float(wd) / Float((int)2)) - (int)16),((ht - (int)5) - (int)32));
	HX_STACK_LINE(39)
	this->left->setPosition((int)5,((Float(ht) / Float((int)2)) - (int)16));
	HX_STACK_LINE(40)
	this->right->setPosition(((wd - (int)5) - (int)32),(Float(ht) / Float((int)2)));
	HX_STACK_LINE(42)
	this->up->scrollFactor->set((int)0,(int)0);
	HX_STACK_LINE(43)
	this->down->scrollFactor->set((int)0,(int)0);
	HX_STACK_LINE(44)
	this->left->scrollFactor->set((int)0,(int)0);
	HX_STACK_LINE(45)
	this->right->scrollFactor->set((int)0,(int)0);
	HX_STACK_LINE(47)
	::flixel::FlxG_obj::game->_state->add(this->arrows);
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
	HX_MARK_MEMBER_NAME(arrows,"arrows");
	HX_MARK_MEMBER_NAME(left,"left");
	HX_MARK_MEMBER_NAME(right,"right");
	HX_MARK_MEMBER_NAME(up,"up");
	HX_MARK_MEMBER_NAME(down,"down");
	HX_MARK_END_CLASS();
}

void UI_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(arrows,"arrows");
	HX_VISIT_MEMBER_NAME(left,"left");
	HX_VISIT_MEMBER_NAME(right,"right");
	HX_VISIT_MEMBER_NAME(up,"up");
	HX_VISIT_MEMBER_NAME(down,"down");
}

Dynamic UI_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"up") ) { return up; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { return left; }
		if (HX_FIELD_EQ(inName,"down") ) { return down; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { return right; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"arrows") ) { return arrows; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UI_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"up") ) { up=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { left=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"down") ) { down=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { right=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"arrows") ) { arrows=inValue.Cast< ::flixel::group::FlxGroup >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UI_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("arrows"));
	outFields->push(HX_CSTRING("left"));
	outFields->push(HX_CSTRING("right"));
	outFields->push(HX_CSTRING("up"));
	outFields->push(HX_CSTRING("down"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::group::FlxGroup*/ ,(int)offsetof(UI_obj,arrows),HX_CSTRING("arrows")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(UI_obj,left),HX_CSTRING("left")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(UI_obj,right),HX_CSTRING("right")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(UI_obj,up),HX_CSTRING("up")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(UI_obj,down),HX_CSTRING("down")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("arrows"),
	HX_CSTRING("left"),
	HX_CSTRING("right"),
	HX_CSTRING("up"),
	HX_CSTRING("down"),
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

