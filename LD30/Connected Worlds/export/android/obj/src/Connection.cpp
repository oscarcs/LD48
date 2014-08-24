#include <hxcpp.h>

#ifndef INCLUDED_Connection
#include <Connection.h>
#endif
#ifndef INCLUDED_Star
#include <Star.h>
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
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSpriteUtil
#include <flixel/util/FlxSpriteUtil.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
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

Void Connection_obj::__construct(::Star star1,::Star star2)
{
HX_STACK_FRAME("Connection","new",0x11f93c30,"Connection.new","Connection.hx",9,0x20395940)
HX_STACK_THIS(this)
HX_STACK_ARG(star1,"star1")
HX_STACK_ARG(star2,"star2")
{
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Connection.hx",17,0x20395940)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(17)
	this->ls = _Function_1_1::Block();
	HX_STACK_LINE(16)
	this->screenHeight = (int)0;
	HX_STACK_LINE(15)
	this->screenWidth = (int)0;
	HX_STACK_LINE(25)
	super::__construct();
	HX_STACK_LINE(26)
	this->star1 = star1;
	HX_STACK_LINE(27)
	this->star2 = star2;
	HX_STACK_LINE(29)
	star1->connections->push(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(30)
	star2->connections->push(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(32)
	Float _g = ::Math_obj::abs((star1->mid->y - star2->mid->y));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(32)
	int _g1 = ::Math_obj::ceil(_g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(32)
	this->screenHeight = _g1;
	HX_STACK_LINE(33)
	Float _g2 = ::Math_obj::abs((star1->mid->x - star2->mid->x));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(33)
	int _g3 = ::Math_obj::ceil(_g2);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(33)
	this->screenWidth = _g3;
	HX_STACK_LINE(35)
	this->ls->__FieldRef(HX_CSTRING("thickness")) = (int)2;
	HX_STACK_LINE(36)
	this->ls->__FieldRef(HX_CSTRING("color")) = (int)-1;
	HX_STACK_LINE(39)
	Float _g4 = ::Math_obj::min(star1->mid->x,star2->mid->x);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(39)
	Float _g5 = ::Math_obj::min(star1->mid->y,star2->mid->y);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(39)
	::flixel::util::FlxPoint _g6 = ::flixel::util::FlxPoint_obj::__new(_g4,_g5);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(39)
	this->start = _g6;
	HX_STACK_LINE(41)
	Float _g7 = ::Math_obj::max(star1->mid->x,star2->mid->x);		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(41)
	Float _g8 = ::Math_obj::max(star1->mid->y,star2->mid->y);		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(41)
	::flixel::util::FlxPoint _g9 = ::flixel::util::FlxPoint_obj::__new(_g7,_g8);		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(41)
	this->end = _g9;
	HX_STACK_LINE(43)
	::flixel::FlxSprite _g10 = ::flixel::FlxSprite_obj::__new(this->start->x,this->start->y,null());		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(43)
	this->connectionGraphic = _g10;
	HX_STACK_LINE(44)
	this->connectionGraphic->makeGraphic(this->screenWidth,this->screenHeight,(int)0,null(),null());
	HX_STACK_LINE(47)
	::Star a;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(47)
	::Star b;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(48)
	Float _g11 = ::Math_obj::max(star1->x,star2->x);		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(48)
	if (((_g11 == star1->x))){
		HX_STACK_LINE(50)
		a = star1;
		HX_STACK_LINE(51)
		b = star2;
	}
	else{
		HX_STACK_LINE(55)
		a = star2;
		HX_STACK_LINE(56)
		b = star1;
	}
	HX_STACK_LINE(59)
	if (((b->y > a->y))){
		HX_STACK_LINE(64)
		Float _g12 = this->connectionGraphic->get_height();		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(64)
		Float _g13 = this->connectionGraphic->get_width();		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(64)
		::flixel::util::FlxSpriteUtil_obj::drawLine(this->connectionGraphic,(int)0,_g12,_g13,(int)0,this->ls,null());
	}
	else{
		HX_STACK_LINE(71)
		Float _g14 = this->connectionGraphic->get_width();		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(71)
		Float _g15 = this->connectionGraphic->get_height();		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(71)
		::flixel::util::FlxSpriteUtil_obj::drawLine(this->connectionGraphic,(int)0,(int)0,_g14,_g15,this->ls,null());
	}
	HX_STACK_LINE(74)
	::flixel::FlxG_obj::game->_state->add(this->connectionGraphic);
}
;
	return null();
}

//Connection_obj::~Connection_obj() { }

Dynamic Connection_obj::__CreateEmpty() { return  new Connection_obj; }
hx::ObjectPtr< Connection_obj > Connection_obj::__new(::Star star1,::Star star2)
{  hx::ObjectPtr< Connection_obj > result = new Connection_obj();
	result->__construct(star1,star2);
	return result;}

Dynamic Connection_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Connection_obj > result = new Connection_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Connection_obj::update( ){
{
		HX_STACK_FRAME("Connection","update",0x8dd15c39,"Connection.update","Connection.hx",78,0x20395940)
		HX_STACK_THIS(this)
		HX_STACK_LINE(79)
		this->super::update();
		HX_STACK_LINE(81)
		this->connectionGraphic->set_color((int)-1);
		HX_STACK_LINE(83)
		if ((this->connectionGraphic->pixelsOverlapPoint(::flixel::FlxG_obj::mouse,(int)-1,::flixel::FlxG_obj::camera))){
			HX_STACK_LINE(85)
			this->connectionGraphic->set_color((int)-16711681);
			struct _Function_2_1{
				inline static bool Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Connection.hx",86,0x20395940)
					{
						HX_STACK_LINE(86)
						::flixel::input::mouse::FlxMouseButton _this = ::flixel::FlxG_obj::mouse->_rightButton;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(86)
						return (bool((_this->current == (int)-1)) || bool((_this->current == (int)-2)));
					}
					return null();
				}
			};
			HX_STACK_LINE(86)
			if ((_Function_2_1::Block())){
				HX_STACK_LINE(88)
				this->connectionGraphic->destroy();
				HX_STACK_LINE(89)
				this->destroy();
			}
		}
		HX_STACK_LINE(93)
		if ((this->updated)){
			HX_STACK_LINE(95)
			Float _g = ::Math_obj::abs((this->star1->y - this->star2->y));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(95)
			int _g1 = ::Math_obj::floor(_g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(95)
			this->screenHeight = _g1;
			HX_STACK_LINE(96)
			Float _g2 = ::Math_obj::abs((this->star1->x - this->star2->x));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(96)
			int _g3 = ::Math_obj::floor(_g2);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(96)
			this->screenWidth = _g3;
			HX_STACK_LINE(97)
			Float _g4 = ::Math_obj::min(this->star1->mid->x,this->star2->mid->x);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(97)
			Float _g5 = ::Math_obj::min(this->star1->mid->y,this->star2->mid->y);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(97)
			::flixel::util::FlxPoint _g6 = ::flixel::util::FlxPoint_obj::__new(_g4,_g5);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(97)
			this->start = _g6;
			HX_STACK_LINE(98)
			Float _g7 = ::Math_obj::max(this->star1->mid->x,this->star2->mid->x);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(98)
			Float _g8 = ::Math_obj::max(this->star1->mid->y,this->star2->mid->y);		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(98)
			::flixel::util::FlxPoint _g9 = ::flixel::util::FlxPoint_obj::__new(_g7,_g8);		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(98)
			this->end = _g9;
			HX_STACK_LINE(100)
			::flixel::FlxSprite _g10 = ::flixel::FlxSprite_obj::__new(this->start->x,this->start->y,null());		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(100)
			this->connectionGraphic = _g10;
			HX_STACK_LINE(101)
			this->connectionGraphic->makeGraphic(this->screenWidth,this->screenHeight,(int)0,null(),null());
			HX_STACK_LINE(103)
			::flixel::util::FlxSpriteUtil_obj::fill(this->connectionGraphic,(int)0);
			HX_STACK_LINE(104)
			Float _g11 = this->connectionGraphic->get_width();		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(104)
			Float _g12 = this->connectionGraphic->get_height();		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(104)
			::flixel::util::FlxSpriteUtil_obj::drawLine(this->connectionGraphic,(int)0,(int)0,_g11,_g12,this->ls,null());
			HX_STACK_LINE(105)
			this->updated = false;
		}
	}
return null();
}



Connection_obj::Connection_obj()
{
}

void Connection_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Connection);
	HX_MARK_MEMBER_NAME(star1,"star1");
	HX_MARK_MEMBER_NAME(star2,"star2");
	HX_MARK_MEMBER_NAME(connectionGraphic,"connectionGraphic");
	HX_MARK_MEMBER_NAME(screenWidth,"screenWidth");
	HX_MARK_MEMBER_NAME(screenHeight,"screenHeight");
	HX_MARK_MEMBER_NAME(ls,"ls");
	HX_MARK_MEMBER_NAME(updated,"updated");
	HX_MARK_MEMBER_NAME(start,"start");
	HX_MARK_MEMBER_NAME(end,"end");
	HX_MARK_END_CLASS();
}

void Connection_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(star1,"star1");
	HX_VISIT_MEMBER_NAME(star2,"star2");
	HX_VISIT_MEMBER_NAME(connectionGraphic,"connectionGraphic");
	HX_VISIT_MEMBER_NAME(screenWidth,"screenWidth");
	HX_VISIT_MEMBER_NAME(screenHeight,"screenHeight");
	HX_VISIT_MEMBER_NAME(ls,"ls");
	HX_VISIT_MEMBER_NAME(updated,"updated");
	HX_VISIT_MEMBER_NAME(start,"start");
	HX_VISIT_MEMBER_NAME(end,"end");
}

Dynamic Connection_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ls") ) { return ls; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { return end; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"star1") ) { return star1; }
		if (HX_FIELD_EQ(inName,"star2") ) { return star2; }
		if (HX_FIELD_EQ(inName,"start") ) { return start; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"updated") ) { return updated; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"screenWidth") ) { return screenWidth; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"screenHeight") ) { return screenHeight; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"connectionGraphic") ) { return connectionGraphic; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Connection_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ls") ) { ls=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { end=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"star1") ) { star1=inValue.Cast< ::Star >(); return inValue; }
		if (HX_FIELD_EQ(inName,"star2") ) { star2=inValue.Cast< ::Star >(); return inValue; }
		if (HX_FIELD_EQ(inName,"start") ) { start=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"updated") ) { updated=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"screenWidth") ) { screenWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"screenHeight") ) { screenHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"connectionGraphic") ) { connectionGraphic=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Connection_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("star1"));
	outFields->push(HX_CSTRING("star2"));
	outFields->push(HX_CSTRING("connectionGraphic"));
	outFields->push(HX_CSTRING("screenWidth"));
	outFields->push(HX_CSTRING("screenHeight"));
	outFields->push(HX_CSTRING("ls"));
	outFields->push(HX_CSTRING("updated"));
	outFields->push(HX_CSTRING("start"));
	outFields->push(HX_CSTRING("end"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::Star*/ ,(int)offsetof(Connection_obj,star1),HX_CSTRING("star1")},
	{hx::fsObject /*::Star*/ ,(int)offsetof(Connection_obj,star2),HX_CSTRING("star2")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(Connection_obj,connectionGraphic),HX_CSTRING("connectionGraphic")},
	{hx::fsInt,(int)offsetof(Connection_obj,screenWidth),HX_CSTRING("screenWidth")},
	{hx::fsInt,(int)offsetof(Connection_obj,screenHeight),HX_CSTRING("screenHeight")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Connection_obj,ls),HX_CSTRING("ls")},
	{hx::fsBool,(int)offsetof(Connection_obj,updated),HX_CSTRING("updated")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(Connection_obj,start),HX_CSTRING("start")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(Connection_obj,end),HX_CSTRING("end")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("star1"),
	HX_CSTRING("star2"),
	HX_CSTRING("connectionGraphic"),
	HX_CSTRING("screenWidth"),
	HX_CSTRING("screenHeight"),
	HX_CSTRING("ls"),
	HX_CSTRING("updated"),
	HX_CSTRING("start"),
	HX_CSTRING("end"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Connection_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Connection_obj::__mClass,"__mClass");
};

#endif

Class Connection_obj::__mClass;

void Connection_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Connection"), hx::TCanCast< Connection_obj> ,sStaticFields,sMemberFields,
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

void Connection_obj::__boot()
{
}

