#include <hxcpp.h>

#ifndef INCLUDED_Character
#include <Character.h>
#endif
#ifndef INCLUDED_Reg
#include <Reg.h>
#endif
#ifndef INCLUDED_Skeleton
#include <Skeleton.h>
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
#ifndef INCLUDED_flixel_addons_display_FlxExtendedSprite
#include <flixel/addons/display/FlxExtendedSprite.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPath
#include <flixel/util/FlxPath.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxVelocity
#include <flixel/util/FlxVelocity.h>
#endif

Void Skeleton_obj::__construct(Float x,Float y)
{
HX_STACK_FRAME("Skeleton","new",0x484e495f,"Skeleton.new","Skeleton.hx",13,0x7d7446f1)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
{
	HX_STACK_LINE(18)
	this->hurtCounter = (int)0;
	HX_STACK_LINE(16)
	this->doingPath = false;
	HX_STACK_LINE(22)
	super::__construct(x,y,HX_CSTRING("assets/data/skeleton.json"),null());
	HX_STACK_LINE(23)
	this->controllable = false;
	HX_STACK_LINE(24)
	this->health = (int)15;
	HX_STACK_LINE(25)
	::flixel::util::FlxPoint _g = ::flixel::util::FlxPoint_obj::__new(x,y);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(25)
	this->currentFollowPosition = _g;
}
;
	return null();
}

//Skeleton_obj::~Skeleton_obj() { }

Dynamic Skeleton_obj::__CreateEmpty() { return  new Skeleton_obj; }
hx::ObjectPtr< Skeleton_obj > Skeleton_obj::__new(Float x,Float y)
{  hx::ObjectPtr< Skeleton_obj > result = new Skeleton_obj();
	result->__construct(x,y);
	return result;}

Dynamic Skeleton_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Skeleton_obj > result = new Skeleton_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Skeleton_obj::update( ){
{
		HX_STACK_FRAME("Skeleton","update",0xf173766a,"Skeleton.update","Skeleton.hx",33,0x7d7446f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(34)
		::flixel::util::FlxVelocity_obj::moveTowardsObject(hx::ObjectPtr<OBJ_>(this),::Reg_obj::player,(int)60,null());
		HX_STACK_LINE(39)
		if ((::flixel::FlxG_obj::overlap(::Reg_obj::player,hx::ObjectPtr<OBJ_>(this),null(),::flixel::FlxObject_obj::separate_dyn()))){
			HX_STACK_LINE(41)
			::flixel::FlxObject_obj::separate(hx::ObjectPtr<OBJ_>(this),::Reg_obj::player);
			HX_STACK_LINE(42)
			this->hurtPlayer();
		}
		HX_STACK_LINE(46)
		this->checkBoundsMap();
		HX_STACK_LINE(47)
		this->doAnimation();
		HX_STACK_LINE(49)
		if (((this->health <= (int)0))){
			HX_STACK_LINE(51)
			this->kill();
		}
		HX_STACK_LINE(54)
		hx::AddEq(this->hurtCounter,::flixel::FlxG_obj::elapsed);
		HX_STACK_LINE(56)
		this->super::update();
	}
return null();
}


Void Skeleton_obj::hurtPlayer( ){
{
		HX_STACK_FRAME("Skeleton","hurtPlayer",0xed17e5b1,"Skeleton.hurtPlayer","Skeleton.hx",61,0x7d7446f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(61)
		if (((this->hurtCounter > 0.75))){
			HX_STACK_LINE(63)
			hx::SubEq(::Reg_obj::player->health,(int)1);
			HX_STACK_LINE(64)
			this->hurtCounter = (int)0;
			HX_STACK_LINE(65)
			::flixel::FlxG_obj::sound->play(HX_CSTRING("assets/sound/hurt.wav"),0.5,false,null(),null());
			HX_STACK_LINE(66)
			hx::SubEq(::Reg_obj::score,(int)1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Skeleton_obj,hurtPlayer,(void))


Skeleton_obj::Skeleton_obj()
{
}

void Skeleton_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Skeleton);
	HX_MARK_MEMBER_NAME(path,"path");
	HX_MARK_MEMBER_NAME(doingPath,"doingPath");
	HX_MARK_MEMBER_NAME(currentFollowPosition,"currentFollowPosition");
	HX_MARK_MEMBER_NAME(hurtCounter,"hurtCounter");
	::Character_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Skeleton_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(path,"path");
	HX_VISIT_MEMBER_NAME(doingPath,"doingPath");
	HX_VISIT_MEMBER_NAME(currentFollowPosition,"currentFollowPosition");
	HX_VISIT_MEMBER_NAME(hurtCounter,"hurtCounter");
	::Character_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Skeleton_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { return path; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"doingPath") ) { return doingPath; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"hurtPlayer") ) { return hurtPlayer_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"hurtCounter") ) { return hurtCounter; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"currentFollowPosition") ) { return currentFollowPosition; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Skeleton_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { path=inValue.Cast< ::flixel::util::FlxPath >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"doingPath") ) { doingPath=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"hurtCounter") ) { hurtCounter=inValue.Cast< Float >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"currentFollowPosition") ) { currentFollowPosition=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Skeleton_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("path"));
	outFields->push(HX_CSTRING("doingPath"));
	outFields->push(HX_CSTRING("currentFollowPosition"));
	outFields->push(HX_CSTRING("hurtCounter"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::util::FlxPath*/ ,(int)offsetof(Skeleton_obj,path),HX_CSTRING("path")},
	{hx::fsBool,(int)offsetof(Skeleton_obj,doingPath),HX_CSTRING("doingPath")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(Skeleton_obj,currentFollowPosition),HX_CSTRING("currentFollowPosition")},
	{hx::fsFloat,(int)offsetof(Skeleton_obj,hurtCounter),HX_CSTRING("hurtCounter")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("path"),
	HX_CSTRING("doingPath"),
	HX_CSTRING("currentFollowPosition"),
	HX_CSTRING("hurtCounter"),
	HX_CSTRING("update"),
	HX_CSTRING("hurtPlayer"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Skeleton_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Skeleton_obj::__mClass,"__mClass");
};

#endif

Class Skeleton_obj::__mClass;

void Skeleton_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Skeleton"), hx::TCanCast< Skeleton_obj> ,sStaticFields,sMemberFields,
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

void Skeleton_obj::__boot()
{
}

