#include <hxcpp.h>

#ifndef INCLUDED_Character
#include <Character.h>
#endif
#ifndef INCLUDED_Pillar
#include <Pillar.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Reg
#include <Reg.h>
#endif
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
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_display_FlxExtendedSprite
#include <flixel/addons/display/FlxExtendedSprite.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
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
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_FlxPoint
#include <flixel/util/FlxPool_flixel_util_FlxPoint.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif

Void Pillar_obj::__construct(Float x,Float y)
{
HX_STACK_FRAME("Pillar","new",0xd3a787fc,"Pillar.new","Pillar.hx",13,0x40168af4)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
{
	HX_STACK_LINE(17)
	this->deactivateCounter = (int)0;
	HX_STACK_LINE(16)
	this->isActivated = false;
	HX_STACK_LINE(21)
	super::__construct(x,y,null());
	HX_STACK_LINE(23)
	this->loadGraphic(HX_CSTRING("assets/images/pillar.png"),true,(int)16,(int)48,null(),null());
	HX_STACK_LINE(24)
	this->animation->add(HX_CSTRING("static"),Array_obj< int >::__new().Add((int)0),(int)0,true);
	HX_STACK_LINE(25)
	this->animation->add(HX_CSTRING("activate"),Array_obj< int >::__new().Add((int)0).Add((int)1).Add((int)2).Add((int)3).Add((int)4).Add((int)5).Add((int)6),(int)15,false);
	HX_STACK_LINE(26)
	this->animation->add(HX_CSTRING("deactivate"),Array_obj< int >::__new().Add((int)6).Add((int)5).Add((int)4).Add((int)3).Add((int)2).Add((int)1).Add((int)0),(int)15,false);
	HX_STACK_LINE(27)
	this->animation->play(HX_CSTRING("static"),null(),null());
}
;
	return null();
}

//Pillar_obj::~Pillar_obj() { }

Dynamic Pillar_obj::__CreateEmpty() { return  new Pillar_obj; }
hx::ObjectPtr< Pillar_obj > Pillar_obj::__new(Float x,Float y)
{  hx::ObjectPtr< Pillar_obj > result = new Pillar_obj();
	result->__construct(x,y);
	return result;}

Dynamic Pillar_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Pillar_obj > result = new Pillar_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Pillar_obj::update( ){
{
		HX_STACK_FRAME("Pillar","update",0xa6bb77ed,"Pillar.update","Pillar.hx",31,0x40168af4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(32)
		this->super::update();
		HX_STACK_LINE(34)
		if (((this->isActivated == true))){
			HX_STACK_LINE(36)
			hx::AddEq(this->deactivateCounter,::flixel::FlxG_obj::elapsed);
		}
		HX_STACK_LINE(38)
		if (((this->deactivateCounter > (int)10))){
			HX_STACK_LINE(40)
			this->deactivate();
		}
	}
return null();
}


Void Pillar_obj::checkActivation( ::flixel::FlxObject object,::PlayState state){
{
		HX_STACK_FRAME("Pillar","checkActivation",0x55e4311a,"Pillar.checkActivation","Pillar.hx",47,0x40168af4)
		HX_STACK_THIS(this)
		HX_STACK_ARG(object,"object")
		HX_STACK_ARG(state,"state")
		HX_STACK_LINE(47)
		if ((::flixel::FlxG_obj::keys->checkKeyStatus(Array_obj< ::String >::__new().Add(HX_CSTRING("Z")),(int)1))){
			HX_STACK_LINE(49)
			Float _g = this->get_width();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(49)
			Float _g1 = (Float(_g) / Float((int)2));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(49)
			Float _g2 = (this->x + _g1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(49)
			Float _g3 = this->get_height();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(49)
			Float _g4 = (Float(_g3) / Float((int)2));		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(49)
			Float _g5 = (this->y + _g4);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(49)
			::flixel::util::FlxPoint p1 = ::flixel::util::FlxPoint_obj::__new(_g2,_g5);		HX_STACK_VAR(p1,"p1");
			HX_STACK_LINE(50)
			Float _g6 = object->get_width();		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(50)
			Float _g7 = (Float(_g6) / Float((int)2));		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(50)
			Float _g8 = (object->x + _g7);		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(50)
			Float _g9 = object->get_height();		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(50)
			Float _g10 = (Float(_g9) / Float((int)2));		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(50)
			Float _g11 = (object->y + _g10);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(50)
			::flixel::util::FlxPoint p2 = ::flixel::util::FlxPoint_obj::__new(_g8,_g11);		HX_STACK_VAR(p2,"p2");
			HX_STACK_LINE(52)
			Float distance;		HX_STACK_VAR(distance,"distance");
			HX_STACK_LINE(52)
			{
				HX_STACK_LINE(52)
				Float dx = (p1->x - p2->x);		HX_STACK_VAR(dx,"dx");
				HX_STACK_LINE(52)
				Float dy = (p1->y - p2->y);		HX_STACK_VAR(dy,"dy");
				HX_STACK_LINE(52)
				if ((p1->_weak)){
					HX_STACK_LINE(52)
					::flixel::util::FlxPoint_obj::_pool->put(p1);
				}
				HX_STACK_LINE(52)
				if ((p2->_weak)){
					HX_STACK_LINE(52)
					::flixel::util::FlxPoint_obj::_pool->put(p2);
				}
				HX_STACK_LINE(52)
				distance = ::Math_obj::sqrt(((dx * dx) + (dy * dy)));
			}
			HX_STACK_LINE(53)
			if (((bool((distance < (int)50)) && bool((this->isActivated == false))))){
				HX_STACK_LINE(55)
				hx::AddEq(::Reg_obj::player->faith,(int)15);
				HX_STACK_LINE(56)
				this->activate();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Pillar_obj,checkActivation,(void))

Void Pillar_obj::activate( ){
{
		HX_STACK_FRAME("Pillar","activate",0xd42d4e97,"Pillar.activate","Pillar.hx",63,0x40168af4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(64)
		this->isActivated = true;
		HX_STACK_LINE(65)
		this->animation->play(HX_CSTRING("activate"),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Pillar_obj,activate,(void))

Void Pillar_obj::deactivate( ){
{
		HX_STACK_FRAME("Pillar","deactivate",0xb3601018,"Pillar.deactivate","Pillar.hx",70,0x40168af4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(71)
		this->isActivated = false;
		HX_STACK_LINE(72)
		this->animation->play(HX_CSTRING("deactivate"),null(),null());
		HX_STACK_LINE(73)
		this->deactivateCounter = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Pillar_obj,deactivate,(void))


Pillar_obj::Pillar_obj()
{
}

Dynamic Pillar_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"activate") ) { return activate_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"deactivate") ) { return deactivate_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isActivated") ) { return isActivated; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"checkActivation") ) { return checkActivation_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"deactivateCounter") ) { return deactivateCounter; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Pillar_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"isActivated") ) { isActivated=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"deactivateCounter") ) { deactivateCounter=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Pillar_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("isActivated"));
	outFields->push(HX_CSTRING("deactivateCounter"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Pillar_obj,isActivated),HX_CSTRING("isActivated")},
	{hx::fsFloat,(int)offsetof(Pillar_obj,deactivateCounter),HX_CSTRING("deactivateCounter")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("isActivated"),
	HX_CSTRING("deactivateCounter"),
	HX_CSTRING("update"),
	HX_CSTRING("checkActivation"),
	HX_CSTRING("activate"),
	HX_CSTRING("deactivate"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Pillar_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Pillar_obj::__mClass,"__mClass");
};

#endif

Class Pillar_obj::__mClass;

void Pillar_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Pillar"), hx::TCanCast< Pillar_obj> ,sStaticFields,sMemberFields,
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

void Pillar_obj::__boot()
{
}

