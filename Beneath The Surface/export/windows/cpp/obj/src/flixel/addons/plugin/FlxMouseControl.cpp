#include <hxcpp.h>

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
#ifndef INCLUDED_flixel_addons_display_FlxExtendedSprite
#include <flixel/addons/display/FlxExtendedSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_plugin_FlxMouseControl
#include <flixel/addons/plugin/FlxMouseControl.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseButton
#include <flixel/input/mouse/FlxMouseButton.h>
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
#ifndef INCLUDED_flixel_plugin_FlxPlugin
#include <flixel/plugin/FlxPlugin.h>
#endif
#ifndef INCLUDED_flixel_util_FlxMath
#include <flixel/util/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRect
#include <flixel/util/FlxRect.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace flixel{
namespace addons{
namespace plugin{

Void FlxMouseControl_obj::__construct()
{
HX_STACK_FRAME("flixel.addons.plugin.FlxMouseControl","new",0x08bbf8ea,"flixel.addons.plugin.FlxMouseControl.new","flixel/addons/plugin/FlxMouseControl.hx",18,0x04dd2fe7)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(18)
	super::__construct();
}
;
	return null();
}

//FlxMouseControl_obj::~FlxMouseControl_obj() { }

Dynamic FlxMouseControl_obj::__CreateEmpty() { return  new FlxMouseControl_obj; }
hx::ObjectPtr< FlxMouseControl_obj > FlxMouseControl_obj::__new()
{  hx::ObjectPtr< FlxMouseControl_obj > result = new FlxMouseControl_obj();
	result->__construct();
	return result;}

Dynamic FlxMouseControl_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxMouseControl_obj > result = new FlxMouseControl_obj();
	result->__construct();
	return result;}

Void FlxMouseControl_obj::update( ){
{
		HX_STACK_FRAME("flixel.addons.plugin.FlxMouseControl","update",0x7b5dcfbf,"flixel.addons.plugin.FlxMouseControl.update","flixel/addons/plugin/FlxMouseControl.hx",129,0x04dd2fe7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(131)
		::flixel::addons::plugin::FlxMouseControl_obj::speedX = (::flixel::FlxG_obj::mouse->screenX - ::flixel::addons::plugin::FlxMouseControl_obj::_oldX);
		HX_STACK_LINE(132)
		::flixel::addons::plugin::FlxMouseControl_obj::speedY = (::flixel::FlxG_obj::mouse->screenY - ::flixel::addons::plugin::FlxMouseControl_obj::_oldY);
		HX_STACK_LINE(134)
		::flixel::addons::plugin::FlxMouseControl_obj::_oldX = ::flixel::FlxG_obj::mouse->screenX;
		HX_STACK_LINE(135)
		::flixel::addons::plugin::FlxMouseControl_obj::_oldY = ::flixel::FlxG_obj::mouse->screenY;
		HX_STACK_LINE(138)
		if ((::flixel::addons::plugin::FlxMouseControl_obj::_hasClickTarget)){
			HX_STACK_LINE(140)
			if (((::flixel::FlxG_obj::mouse->_leftButton->current > (int)0))){
				HX_STACK_LINE(143)
				if (((bool((bool((::flixel::addons::plugin::FlxMouseControl_obj::isDragging == false)) && bool((::flixel::addons::plugin::FlxMouseControl_obj::clickTarget->draggable == true)))) && bool(((bool((::flixel::addons::plugin::FlxMouseControl_obj::_clickCoords->x != ::flixel::FlxG_obj::mouse->x)) || bool((::flixel::addons::plugin::FlxMouseControl_obj::_clickCoords->y != ::flixel::FlxG_obj::mouse->y)))))))){
					HX_STACK_LINE(146)
					::flixel::addons::plugin::FlxMouseControl_obj::isDragging = true;
					HX_STACK_LINE(148)
					::flixel::addons::plugin::FlxMouseControl_obj::dragTarget = ::flixel::addons::plugin::FlxMouseControl_obj::clickTarget;
					HX_STACK_LINE(150)
					::flixel::addons::plugin::FlxMouseControl_obj::dragTarget->startDrag();
				}
			}
			else{
				HX_STACK_LINE(155)
				this->releaseMouse();
			}
			HX_STACK_LINE(158)
			if (((::flixel::addons::plugin::FlxMouseControl_obj::linkToDeadZone == true))){
				HX_STACK_LINE(160)
				bool _g = ::flixel::util::FlxMath_obj::mouseInFlxRect(false,::flixel::FlxG_obj::camera->deadzone);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(160)
				if (((_g == false))){
					HX_STACK_LINE(162)
					this->releaseMouse();
				}
			}
			else{
				HX_STACK_LINE(165)
				bool _g1 = ::flixel::util::FlxMath_obj::mouseInFlxRect(true,::flixel::addons::plugin::FlxMouseControl_obj::mouseZone);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(165)
				if (((_g1 == false))){
					HX_STACK_LINE(168)
					this->releaseMouse();
				}
			}
		}
		else{
			HX_STACK_LINE(175)
			if (((bool((::flixel::FlxG_obj::mouse->_leftButton->current > (int)0)) && bool((::flixel::addons::plugin::FlxMouseControl_obj::_clickStack->length > (int)0))))){
				HX_STACK_LINE(177)
				this->assignClickedSprite();
			}
		}
	}
return null();
}


Void FlxMouseControl_obj::releaseMouse( ){
{
		HX_STACK_FRAME("flixel.addons.plugin.FlxMouseControl","releaseMouse",0xc8ff2514,"flixel.addons.plugin.FlxMouseControl.releaseMouse","flixel/addons/plugin/FlxMouseControl.hx",186,0x04dd2fe7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(188)
		::flixel::addons::plugin::FlxMouseControl_obj::clickTarget->mouseReleasedHandler();
		HX_STACK_LINE(190)
		::flixel::addons::plugin::FlxMouseControl_obj::_hasClickTarget = false;
		HX_STACK_LINE(191)
		::flixel::addons::plugin::FlxMouseControl_obj::clickTarget = null();
		HX_STACK_LINE(193)
		::flixel::addons::plugin::FlxMouseControl_obj::isDragging = false;
		HX_STACK_LINE(194)
		::flixel::addons::plugin::FlxMouseControl_obj::dragTarget = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouseControl_obj,releaseMouse,(void))

Void FlxMouseControl_obj::assignClickedSprite( ){
{
		HX_STACK_FRAME("flixel.addons.plugin.FlxMouseControl","assignClickedSprite",0x7c03b2e7,"flixel.addons.plugin.FlxMouseControl.assignClickedSprite","flixel/addons/plugin/FlxMouseControl.hx",201,0x04dd2fe7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(203)
		if (((::flixel::addons::plugin::FlxMouseControl_obj::_clickStack->length > (int)1))){
			HX_STACK_LINE(205)
			::flixel::addons::plugin::FlxMouseControl_obj::_clickStack->sort(this->sortHandler_dyn());
		}
		HX_STACK_LINE(208)
		::flixel::addons::display::FlxExtendedSprite _g = ::flixel::addons::plugin::FlxMouseControl_obj::_clickStack->pop().StaticCast< ::flixel::addons::display::FlxExtendedSprite >();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(208)
		::flixel::addons::plugin::FlxMouseControl_obj::clickTarget = _g;
		HX_STACK_LINE(210)
		::flixel::addons::plugin::FlxMouseControl_obj::_clickCoords = ::flixel::addons::plugin::FlxMouseControl_obj::clickTarget->_point;
		HX_STACK_LINE(212)
		::flixel::addons::plugin::FlxMouseControl_obj::_hasClickTarget = true;
		HX_STACK_LINE(214)
		::flixel::addons::plugin::FlxMouseControl_obj::clickTarget->mousePressedHandler();
		HX_STACK_LINE(216)
		::flixel::addons::plugin::FlxMouseControl_obj::_clickStack = Array_obj< ::Dynamic >::__new();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouseControl_obj,assignClickedSprite,(void))

int FlxMouseControl_obj::sortHandler( ::flixel::addons::display::FlxExtendedSprite Item1,::flixel::addons::display::FlxExtendedSprite Item2){
	HX_STACK_FRAME("flixel.addons.plugin.FlxMouseControl","sortHandler",0x50aa3a96,"flixel.addons.plugin.FlxMouseControl.sortHandler","flixel/addons/plugin/FlxMouseControl.hx",228,0x04dd2fe7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Item1,"Item1")
	HX_STACK_ARG(Item2,"Item2")
	HX_STACK_LINE(229)
	int prop1;		HX_STACK_VAR(prop1,"prop1");
	HX_STACK_LINE(229)
	prop1 = (  (((Item1 == null()))) ? Dynamic(null()) : Dynamic(Item1->__Field(::flixel::addons::plugin::FlxMouseControl_obj::sortIndex,true)) );
	HX_STACK_LINE(230)
	int prop2;		HX_STACK_VAR(prop2,"prop2");
	HX_STACK_LINE(230)
	prop2 = (  (((Item2 == null()))) ? Dynamic(null()) : Dynamic(Item2->__Field(::flixel::addons::plugin::FlxMouseControl_obj::sortIndex,true)) );
	HX_STACK_LINE(232)
	if (((prop1 < prop2))){
		HX_STACK_LINE(234)
		return ::flixel::addons::plugin::FlxMouseControl_obj::sortOrder;
	}
	else{
		HX_STACK_LINE(236)
		if (((prop1 > prop2))){
			HX_STACK_LINE(238)
			return -(::flixel::addons::plugin::FlxMouseControl_obj::sortOrder);
		}
	}
	HX_STACK_LINE(241)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxMouseControl_obj,sortHandler,return )

Void FlxMouseControl_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.addons.plugin.FlxMouseControl","destroy",0xfd6e6284,"flixel.addons.plugin.FlxMouseControl.destroy","flixel/addons/plugin/FlxMouseControl.hx",249,0x04dd2fe7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(249)
		::flixel::addons::plugin::FlxMouseControl_obj::clear();
	}
return null();
}


int FlxMouseControl_obj::ASCENDING;

int FlxMouseControl_obj::DESCENDING;

::String FlxMouseControl_obj::sortIndex;

int FlxMouseControl_obj::sortOrder;

bool FlxMouseControl_obj::isDragging;

::flixel::addons::display::FlxExtendedSprite FlxMouseControl_obj::dragTarget;

::flixel::addons::display::FlxExtendedSprite FlxMouseControl_obj::clickTarget;

int FlxMouseControl_obj::speedX;

int FlxMouseControl_obj::speedY;

::flixel::util::FlxRect FlxMouseControl_obj::mouseZone;

bool FlxMouseControl_obj::linkToDeadZone;

Array< ::Dynamic > FlxMouseControl_obj::_clickStack;

::flixel::util::FlxPoint FlxMouseControl_obj::_clickCoords;

bool FlxMouseControl_obj::_hasClickTarget;

int FlxMouseControl_obj::_oldX;

int FlxMouseControl_obj::_oldY;

Void FlxMouseControl_obj::addToStack( ::flixel::addons::display::FlxExtendedSprite Item){
{
		HX_STACK_FRAME("flixel.addons.plugin.FlxMouseControl","addToStack",0xc3b83c62,"flixel.addons.plugin.FlxMouseControl.addToStack","flixel/addons/plugin/FlxMouseControl.hx",84,0x04dd2fe7)
		HX_STACK_ARG(Item,"Item")
		HX_STACK_LINE(84)
		if (((::flixel::addons::plugin::FlxMouseControl_obj::mouseZone != null()))){
			HX_STACK_LINE(86)
			int _g = ::Math_obj::floor(::flixel::FlxG_obj::mouse->x);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(86)
			int _g1 = ::Math_obj::floor(::flixel::FlxG_obj::mouse->y);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(86)
			bool _g2 = ::flixel::util::FlxMath_obj::pointInFlxRect(_g,_g1,::flixel::addons::plugin::FlxMouseControl_obj::mouseZone);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(86)
			if (((_g2 == true))){
				HX_STACK_LINE(88)
				::flixel::addons::plugin::FlxMouseControl_obj::_clickStack->push(Item);
			}
		}
		else{
			HX_STACK_LINE(93)
			::flixel::addons::plugin::FlxMouseControl_obj::_clickStack->push(Item);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxMouseControl_obj,addToStack,(void))

Void FlxMouseControl_obj::clear( ){
{
		HX_STACK_FRAME("flixel.addons.plugin.FlxMouseControl","clear",0x59865097,"flixel.addons.plugin.FlxMouseControl.clear","flixel/addons/plugin/FlxMouseControl.hx",101,0x04dd2fe7)
		HX_STACK_LINE(102)
		::flixel::addons::plugin::FlxMouseControl_obj::_hasClickTarget = false;
		HX_STACK_LINE(104)
		if (((::flixel::addons::plugin::FlxMouseControl_obj::clickTarget != null()))){
			HX_STACK_LINE(106)
			::flixel::addons::plugin::FlxMouseControl_obj::clickTarget->mouseReleasedHandler();
		}
		HX_STACK_LINE(109)
		::flixel::addons::plugin::FlxMouseControl_obj::clickTarget = null();
		HX_STACK_LINE(111)
		::flixel::addons::plugin::FlxMouseControl_obj::isDragging = false;
		HX_STACK_LINE(113)
		if (((::flixel::addons::plugin::FlxMouseControl_obj::dragTarget != null()))){
			HX_STACK_LINE(115)
			::flixel::addons::plugin::FlxMouseControl_obj::dragTarget->stopDrag();
		}
		HX_STACK_LINE(118)
		::flixel::addons::plugin::FlxMouseControl_obj::speedX = (int)0;
		HX_STACK_LINE(119)
		::flixel::addons::plugin::FlxMouseControl_obj::speedY = (int)0;
		HX_STACK_LINE(120)
		::flixel::addons::plugin::FlxMouseControl_obj::dragTarget = null();
		HX_STACK_LINE(121)
		::flixel::addons::plugin::FlxMouseControl_obj::mouseZone = null();
		HX_STACK_LINE(122)
		::flixel::addons::plugin::FlxMouseControl_obj::linkToDeadZone = false;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxMouseControl_obj,clear,(void))


FlxMouseControl_obj::FlxMouseControl_obj()
{
}

Dynamic FlxMouseControl_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_oldX") ) { return _oldX; }
		if (HX_FIELD_EQ(inName,"_oldY") ) { return _oldY; }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"speedX") ) { return speedX; }
		if (HX_FIELD_EQ(inName,"speedY") ) { return speedY; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"sortIndex") ) { return sortIndex; }
		if (HX_FIELD_EQ(inName,"sortOrder") ) { return sortOrder; }
		if (HX_FIELD_EQ(inName,"mouseZone") ) { return mouseZone; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isDragging") ) { return isDragging; }
		if (HX_FIELD_EQ(inName,"dragTarget") ) { return dragTarget; }
		if (HX_FIELD_EQ(inName,"addToStack") ) { return addToStack_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"clickTarget") ) { return clickTarget; }
		if (HX_FIELD_EQ(inName,"_clickStack") ) { return _clickStack; }
		if (HX_FIELD_EQ(inName,"sortHandler") ) { return sortHandler_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_clickCoords") ) { return _clickCoords; }
		if (HX_FIELD_EQ(inName,"releaseMouse") ) { return releaseMouse_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"linkToDeadZone") ) { return linkToDeadZone; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_hasClickTarget") ) { return _hasClickTarget; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"assignClickedSprite") ) { return assignClickedSprite_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxMouseControl_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_oldX") ) { _oldX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_oldY") ) { _oldY=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"speedX") ) { speedX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"speedY") ) { speedY=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"sortIndex") ) { sortIndex=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sortOrder") ) { sortOrder=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseZone") ) { mouseZone=inValue.Cast< ::flixel::util::FlxRect >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isDragging") ) { isDragging=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dragTarget") ) { dragTarget=inValue.Cast< ::flixel::addons::display::FlxExtendedSprite >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"clickTarget") ) { clickTarget=inValue.Cast< ::flixel::addons::display::FlxExtendedSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_clickStack") ) { _clickStack=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_clickCoords") ) { _clickCoords=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"linkToDeadZone") ) { linkToDeadZone=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_hasClickTarget") ) { _hasClickTarget=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxMouseControl_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("ASCENDING"),
	HX_CSTRING("DESCENDING"),
	HX_CSTRING("sortIndex"),
	HX_CSTRING("sortOrder"),
	HX_CSTRING("isDragging"),
	HX_CSTRING("dragTarget"),
	HX_CSTRING("clickTarget"),
	HX_CSTRING("speedX"),
	HX_CSTRING("speedY"),
	HX_CSTRING("mouseZone"),
	HX_CSTRING("linkToDeadZone"),
	HX_CSTRING("_clickStack"),
	HX_CSTRING("_clickCoords"),
	HX_CSTRING("_hasClickTarget"),
	HX_CSTRING("_oldX"),
	HX_CSTRING("_oldY"),
	HX_CSTRING("addToStack"),
	HX_CSTRING("clear"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("update"),
	HX_CSTRING("releaseMouse"),
	HX_CSTRING("assignClickedSprite"),
	HX_CSTRING("sortHandler"),
	HX_CSTRING("destroy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxMouseControl_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxMouseControl_obj::ASCENDING,"ASCENDING");
	HX_MARK_MEMBER_NAME(FlxMouseControl_obj::DESCENDING,"DESCENDING");
	HX_MARK_MEMBER_NAME(FlxMouseControl_obj::sortIndex,"sortIndex");
	HX_MARK_MEMBER_NAME(FlxMouseControl_obj::sortOrder,"sortOrder");
	HX_MARK_MEMBER_NAME(FlxMouseControl_obj::isDragging,"isDragging");
	HX_MARK_MEMBER_NAME(FlxMouseControl_obj::dragTarget,"dragTarget");
	HX_MARK_MEMBER_NAME(FlxMouseControl_obj::clickTarget,"clickTarget");
	HX_MARK_MEMBER_NAME(FlxMouseControl_obj::speedX,"speedX");
	HX_MARK_MEMBER_NAME(FlxMouseControl_obj::speedY,"speedY");
	HX_MARK_MEMBER_NAME(FlxMouseControl_obj::mouseZone,"mouseZone");
	HX_MARK_MEMBER_NAME(FlxMouseControl_obj::linkToDeadZone,"linkToDeadZone");
	HX_MARK_MEMBER_NAME(FlxMouseControl_obj::_clickStack,"_clickStack");
	HX_MARK_MEMBER_NAME(FlxMouseControl_obj::_clickCoords,"_clickCoords");
	HX_MARK_MEMBER_NAME(FlxMouseControl_obj::_hasClickTarget,"_hasClickTarget");
	HX_MARK_MEMBER_NAME(FlxMouseControl_obj::_oldX,"_oldX");
	HX_MARK_MEMBER_NAME(FlxMouseControl_obj::_oldY,"_oldY");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxMouseControl_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxMouseControl_obj::ASCENDING,"ASCENDING");
	HX_VISIT_MEMBER_NAME(FlxMouseControl_obj::DESCENDING,"DESCENDING");
	HX_VISIT_MEMBER_NAME(FlxMouseControl_obj::sortIndex,"sortIndex");
	HX_VISIT_MEMBER_NAME(FlxMouseControl_obj::sortOrder,"sortOrder");
	HX_VISIT_MEMBER_NAME(FlxMouseControl_obj::isDragging,"isDragging");
	HX_VISIT_MEMBER_NAME(FlxMouseControl_obj::dragTarget,"dragTarget");
	HX_VISIT_MEMBER_NAME(FlxMouseControl_obj::clickTarget,"clickTarget");
	HX_VISIT_MEMBER_NAME(FlxMouseControl_obj::speedX,"speedX");
	HX_VISIT_MEMBER_NAME(FlxMouseControl_obj::speedY,"speedY");
	HX_VISIT_MEMBER_NAME(FlxMouseControl_obj::mouseZone,"mouseZone");
	HX_VISIT_MEMBER_NAME(FlxMouseControl_obj::linkToDeadZone,"linkToDeadZone");
	HX_VISIT_MEMBER_NAME(FlxMouseControl_obj::_clickStack,"_clickStack");
	HX_VISIT_MEMBER_NAME(FlxMouseControl_obj::_clickCoords,"_clickCoords");
	HX_VISIT_MEMBER_NAME(FlxMouseControl_obj::_hasClickTarget,"_hasClickTarget");
	HX_VISIT_MEMBER_NAME(FlxMouseControl_obj::_oldX,"_oldX");
	HX_VISIT_MEMBER_NAME(FlxMouseControl_obj::_oldY,"_oldY");
};

#endif

Class FlxMouseControl_obj::__mClass;

void FlxMouseControl_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.addons.plugin.FlxMouseControl"), hx::TCanCast< FlxMouseControl_obj> ,sStaticFields,sMemberFields,
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

void FlxMouseControl_obj::__boot()
{
	ASCENDING= (int)-1;
	DESCENDING= (int)1;
	sortIndex= HX_CSTRING("y");
	sortOrder= (int)-1;
	isDragging= false;
	linkToDeadZone= false;
	_clickStack= Array_obj< ::Dynamic >::__new();
	_hasClickTarget= false;
	_oldX= (int)0;
	_oldY= (int)0;
}

} // end namespace flixel
} // end namespace addons
} // end namespace plugin
