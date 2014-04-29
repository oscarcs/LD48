#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_addons_display_FlxMouseSpring
#include <flixel/addons/display/FlxMouseSpring.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
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
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace flixel{
namespace addons{
namespace display{

Void FlxMouseSpring_obj::__construct(::flixel::addons::display::FlxExtendedSprite Sprite,hx::Null< bool >  __o_RetainVelocity,hx::Null< Float >  __o_Tension,hx::Null< Float >  __o_Friction,hx::Null< Float >  __o_Gravity)
{
HX_STACK_FRAME("flixel.addons.display.FlxMouseSpring","new",0x7170d847,"flixel.addons.display.FlxMouseSpring.new","flixel/addons/display/FlxMouseSpring.hx",6,0xe39b05c8)
HX_STACK_THIS(this)
HX_STACK_ARG(Sprite,"Sprite")
HX_STACK_ARG(__o_RetainVelocity,"RetainVelocity")
HX_STACK_ARG(__o_Tension,"Tension")
HX_STACK_ARG(__o_Friction,"Friction")
HX_STACK_ARG(__o_Gravity,"Gravity")
bool RetainVelocity = __o_RetainVelocity.Default(false);
Float Tension = __o_Tension.Default(0.1);
Float Friction = __o_Friction.Default(0.95);
Float Gravity = __o_Gravity.Default(0);
{
	HX_STACK_LINE(34)
	this->_ay = (int)0;
	HX_STACK_LINE(33)
	this->_ax = (int)0;
	HX_STACK_LINE(31)
	this->_dy = (int)0;
	HX_STACK_LINE(30)
	this->_dx = (int)0;
	HX_STACK_LINE(28)
	this->_vy = (int)0;
	HX_STACK_LINE(27)
	this->_vx = (int)0;
	HX_STACK_LINE(47)
	this->sprite = Sprite;
	HX_STACK_LINE(48)
	this->_retainVelocity = RetainVelocity;
	HX_STACK_LINE(49)
	this->tension = Tension;
	HX_STACK_LINE(50)
	this->friction = Friction;
	HX_STACK_LINE(51)
	this->gravity = Gravity;
}
;
	return null();
}

//FlxMouseSpring_obj::~FlxMouseSpring_obj() { }

Dynamic FlxMouseSpring_obj::__CreateEmpty() { return  new FlxMouseSpring_obj; }
hx::ObjectPtr< FlxMouseSpring_obj > FlxMouseSpring_obj::__new(::flixel::addons::display::FlxExtendedSprite Sprite,hx::Null< bool >  __o_RetainVelocity,hx::Null< Float >  __o_Tension,hx::Null< Float >  __o_Friction,hx::Null< Float >  __o_Gravity)
{  hx::ObjectPtr< FlxMouseSpring_obj > result = new FlxMouseSpring_obj();
	result->__construct(Sprite,__o_RetainVelocity,__o_Tension,__o_Friction,__o_Gravity);
	return result;}

Dynamic FlxMouseSpring_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxMouseSpring_obj > result = new FlxMouseSpring_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}

Void FlxMouseSpring_obj::update( ){
{
		HX_STACK_FRAME("flixel.addons.display.FlxMouseSpring","update",0x1f372882,"flixel.addons.display.FlxMouseSpring.update","flixel/addons/display/FlxMouseSpring.hx",58,0xe39b05c8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(59)
		int _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(59)
		{
			HX_STACK_LINE(59)
			::flixel::addons::display::FlxExtendedSprite _this = this->sprite;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(59)
			_g = ::Math_obj::floor((_this->x + _this->springOffsetX));
		}
		HX_STACK_LINE(59)
		Float _g1 = (::flixel::FlxG_obj::mouse->x - _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(59)
		this->_dx = _g1;
		HX_STACK_LINE(60)
		int _g2;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(60)
		{
			HX_STACK_LINE(60)
			::flixel::addons::display::FlxExtendedSprite _this = this->sprite;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(60)
			_g2 = ::Math_obj::floor((_this->y + _this->springOffsetY));
		}
		HX_STACK_LINE(60)
		Float _g3 = (::flixel::FlxG_obj::mouse->y - _g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(60)
		this->_dy = _g3;
		HX_STACK_LINE(62)
		this->_ax = (this->_dx * this->tension);
		HX_STACK_LINE(63)
		this->_ay = (this->_dy * this->tension);
		HX_STACK_LINE(65)
		hx::AddEq(this->_vx,this->_ax);
		HX_STACK_LINE(66)
		hx::AddEq(this->_vy,this->_ay);
		HX_STACK_LINE(68)
		hx::AddEq(this->_vy,this->gravity);
		HX_STACK_LINE(69)
		hx::MultEq(this->_vx,this->friction);
		HX_STACK_LINE(70)
		hx::MultEq(this->_vy,this->friction);
		HX_STACK_LINE(72)
		{
			HX_STACK_LINE(72)
			::flixel::addons::display::FlxExtendedSprite _g4 = this->sprite;		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(72)
			_g4->set_x((_g4->x + this->_vx));
		}
		HX_STACK_LINE(73)
		{
			HX_STACK_LINE(73)
			::flixel::addons::display::FlxExtendedSprite _g4 = this->sprite;		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(73)
			_g4->set_y((_g4->y + this->_vy));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouseSpring_obj,update,(void))

Void FlxMouseSpring_obj::reset( ){
{
		HX_STACK_FRAME("flixel.addons.display.FlxMouseSpring","reset",0x9f245976,"flixel.addons.display.FlxMouseSpring.reset","flixel/addons/display/FlxMouseSpring.hx",80,0xe39b05c8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(81)
		this->_vx = (int)0;
		HX_STACK_LINE(82)
		this->_vy = (int)0;
		HX_STACK_LINE(84)
		this->_dx = (int)0;
		HX_STACK_LINE(85)
		this->_dy = (int)0;
		HX_STACK_LINE(87)
		this->_ax = (int)0;
		HX_STACK_LINE(88)
		this->_ay = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouseSpring_obj,reset,(void))


FlxMouseSpring_obj::FlxMouseSpring_obj()
{
}

void FlxMouseSpring_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxMouseSpring);
	HX_MARK_MEMBER_NAME(sprite,"sprite");
	HX_MARK_MEMBER_NAME(tension,"tension");
	HX_MARK_MEMBER_NAME(friction,"friction");
	HX_MARK_MEMBER_NAME(gravity,"gravity");
	HX_MARK_MEMBER_NAME(_retainVelocity,"_retainVelocity");
	HX_MARK_MEMBER_NAME(_vx,"_vx");
	HX_MARK_MEMBER_NAME(_vy,"_vy");
	HX_MARK_MEMBER_NAME(_dx,"_dx");
	HX_MARK_MEMBER_NAME(_dy,"_dy");
	HX_MARK_MEMBER_NAME(_ax,"_ax");
	HX_MARK_MEMBER_NAME(_ay,"_ay");
	HX_MARK_END_CLASS();
}

void FlxMouseSpring_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(sprite,"sprite");
	HX_VISIT_MEMBER_NAME(tension,"tension");
	HX_VISIT_MEMBER_NAME(friction,"friction");
	HX_VISIT_MEMBER_NAME(gravity,"gravity");
	HX_VISIT_MEMBER_NAME(_retainVelocity,"_retainVelocity");
	HX_VISIT_MEMBER_NAME(_vx,"_vx");
	HX_VISIT_MEMBER_NAME(_vy,"_vy");
	HX_VISIT_MEMBER_NAME(_dx,"_dx");
	HX_VISIT_MEMBER_NAME(_dy,"_dy");
	HX_VISIT_MEMBER_NAME(_ax,"_ax");
	HX_VISIT_MEMBER_NAME(_ay,"_ay");
}

Dynamic FlxMouseSpring_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_vx") ) { return _vx; }
		if (HX_FIELD_EQ(inName,"_vy") ) { return _vy; }
		if (HX_FIELD_EQ(inName,"_dx") ) { return _dx; }
		if (HX_FIELD_EQ(inName,"_dy") ) { return _dy; }
		if (HX_FIELD_EQ(inName,"_ax") ) { return _ax; }
		if (HX_FIELD_EQ(inName,"_ay") ) { return _ay; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"sprite") ) { return sprite; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"tension") ) { return tension; }
		if (HX_FIELD_EQ(inName,"gravity") ) { return gravity; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"friction") ) { return friction; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_retainVelocity") ) { return _retainVelocity; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxMouseSpring_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_vx") ) { _vx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_vy") ) { _vy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_dx") ) { _dx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_dy") ) { _dy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ax") ) { _ax=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ay") ) { _ay=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"sprite") ) { sprite=inValue.Cast< ::flixel::addons::display::FlxExtendedSprite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"tension") ) { tension=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gravity") ) { gravity=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"friction") ) { friction=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_retainVelocity") ) { _retainVelocity=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxMouseSpring_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("sprite"));
	outFields->push(HX_CSTRING("tension"));
	outFields->push(HX_CSTRING("friction"));
	outFields->push(HX_CSTRING("gravity"));
	outFields->push(HX_CSTRING("_retainVelocity"));
	outFields->push(HX_CSTRING("_vx"));
	outFields->push(HX_CSTRING("_vy"));
	outFields->push(HX_CSTRING("_dx"));
	outFields->push(HX_CSTRING("_dy"));
	outFields->push(HX_CSTRING("_ax"));
	outFields->push(HX_CSTRING("_ay"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::addons::display::FlxExtendedSprite*/ ,(int)offsetof(FlxMouseSpring_obj,sprite),HX_CSTRING("sprite")},
	{hx::fsFloat,(int)offsetof(FlxMouseSpring_obj,tension),HX_CSTRING("tension")},
	{hx::fsFloat,(int)offsetof(FlxMouseSpring_obj,friction),HX_CSTRING("friction")},
	{hx::fsFloat,(int)offsetof(FlxMouseSpring_obj,gravity),HX_CSTRING("gravity")},
	{hx::fsBool,(int)offsetof(FlxMouseSpring_obj,_retainVelocity),HX_CSTRING("_retainVelocity")},
	{hx::fsFloat,(int)offsetof(FlxMouseSpring_obj,_vx),HX_CSTRING("_vx")},
	{hx::fsFloat,(int)offsetof(FlxMouseSpring_obj,_vy),HX_CSTRING("_vy")},
	{hx::fsFloat,(int)offsetof(FlxMouseSpring_obj,_dx),HX_CSTRING("_dx")},
	{hx::fsFloat,(int)offsetof(FlxMouseSpring_obj,_dy),HX_CSTRING("_dy")},
	{hx::fsFloat,(int)offsetof(FlxMouseSpring_obj,_ax),HX_CSTRING("_ax")},
	{hx::fsFloat,(int)offsetof(FlxMouseSpring_obj,_ay),HX_CSTRING("_ay")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("sprite"),
	HX_CSTRING("tension"),
	HX_CSTRING("friction"),
	HX_CSTRING("gravity"),
	HX_CSTRING("_retainVelocity"),
	HX_CSTRING("_vx"),
	HX_CSTRING("_vy"),
	HX_CSTRING("_dx"),
	HX_CSTRING("_dy"),
	HX_CSTRING("_ax"),
	HX_CSTRING("_ay"),
	HX_CSTRING("update"),
	HX_CSTRING("reset"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxMouseSpring_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxMouseSpring_obj::__mClass,"__mClass");
};

#endif

Class FlxMouseSpring_obj::__mClass;

void FlxMouseSpring_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.addons.display.FlxMouseSpring"), hx::TCanCast< FlxMouseSpring_obj> ,sStaticFields,sMemberFields,
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

void FlxMouseSpring_obj::__boot()
{
}

} // end namespace flixel
} // end namespace addons
} // end namespace display
