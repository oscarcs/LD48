#include <hxcpp.h>

#ifndef INCLUDED_Character
#include <Character.h>
#endif
#ifndef INCLUDED_Mound
#include <Mound.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
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
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_FlxPoint
#include <flixel/util/FlxPool_flixel_util_FlxPoint.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif

Void Mound_obj::__construct(Float x,Float y)
{
HX_STACK_FRAME("Mound","new",0xeedaab1b,"Mound.new","Mound.hx",14,0x9c0c70b5)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
{
	HX_STACK_LINE(19)
	this->isActivated = false;
	HX_STACK_LINE(23)
	super::__construct(x,y,null());
	HX_STACK_LINE(25)
	this->loadGraphic(HX_CSTRING("assets/images/mound.png"),true,(int)16,(int)32,null(),null());
	HX_STACK_LINE(27)
	this->animation->add(HX_CSTRING("static"),Array_obj< int >::__new().Add((int)0),(int)0,true);
	HX_STACK_LINE(28)
	this->animation->add(HX_CSTRING("reveal"),Array_obj< int >::__new().Add((int)0).Add((int)1).Add((int)2).Add((int)3).Add((int)4),(int)10,false);
	HX_STACK_LINE(29)
	this->animation->add(HX_CSTRING("poststatic"),Array_obj< int >::__new().Add((int)5),(int)0,true);
	HX_STACK_LINE(30)
	this->animation->play(HX_CSTRING("static"),null(),null());
}
;
	return null();
}

//Mound_obj::~Mound_obj() { }

Dynamic Mound_obj::__CreateEmpty() { return  new Mound_obj; }
hx::ObjectPtr< Mound_obj > Mound_obj::__new(Float x,Float y)
{  hx::ObjectPtr< Mound_obj > result = new Mound_obj();
	result->__construct(x,y);
	return result;}

Dynamic Mound_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Mound_obj > result = new Mound_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Mound_obj::revealMound( ::flixel::FlxObject object,::PlayState state){
{
		HX_STACK_FRAME("Mound","revealMound",0x2aa28137,"Mound.revealMound","Mound.hx",34,0x9c0c70b5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(object,"object")
		HX_STACK_ARG(state,"state")
		HX_STACK_LINE(35)
		Float _g = this->get_width();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(35)
		Float _g1 = (Float(_g) / Float((int)2));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(35)
		Float _g2 = (this->x + _g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(35)
		Float _g3 = this->get_height();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(35)
		Float _g4 = (Float(_g3) / Float((int)2));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(35)
		Float _g5 = (this->y + _g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(35)
		::flixel::util::FlxPoint p1 = ::flixel::util::FlxPoint_obj::__new(_g2,_g5);		HX_STACK_VAR(p1,"p1");
		HX_STACK_LINE(36)
		Float _g6 = object->get_width();		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(36)
		Float _g7 = (Float(_g6) / Float((int)2));		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(36)
		Float _g8 = (object->x + _g7);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(36)
		Float _g9 = object->get_height();		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(36)
		Float _g10 = (Float(_g9) / Float((int)2));		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(36)
		Float _g11 = (object->y + _g10);		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(36)
		::flixel::util::FlxPoint p2 = ::flixel::util::FlxPoint_obj::__new(_g8,_g11);		HX_STACK_VAR(p2,"p2");
		HX_STACK_LINE(38)
		Float distance;		HX_STACK_VAR(distance,"distance");
		HX_STACK_LINE(38)
		{
			HX_STACK_LINE(38)
			Float dx = (p1->x - p2->x);		HX_STACK_VAR(dx,"dx");
			HX_STACK_LINE(38)
			Float dy = (p1->y - p2->y);		HX_STACK_VAR(dy,"dy");
			HX_STACK_LINE(38)
			if ((p1->_weak)){
				HX_STACK_LINE(38)
				::flixel::util::FlxPoint_obj::_pool->put(p1);
			}
			HX_STACK_LINE(38)
			if ((p2->_weak)){
				HX_STACK_LINE(38)
				::flixel::util::FlxPoint_obj::_pool->put(p2);
			}
			HX_STACK_LINE(38)
			distance = ::Math_obj::sqrt(((dx * dx) + (dy * dy)));
		}
		HX_STACK_LINE(39)
		if (((bool((distance < (int)100)) && bool((this->isActivated == false))))){
			HX_STACK_LINE(41)
			this->animation->play(HX_CSTRING("reveal"),null(),null());
			HX_STACK_LINE(42)
			this->isActivated = true;
		}
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::Mound_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Mound.hx",44,0x9c0c70b5)
				{
					HX_STACK_LINE(44)
					::flixel::animation::FlxAnimationController _this = __this->animation;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(44)
					bool finished = true;		HX_STACK_VAR(finished,"finished");
					HX_STACK_LINE(44)
					if (((_this->_curAnim != null()))){
						HX_STACK_LINE(44)
						finished = _this->_curAnim->finished;
					}
					HX_STACK_LINE(44)
					return finished;
				}
				return null();
			}
		};
		HX_STACK_LINE(44)
		if ((_Function_1_1::Block(this))){
			HX_STACK_LINE(46)
			this->spawnMonster();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Mound_obj,revealMound,(void))

Void Mound_obj::spawnMonster( ){
{
		HX_STACK_FRAME("Mound","spawnMonster",0xdf9e6104,"Mound.spawnMonster","Mound.hx",51,0x9c0c70b5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(55)
		::Reg_obj::enemyGroup->recycle(hx::ClassOf< ::Skeleton >(),Dynamic( Array_obj<Dynamic>::__new().Add(this->x).Add(this->y)),null(),null());
		HX_STACK_LINE(57)
		this->animation->play(HX_CSTRING("poststatic"),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Mound_obj,spawnMonster,(void))


Mound_obj::Mound_obj()
{
}

void Mound_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Mound);
	HX_MARK_MEMBER_NAME(moundType,"moundType");
	HX_MARK_MEMBER_NAME(protoSkeleton,"protoSkeleton");
	HX_MARK_MEMBER_NAME(isActivated,"isActivated");
	::flixel::addons::display::FlxExtendedSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Mound_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(moundType,"moundType");
	HX_VISIT_MEMBER_NAME(protoSkeleton,"protoSkeleton");
	HX_VISIT_MEMBER_NAME(isActivated,"isActivated");
	::flixel::addons::display::FlxExtendedSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Mound_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"moundType") ) { return moundType; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isActivated") ) { return isActivated; }
		if (HX_FIELD_EQ(inName,"revealMound") ) { return revealMound_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"spawnMonster") ) { return spawnMonster_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"protoSkeleton") ) { return protoSkeleton; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Mound_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"moundType") ) { moundType=inValue.Cast< ::Character >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isActivated") ) { isActivated=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"protoSkeleton") ) { protoSkeleton=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Mound_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("moundType"));
	outFields->push(HX_CSTRING("protoSkeleton"));
	outFields->push(HX_CSTRING("isActivated"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::Character*/ ,(int)offsetof(Mound_obj,moundType),HX_CSTRING("moundType")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(Mound_obj,protoSkeleton),HX_CSTRING("protoSkeleton")},
	{hx::fsBool,(int)offsetof(Mound_obj,isActivated),HX_CSTRING("isActivated")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("moundType"),
	HX_CSTRING("protoSkeleton"),
	HX_CSTRING("isActivated"),
	HX_CSTRING("revealMound"),
	HX_CSTRING("spawnMonster"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Mound_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Mound_obj::__mClass,"__mClass");
};

#endif

Class Mound_obj::__mClass;

void Mound_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Mound"), hx::TCanCast< Mound_obj> ,sStaticFields,sMemberFields,
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

void Mound_obj::__boot()
{
}

