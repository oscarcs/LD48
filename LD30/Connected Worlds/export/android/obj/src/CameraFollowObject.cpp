#include <hxcpp.h>

#ifndef INCLUDED_CameraFollowObject
#include <CameraFollowObject.h>
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
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_touch_FlxTouch
#include <flixel/input/touch/FlxTouch.h>
#endif
#ifndef INCLUDED_flixel_input_touch_FlxTouchManager
#include <flixel/input/touch/FlxTouchManager.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxInput
#include <flixel/interfaces/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
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

Void CameraFollowObject_obj::__construct()
{
HX_STACK_FRAME("CameraFollowObject","new",0xcd1f48e7,"CameraFollowObject.new","CameraFollowObject.hx",6,0x76039069)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(8)
	this->speed = (int)2;
	HX_STACK_LINE(17)
	super::__construct((Float(::flixel::FlxG_obj::width) / Float((int)2)),(Float(::flixel::FlxG_obj::height) / Float((int)2)),(int)1,(int)1);
	HX_STACK_LINE(18)
	::flixel::FlxG_obj::game->_state->add(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(21)
	::flixel::FlxObject _g = ::flixel::FlxObject_obj::__new((Float(::flixel::FlxG_obj::width) / Float((int)4)),(int)0,(::flixel::FlxG_obj::width - (Float(::flixel::FlxG_obj::width) / Float((int)2))),(Float(::flixel::FlxG_obj::height) / Float((int)4)));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(21)
	this->upZone = _g;
	HX_STACK_LINE(22)
	::flixel::FlxObject _g1 = ::flixel::FlxObject_obj::__new((Float(::flixel::FlxG_obj::width) / Float((int)4)),(::flixel::FlxG_obj::height * 0.75),(::flixel::FlxG_obj::width - (Float(::flixel::FlxG_obj::width) / Float((int)2))),(Float(::flixel::FlxG_obj::height) / Float((int)4)));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(22)
	this->downZone = _g1;
	HX_STACK_LINE(23)
	::flixel::FlxObject _g2 = ::flixel::FlxObject_obj::__new((int)0,(int)0,(Float(::flixel::FlxG_obj::width) / Float((int)4)),::flixel::FlxG_obj::height);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(23)
	this->leftZone = _g2;
	HX_STACK_LINE(24)
	::flixel::FlxObject _g3 = ::flixel::FlxObject_obj::__new((::flixel::FlxG_obj::width * 0.75),(int)0,(Float(::flixel::FlxG_obj::width) / Float((int)4)),::flixel::FlxG_obj::height);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(24)
	this->rightZone = _g3;
}
;
	return null();
}

//CameraFollowObject_obj::~CameraFollowObject_obj() { }

Dynamic CameraFollowObject_obj::__CreateEmpty() { return  new CameraFollowObject_obj; }
hx::ObjectPtr< CameraFollowObject_obj > CameraFollowObject_obj::__new()
{  hx::ObjectPtr< CameraFollowObject_obj > result = new CameraFollowObject_obj();
	result->__construct();
	return result;}

Dynamic CameraFollowObject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CameraFollowObject_obj > result = new CameraFollowObject_obj();
	result->__construct();
	return result;}

Void CameraFollowObject_obj::update( ){
{
		HX_STACK_FRAME("CameraFollowObject","update",0x35f0dbe2,"CameraFollowObject.update","CameraFollowObject.hx",29,0x76039069)
		HX_STACK_THIS(this)
		HX_STACK_LINE(30)
		this->super::update();
		HX_STACK_LINE(57)
		bool didLeft = false;		HX_STACK_VAR(didLeft,"didLeft");
		HX_STACK_LINE(58)
		bool didRight = false;		HX_STACK_VAR(didRight,"didRight");
		HX_STACK_LINE(59)
		bool didUp = false;		HX_STACK_VAR(didUp,"didUp");
		HX_STACK_LINE(60)
		bool didDown = false;		HX_STACK_VAR(didDown,"didDown");
		HX_STACK_LINE(62)
		{
			HX_STACK_LINE(62)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(62)
			Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::touches->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(62)
			while((true)){
				HX_STACK_LINE(62)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(62)
					break;
				}
				HX_STACK_LINE(62)
				::flixel::input::touch::FlxTouch touch = _g1->__get(_g).StaticCast< ::flixel::input::touch::FlxTouch >();		HX_STACK_VAR(touch,"touch");
				HX_STACK_LINE(62)
				++(_g);
				HX_STACK_LINE(64)
				if (((  ((touch->overlaps(this->leftZone,null()))) ? bool(!(didLeft)) : bool(false) ))){
					HX_STACK_LINE(66)
					didLeft = true;
					HX_STACK_LINE(67)
					{
						HX_STACK_LINE(67)
						::CameraFollowObject _g2 = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(67)
						_g2->set_x((_g2->x - this->speed));
					}
				}
				else{
					HX_STACK_LINE(69)
					if (((  ((touch->overlaps(this->rightZone,null()))) ? bool(!(didRight)) : bool(false) ))){
						HX_STACK_LINE(71)
						didRight = true;
						HX_STACK_LINE(72)
						{
							HX_STACK_LINE(72)
							::CameraFollowObject _g2 = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(72)
							_g2->set_x((_g2->x + this->speed));
						}
					}
					else{
						HX_STACK_LINE(74)
						if (((  ((touch->overlaps(this->upZone,null()))) ? bool(!(didUp)) : bool(false) ))){
							HX_STACK_LINE(76)
							didUp = true;
							HX_STACK_LINE(77)
							{
								HX_STACK_LINE(77)
								::CameraFollowObject _g2 = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(77)
								_g2->set_y((_g2->y - this->speed));
							}
						}
						else{
							HX_STACK_LINE(79)
							if (((  ((touch->overlaps(this->downZone,null()))) ? bool(!(didDown)) : bool(false) ))){
								HX_STACK_LINE(81)
								didDown = true;
								HX_STACK_LINE(82)
								{
									HX_STACK_LINE(82)
									::CameraFollowObject _g2 = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(82)
									_g2->set_y((_g2->y + this->speed));
								}
							}
						}
					}
				}
			}
		}
	}
return null();
}



CameraFollowObject_obj::CameraFollowObject_obj()
{
}

void CameraFollowObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CameraFollowObject);
	HX_MARK_MEMBER_NAME(speed,"speed");
	HX_MARK_MEMBER_NAME(upZone,"upZone");
	HX_MARK_MEMBER_NAME(downZone,"downZone");
	HX_MARK_MEMBER_NAME(leftZone,"leftZone");
	HX_MARK_MEMBER_NAME(rightZone,"rightZone");
	::flixel::FlxObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CameraFollowObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(speed,"speed");
	HX_VISIT_MEMBER_NAME(upZone,"upZone");
	HX_VISIT_MEMBER_NAME(downZone,"downZone");
	HX_VISIT_MEMBER_NAME(leftZone,"leftZone");
	HX_VISIT_MEMBER_NAME(rightZone,"rightZone");
	::flixel::FlxObject_obj::__Visit(HX_VISIT_ARG);
}

Dynamic CameraFollowObject_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { return speed; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"upZone") ) { return upZone; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"downZone") ) { return downZone; }
		if (HX_FIELD_EQ(inName,"leftZone") ) { return leftZone; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"rightZone") ) { return rightZone; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CameraFollowObject_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { speed=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"upZone") ) { upZone=inValue.Cast< ::flixel::FlxObject >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"downZone") ) { downZone=inValue.Cast< ::flixel::FlxObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"leftZone") ) { leftZone=inValue.Cast< ::flixel::FlxObject >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"rightZone") ) { rightZone=inValue.Cast< ::flixel::FlxObject >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CameraFollowObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("speed"));
	outFields->push(HX_CSTRING("upZone"));
	outFields->push(HX_CSTRING("downZone"));
	outFields->push(HX_CSTRING("leftZone"));
	outFields->push(HX_CSTRING("rightZone"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(CameraFollowObject_obj,speed),HX_CSTRING("speed")},
	{hx::fsObject /*::flixel::FlxObject*/ ,(int)offsetof(CameraFollowObject_obj,upZone),HX_CSTRING("upZone")},
	{hx::fsObject /*::flixel::FlxObject*/ ,(int)offsetof(CameraFollowObject_obj,downZone),HX_CSTRING("downZone")},
	{hx::fsObject /*::flixel::FlxObject*/ ,(int)offsetof(CameraFollowObject_obj,leftZone),HX_CSTRING("leftZone")},
	{hx::fsObject /*::flixel::FlxObject*/ ,(int)offsetof(CameraFollowObject_obj,rightZone),HX_CSTRING("rightZone")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("speed"),
	HX_CSTRING("upZone"),
	HX_CSTRING("downZone"),
	HX_CSTRING("leftZone"),
	HX_CSTRING("rightZone"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CameraFollowObject_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CameraFollowObject_obj::__mClass,"__mClass");
};

#endif

Class CameraFollowObject_obj::__mClass;

void CameraFollowObject_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("CameraFollowObject"), hx::TCanCast< CameraFollowObject_obj> ,sStaticFields,sMemberFields,
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

void CameraFollowObject_obj::__boot()
{
}

