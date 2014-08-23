#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flixel_addons_weapon_FlxBullet
#include <flixel/addons/weapon/FlxBullet.h>
#endif
#ifndef INCLUDED_flixel_addons_weapon_FlxWeapon
#include <flixel/addons/weapon/FlxWeapon.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_input_touch_FlxTouch
#include <flixel/input/touch/FlxTouch.h>
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
#ifndef INCLUDED_flixel_util_FlxAngle
#include <flixel/util/FlxAngle.h>
#endif
#ifndef INCLUDED_flixel_util_FlxMath
#include <flixel/util/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_FlxPoint
#include <flixel/util/FlxPool_flixel_util_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRandom
#include <flixel/util/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRect
#include <flixel/util/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_FlxVelocity
#include <flixel/util/FlxVelocity.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace flixel{
namespace addons{
namespace weapon{

Void FlxBullet_obj::__construct(::flixel::addons::weapon::FlxWeapon Weapon,int WeaponID)
{
HX_STACK_FRAME("flixel.addons.weapon.FlxBullet","new",0xec1cce5d,"flixel.addons.weapon.FlxBullet.new","flixel/addons/weapon/FlxBullet.hx",18,0xb8c7cb14)
HX_STACK_THIS(this)
HX_STACK_ARG(Weapon,"Weapon")
HX_STACK_ARG(WeaponID,"WeaponID")
{
	HX_STACK_LINE(32)
	this->_bulletSpeed = (int)0;
	HX_STACK_LINE(31)
	this->_animated = false;
	HX_STACK_LINE(21)
	this->accelerates = false;
	HX_STACK_LINE(36)
	super::__construct((int)0,(int)0,null());
	HX_STACK_LINE(38)
	this->_weapon = Weapon;
	HX_STACK_LINE(39)
	this->ID = WeaponID;
	HX_STACK_LINE(41)
	this->set_exists(false);
}
;
	return null();
}

//FlxBullet_obj::~FlxBullet_obj() { }

Dynamic FlxBullet_obj::__CreateEmpty() { return  new FlxBullet_obj; }
hx::ObjectPtr< FlxBullet_obj > FlxBullet_obj::__new(::flixel::addons::weapon::FlxWeapon Weapon,int WeaponID)
{  hx::ObjectPtr< FlxBullet_obj > result = new FlxBullet_obj();
	result->__construct(Weapon,WeaponID);
	return result;}

Dynamic FlxBullet_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxBullet_obj > result = new FlxBullet_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void FlxBullet_obj::addAnimation( ::String Name,Array< int > Frames,hx::Null< int >  __o_FrameRate,hx::Null< bool >  __o_Looped){
int FrameRate = __o_FrameRate.Default(0);
bool Looped = __o_Looped.Default(true);
	HX_STACK_FRAME("flixel.addons.weapon.FlxBullet","addAnimation",0x47d0eb06,"flixel.addons.weapon.FlxBullet.addAnimation","flixel/addons/weapon/FlxBullet.hx",53,0xb8c7cb14)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Name,"Name")
	HX_STACK_ARG(Frames,"Frames")
	HX_STACK_ARG(FrameRate,"FrameRate")
	HX_STACK_ARG(Looped,"Looped")
{
		HX_STACK_LINE(54)
		this->animation->add(Name,Frames,FrameRate,Looped);
		HX_STACK_LINE(56)
		this->_animated = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxBullet_obj,addAnimation,(void))

Void FlxBullet_obj::fire( Float FromX,Float FromY,Float VelX,Float VelY){
{
		HX_STACK_FRAME("flixel.addons.weapon.FlxBullet","fire",0xa7d11319,"flixel.addons.weapon.FlxBullet.fire","flixel/addons/weapon/FlxBullet.hx",60,0xb8c7cb14)
		HX_STACK_THIS(this)
		HX_STACK_ARG(FromX,"FromX")
		HX_STACK_ARG(FromY,"FromY")
		HX_STACK_ARG(VelX,"VelX")
		HX_STACK_ARG(VelY,"VelY")
		HX_STACK_LINE(61)
		Float _g = ::flixel::util::FlxRandom_obj::floatRanged(-(this->_weapon->rndFactorPosition->x),this->_weapon->rndFactorPosition->x,null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(61)
		Float _g1 = (FromX + _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(61)
		this->set_x(_g1);
		HX_STACK_LINE(62)
		Float _g2 = ::flixel::util::FlxRandom_obj::floatRanged(-(this->_weapon->rndFactorPosition->y),this->_weapon->rndFactorPosition->y,null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(62)
		Float _g3 = (FromY + _g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(62)
		this->set_y(_g3);
		HX_STACK_LINE(64)
		if ((this->accelerates)){
			HX_STACK_LINE(66)
			int _g4 = ::flixel::util::FlxRandom_obj::intRanged(-(this->_weapon->rndFactorSpeed),this->_weapon->rndFactorSpeed,null());		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(66)
			int _g5 = (this->xAcceleration + _g4);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(66)
			this->acceleration->set_x(_g5);
			HX_STACK_LINE(67)
			int _g6 = ::flixel::util::FlxRandom_obj::intRanged(-(this->_weapon->rndFactorSpeed),this->_weapon->rndFactorSpeed,null());		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(67)
			int _g7 = (this->yAcceleration + _g6);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(67)
			this->acceleration->set_y(_g7);
		}
		else{
			HX_STACK_LINE(71)
			int _g8 = ::flixel::util::FlxRandom_obj::intRanged(-(this->_weapon->rndFactorSpeed),this->_weapon->rndFactorSpeed,null());		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(71)
			Float _g9 = (VelX + _g8);		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(71)
			this->velocity->set_x(_g9);
			HX_STACK_LINE(72)
			int _g10 = ::flixel::util::FlxRandom_obj::intRanged(-(this->_weapon->rndFactorSpeed),this->_weapon->rndFactorSpeed,null());		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(72)
			Float _g11 = (VelY + _g10);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(72)
			this->velocity->set_y(_g11);
		}
		HX_STACK_LINE(75)
		this->postFire();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxBullet_obj,fire,(void))

Void FlxBullet_obj::fireAtMouse( Float FromX,Float FromY,int Speed,hx::Null< bool >  __o_RotateBulletTowards){
bool RotateBulletTowards = __o_RotateBulletTowards.Default(true);
	HX_STACK_FRAME("flixel.addons.weapon.FlxBullet","fireAtMouse",0x489ffa19,"flixel.addons.weapon.FlxBullet.fireAtMouse","flixel/addons/weapon/FlxBullet.hx",80,0xb8c7cb14)
	HX_STACK_THIS(this)
	HX_STACK_ARG(FromX,"FromX")
	HX_STACK_ARG(FromY,"FromY")
	HX_STACK_ARG(Speed,"Speed")
	HX_STACK_ARG(RotateBulletTowards,"RotateBulletTowards")
{
		HX_STACK_LINE(81)
		Float _g = ::flixel::util::FlxRandom_obj::floatRanged(-(this->_weapon->rndFactorPosition->x),this->_weapon->rndFactorPosition->x,null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(81)
		Float _g1 = (FromX + _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(81)
		this->set_x(_g1);
		HX_STACK_LINE(82)
		Float _g2 = ::flixel::util::FlxRandom_obj::floatRanged(-(this->_weapon->rndFactorPosition->y),this->_weapon->rndFactorPosition->y,null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(82)
		Float _g3 = (FromY + _g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(82)
		this->set_y(_g3);
		HX_STACK_LINE(84)
		if ((this->accelerates)){
			HX_STACK_LINE(86)
			int _g4 = ::flixel::util::FlxRandom_obj::intRanged(-(this->_weapon->rndFactorSpeed),this->_weapon->rndFactorSpeed,null());		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(86)
			int _g5 = (Speed + _g4);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(86)
			int _g6 = ::Math_obj::floor(this->maxVelocity->x);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(86)
			int _g7 = ::Math_obj::floor(this->maxVelocity->y);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(86)
			::flixel::util::FlxVelocity_obj::accelerateTowardsMouse(hx::ObjectPtr<OBJ_>(this),_g5,_g6,_g7);
		}
		else{
			HX_STACK_LINE(90)
			int _g8 = ::flixel::util::FlxRandom_obj::intRanged(-(this->_weapon->rndFactorSpeed),this->_weapon->rndFactorSpeed,null());		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(90)
			int _g9 = (Speed + _g8);		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(90)
			::flixel::util::FlxVelocity_obj::moveTowardsMouse(hx::ObjectPtr<OBJ_>(this),_g9,null());
		}
		HX_STACK_LINE(93)
		if ((RotateBulletTowards)){
			HX_STACK_LINE(95)
			Float _g10 = ::flixel::util::FlxAngle_obj::angleBetweenMouse(this->_weapon->parent,true);		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(95)
			this->set_angle(_g10);
		}
		HX_STACK_LINE(98)
		this->postFire();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxBullet_obj,fireAtMouse,(void))

Void FlxBullet_obj::fireAtTouch( Float FromX,Float FromY,::flixel::input::touch::FlxTouch Touch,int Speed,hx::Null< bool >  __o_RotateBulletTowards){
bool RotateBulletTowards = __o_RotateBulletTowards.Default(true);
	HX_STACK_FRAME("flixel.addons.weapon.FlxBullet","fireAtTouch",0x506dfbb3,"flixel.addons.weapon.FlxBullet.fireAtTouch","flixel/addons/weapon/FlxBullet.hx",104,0xb8c7cb14)
	HX_STACK_THIS(this)
	HX_STACK_ARG(FromX,"FromX")
	HX_STACK_ARG(FromY,"FromY")
	HX_STACK_ARG(Touch,"Touch")
	HX_STACK_ARG(Speed,"Speed")
	HX_STACK_ARG(RotateBulletTowards,"RotateBulletTowards")
{
		HX_STACK_LINE(105)
		Float _g = ::flixel::util::FlxRandom_obj::floatRanged(-(this->_weapon->rndFactorPosition->x),this->_weapon->rndFactorPosition->x,null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(105)
		Float _g1 = (FromX + _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(105)
		this->set_x(_g1);
		HX_STACK_LINE(106)
		Float _g2 = ::flixel::util::FlxRandom_obj::floatRanged(-(this->_weapon->rndFactorPosition->y),this->_weapon->rndFactorPosition->y,null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(106)
		Float _g3 = (FromY + _g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(106)
		this->set_y(_g3);
		HX_STACK_LINE(108)
		if ((this->accelerates)){
			HX_STACK_LINE(110)
			int _g4 = ::flixel::util::FlxRandom_obj::intRanged(-(this->_weapon->rndFactorSpeed),this->_weapon->rndFactorSpeed,null());		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(110)
			int _g5 = (Speed + _g4);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(110)
			int _g6 = ::Math_obj::floor(this->maxVelocity->x);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(110)
			int _g7 = ::Math_obj::floor(this->maxVelocity->y);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(110)
			::flixel::util::FlxVelocity_obj::accelerateTowardsTouch(hx::ObjectPtr<OBJ_>(this),Touch,_g5,_g6,_g7);
		}
		else{
			HX_STACK_LINE(114)
			int _g8 = ::flixel::util::FlxRandom_obj::intRanged(-(this->_weapon->rndFactorSpeed),this->_weapon->rndFactorSpeed,null());		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(114)
			int _g9 = (Speed + _g8);		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(114)
			::flixel::util::FlxVelocity_obj::moveTowardsTouch(hx::ObjectPtr<OBJ_>(this),Touch,_g9,null());
		}
		HX_STACK_LINE(117)
		if ((RotateBulletTowards)){
			HX_STACK_LINE(119)
			Float _g10;		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(119)
			{
				HX_STACK_LINE(119)
				::flixel::util::FlxPoint p = this->_weapon->parent->getScreenXY(null(),null());		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(119)
				Float dx = (Touch->screenX - p->x);		HX_STACK_VAR(dx,"dx");
				HX_STACK_LINE(119)
				Float dy = (Touch->screenY - p->y);		HX_STACK_VAR(dy,"dy");
				HX_STACK_LINE(119)
				{
					HX_STACK_LINE(119)
					Float radians = ::Math_obj::atan2(dy,dx);		HX_STACK_VAR(radians,"radians");
					HX_STACK_LINE(119)
					_g10 = (radians * ((Float((int)180) / Float(::Math_obj::PI))));
				}
			}
			HX_STACK_LINE(119)
			this->set_angle(_g10);
		}
		HX_STACK_LINE(122)
		this->postFire();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(FlxBullet_obj,fireAtTouch,(void))

Void FlxBullet_obj::fireAtPosition( Float FromX,Float FromY,Float ToX,Float ToY,int Speed){
{
		HX_STACK_FRAME("flixel.addons.weapon.FlxBullet","fireAtPosition",0x1bb7ad35,"flixel.addons.weapon.FlxBullet.fireAtPosition","flixel/addons/weapon/FlxBullet.hx",127,0xb8c7cb14)
		HX_STACK_THIS(this)
		HX_STACK_ARG(FromX,"FromX")
		HX_STACK_ARG(FromY,"FromY")
		HX_STACK_ARG(ToX,"ToX")
		HX_STACK_ARG(ToY,"ToY")
		HX_STACK_ARG(Speed,"Speed")
		HX_STACK_LINE(128)
		Float _g = ::flixel::util::FlxRandom_obj::floatRanged(-(this->_weapon->rndFactorPosition->x),this->_weapon->rndFactorPosition->x,null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(128)
		Float _g1 = (FromX + _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(128)
		this->set_x(_g1);
		HX_STACK_LINE(129)
		Float _g2 = ::flixel::util::FlxRandom_obj::floatRanged(-(this->_weapon->rndFactorPosition->y),this->_weapon->rndFactorPosition->y,null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(129)
		Float _g3 = (FromY + _g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(129)
		this->set_y(_g3);
		HX_STACK_LINE(131)
		if ((this->accelerates)){
			HX_STACK_LINE(133)
			::flixel::util::FlxPoint _g4;		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(133)
			{
				HX_STACK_LINE(133)
				::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set(ToX,ToY);		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(133)
				point->_inPool = false;
				HX_STACK_LINE(133)
				_g4 = point;
			}
			HX_STACK_LINE(133)
			int _g5 = ::flixel::util::FlxRandom_obj::intRanged(-(this->_weapon->rndFactorSpeed),this->_weapon->rndFactorSpeed,null());		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(133)
			int _g6 = (Speed + _g5);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(133)
			int _g7 = ::Math_obj::floor(this->maxVelocity->x);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(133)
			int _g8 = ::Math_obj::floor(this->maxVelocity->y);		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(133)
			::flixel::util::FlxVelocity_obj::accelerateTowardsPoint(hx::ObjectPtr<OBJ_>(this),_g4,_g6,_g7,_g8);
		}
		else{
			HX_STACK_LINE(137)
			::flixel::util::FlxPoint _g9;		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(137)
			{
				HX_STACK_LINE(137)
				::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set(ToX,ToY);		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(137)
				point->_inPool = false;
				HX_STACK_LINE(137)
				_g9 = point;
			}
			HX_STACK_LINE(137)
			int _g10 = ::flixel::util::FlxRandom_obj::intRanged(-(this->_weapon->rndFactorSpeed),this->_weapon->rndFactorSpeed,null());		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(137)
			int _g11 = (Speed + _g10);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(137)
			::flixel::util::FlxVelocity_obj::moveTowardsPoint(hx::ObjectPtr<OBJ_>(this),_g9,_g11,null());
		}
		HX_STACK_LINE(140)
		this->postFire();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(FlxBullet_obj,fireAtPosition,(void))

Void FlxBullet_obj::fireAtTarget( Float FromX,Float FromY,::flixel::FlxSprite Target,int Speed){
{
		HX_STACK_FRAME("flixel.addons.weapon.FlxBullet","fireAtTarget",0xfe3984dd,"flixel.addons.weapon.FlxBullet.fireAtTarget","flixel/addons/weapon/FlxBullet.hx",144,0xb8c7cb14)
		HX_STACK_THIS(this)
		HX_STACK_ARG(FromX,"FromX")
		HX_STACK_ARG(FromY,"FromY")
		HX_STACK_ARG(Target,"Target")
		HX_STACK_ARG(Speed,"Speed")
		HX_STACK_LINE(145)
		Float _g = ::flixel::util::FlxRandom_obj::floatRanged(-(this->_weapon->rndFactorPosition->x),this->_weapon->rndFactorPosition->x,null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(145)
		Float _g1 = (FromX + _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(145)
		this->set_x(_g1);
		HX_STACK_LINE(146)
		Float _g2 = ::flixel::util::FlxRandom_obj::floatRanged(-(this->_weapon->rndFactorPosition->y),this->_weapon->rndFactorPosition->y,null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(146)
		Float _g3 = (FromY + _g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(146)
		this->set_y(_g3);
		HX_STACK_LINE(148)
		if ((this->accelerates)){
			HX_STACK_LINE(150)
			int _g4 = ::flixel::util::FlxRandom_obj::intRanged(-(this->_weapon->rndFactorSpeed),this->_weapon->rndFactorSpeed,null());		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(150)
			int _g5 = (Speed + _g4);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(150)
			int _g6 = ::Math_obj::floor(this->maxVelocity->x);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(150)
			int _g7 = ::Math_obj::floor(this->maxVelocity->y);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(150)
			::flixel::util::FlxVelocity_obj::accelerateTowardsObject(hx::ObjectPtr<OBJ_>(this),Target,_g5,_g6,_g7);
		}
		else{
			HX_STACK_LINE(154)
			int _g8 = ::flixel::util::FlxRandom_obj::intRanged(-(this->_weapon->rndFactorSpeed),this->_weapon->rndFactorSpeed,null());		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(154)
			int _g9 = (Speed + _g8);		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(154)
			::flixel::util::FlxVelocity_obj::moveTowardsObject(hx::ObjectPtr<OBJ_>(this),Target,_g9,null());
		}
		HX_STACK_LINE(157)
		this->postFire();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxBullet_obj,fireAtTarget,(void))

Void FlxBullet_obj::fireFromAngle( Float FromX,Float FromY,int FireAngle,int Speed){
{
		HX_STACK_FRAME("flixel.addons.weapon.FlxBullet","fireFromAngle",0x1d784fb0,"flixel.addons.weapon.FlxBullet.fireFromAngle","flixel/addons/weapon/FlxBullet.hx",161,0xb8c7cb14)
		HX_STACK_THIS(this)
		HX_STACK_ARG(FromX,"FromX")
		HX_STACK_ARG(FromY,"FromY")
		HX_STACK_ARG(FireAngle,"FireAngle")
		HX_STACK_ARG(Speed,"Speed")
		HX_STACK_LINE(162)
		Float _g = ::flixel::util::FlxRandom_obj::floatRanged(-(this->_weapon->rndFactorPosition->x),this->_weapon->rndFactorPosition->x,null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(162)
		Float _g1 = (FromX + _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(162)
		this->set_x(_g1);
		HX_STACK_LINE(163)
		Float _g2 = ::flixel::util::FlxRandom_obj::floatRanged(-(this->_weapon->rndFactorPosition->y),this->_weapon->rndFactorPosition->y,null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(163)
		Float _g3 = (FromY + _g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(163)
		this->set_y(_g3);
		HX_STACK_LINE(165)
		::flixel::util::FlxPoint newVelocity;		HX_STACK_VAR(newVelocity,"newVelocity");
		HX_STACK_LINE(165)
		{
			HX_STACK_LINE(165)
			int _g4 = ::flixel::util::FlxRandom_obj::intRanged(-(this->_weapon->rndFactorAngle),this->_weapon->rndFactorAngle,null());		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(165)
			int Angle = (FireAngle + _g4);		HX_STACK_VAR(Angle,"Angle");
			HX_STACK_LINE(165)
			int _g5 = ::flixel::util::FlxRandom_obj::intRanged(-(this->_weapon->rndFactorSpeed),this->_weapon->rndFactorSpeed,null());		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(165)
			int Speed1 = (Speed + _g5);		HX_STACK_VAR(Speed1,"Speed1");
			HX_STACK_LINE(165)
			Float a = (Angle * ((Float(::Math_obj::PI) / Float((int)180))));		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(165)
			::flixel::util::FlxPoint result;		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(165)
			{
				HX_STACK_LINE(165)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(165)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(165)
				::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(165)
				point->_inPool = false;
				HX_STACK_LINE(165)
				result = point;
			}
			HX_STACK_LINE(165)
			Float _g6 = ::Math_obj::cos(a);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(165)
			Float _g7 = (_g6 * Speed1);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(165)
			int _g8 = ::Std_obj::_int(_g7);		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(165)
			result->set_x(_g8);
			HX_STACK_LINE(165)
			Float _g9 = ::Math_obj::sin(a);		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(165)
			Float _g10 = (_g9 * Speed1);		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(165)
			int _g11 = ::Std_obj::_int(_g10);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(165)
			result->set_y(_g11);
			HX_STACK_LINE(165)
			newVelocity = result;
		}
		HX_STACK_LINE(167)
		if ((this->accelerates)){
			HX_STACK_LINE(169)
			this->acceleration->set_x(newVelocity->x);
			HX_STACK_LINE(170)
			this->acceleration->set_y(newVelocity->y);
		}
		else{
			HX_STACK_LINE(174)
			this->velocity->set_x(newVelocity->x);
			HX_STACK_LINE(175)
			this->velocity->set_y(newVelocity->y);
		}
		HX_STACK_LINE(178)
		this->postFire();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxBullet_obj,fireFromAngle,(void))

Void FlxBullet_obj::postFire( ){
{
		HX_STACK_FRAME("flixel.addons.weapon.FlxBullet","postFire",0xd3c76119,"flixel.addons.weapon.FlxBullet.postFire","flixel/addons/weapon/FlxBullet.hx",182,0xb8c7cb14)
		HX_STACK_THIS(this)
		HX_STACK_LINE(183)
		if ((this->_animated)){
			HX_STACK_LINE(185)
			this->animation->play(HX_CSTRING("fire"),null(),null());
		}
		HX_STACK_LINE(188)
		if (((this->_weapon->bulletElasticity > (int)0))){
			HX_STACK_LINE(190)
			this->elasticity = this->_weapon->bulletElasticity;
		}
		HX_STACK_LINE(193)
		this->set_exists(true);
		HX_STACK_LINE(196)
		this->last->set_x(this->x);
		HX_STACK_LINE(197)
		this->last->set_y(this->y);
		HX_STACK_LINE(199)
		if (((this->_weapon->bulletLifeSpan > (int)0))){
			HX_STACK_LINE(201)
			Float _g = ::flixel::util::FlxRandom_obj::floatRanged(-(this->_weapon->rndFactorLifeSpan),this->_weapon->rndFactorLifeSpan,null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(201)
			Float _g1 = (this->_weapon->bulletLifeSpan + _g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(201)
			this->lifespan = _g1;
		}
		HX_STACK_LINE(204)
		if (((this->_weapon->onFireCallback != null()))){
			HX_STACK_LINE(206)
			this->_weapon->onFireCallback();
		}
		HX_STACK_LINE(210)
		if (((this->_weapon->onFireSound != null()))){
			HX_STACK_LINE(212)
			this->_weapon->onFireSound->play(null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBullet_obj,postFire,(void))

Void FlxBullet_obj::update( ){
{
		HX_STACK_FRAME("flixel.addons.weapon.FlxBullet","update",0x0a73a42c,"flixel.addons.weapon.FlxBullet.update","flixel/addons/weapon/FlxBullet.hx",218,0xb8c7cb14)
		HX_STACK_THIS(this)
		HX_STACK_LINE(219)
		if (((this->lifespan > (int)0))){
			HX_STACK_LINE(221)
			hx::SubEq(this->lifespan,::flixel::FlxG_obj::elapsed);
			HX_STACK_LINE(223)
			if (((this->lifespan <= (int)0))){
				HX_STACK_LINE(225)
				this->kill();
			}
		}
		HX_STACK_LINE(229)
		int _g = ::Math_obj::floor(this->x);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(229)
		int _g1 = ::Math_obj::floor(this->y);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(229)
		if ((!(::flixel::util::FlxMath_obj::pointInFlxRect(_g,_g1,this->_weapon->bounds)))){
			HX_STACK_LINE(231)
			this->kill();
		}
		HX_STACK_LINE(234)
		this->super::update();
	}
return null();
}



FlxBullet_obj::FlxBullet_obj()
{
}

void FlxBullet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxBullet);
	HX_MARK_MEMBER_NAME(accelerates,"accelerates");
	HX_MARK_MEMBER_NAME(xAcceleration,"xAcceleration");
	HX_MARK_MEMBER_NAME(yAcceleration,"yAcceleration");
	HX_MARK_MEMBER_NAME(rndFactorAngle,"rndFactorAngle");
	HX_MARK_MEMBER_NAME(rndFactorSpeed,"rndFactorSpeed");
	HX_MARK_MEMBER_NAME(rndFactorLifeSpan,"rndFactorLifeSpan");
	HX_MARK_MEMBER_NAME(lifespan,"lifespan");
	HX_MARK_MEMBER_NAME(_weapon,"_weapon");
	HX_MARK_MEMBER_NAME(_animated,"_animated");
	HX_MARK_MEMBER_NAME(_bulletSpeed,"_bulletSpeed");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxBullet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(accelerates,"accelerates");
	HX_VISIT_MEMBER_NAME(xAcceleration,"xAcceleration");
	HX_VISIT_MEMBER_NAME(yAcceleration,"yAcceleration");
	HX_VISIT_MEMBER_NAME(rndFactorAngle,"rndFactorAngle");
	HX_VISIT_MEMBER_NAME(rndFactorSpeed,"rndFactorSpeed");
	HX_VISIT_MEMBER_NAME(rndFactorLifeSpan,"rndFactorLifeSpan");
	HX_VISIT_MEMBER_NAME(lifespan,"lifespan");
	HX_VISIT_MEMBER_NAME(_weapon,"_weapon");
	HX_VISIT_MEMBER_NAME(_animated,"_animated");
	HX_VISIT_MEMBER_NAME(_bulletSpeed,"_bulletSpeed");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxBullet_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"fire") ) { return fire_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_weapon") ) { return _weapon; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lifespan") ) { return lifespan; }
		if (HX_FIELD_EQ(inName,"postFire") ) { return postFire_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_animated") ) { return _animated; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"accelerates") ) { return accelerates; }
		if (HX_FIELD_EQ(inName,"fireAtMouse") ) { return fireAtMouse_dyn(); }
		if (HX_FIELD_EQ(inName,"fireAtTouch") ) { return fireAtTouch_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_bulletSpeed") ) { return _bulletSpeed; }
		if (HX_FIELD_EQ(inName,"addAnimation") ) { return addAnimation_dyn(); }
		if (HX_FIELD_EQ(inName,"fireAtTarget") ) { return fireAtTarget_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"xAcceleration") ) { return xAcceleration; }
		if (HX_FIELD_EQ(inName,"yAcceleration") ) { return yAcceleration; }
		if (HX_FIELD_EQ(inName,"fireFromAngle") ) { return fireFromAngle_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"rndFactorAngle") ) { return rndFactorAngle; }
		if (HX_FIELD_EQ(inName,"rndFactorSpeed") ) { return rndFactorSpeed; }
		if (HX_FIELD_EQ(inName,"fireAtPosition") ) { return fireAtPosition_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"rndFactorLifeSpan") ) { return rndFactorLifeSpan; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxBullet_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_weapon") ) { _weapon=inValue.Cast< ::flixel::addons::weapon::FlxWeapon >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lifespan") ) { lifespan=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_animated") ) { _animated=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"accelerates") ) { accelerates=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_bulletSpeed") ) { _bulletSpeed=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"xAcceleration") ) { xAcceleration=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yAcceleration") ) { yAcceleration=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"rndFactorAngle") ) { rndFactorAngle=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rndFactorSpeed") ) { rndFactorSpeed=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"rndFactorLifeSpan") ) { rndFactorLifeSpan=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxBullet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("accelerates"));
	outFields->push(HX_CSTRING("xAcceleration"));
	outFields->push(HX_CSTRING("yAcceleration"));
	outFields->push(HX_CSTRING("rndFactorAngle"));
	outFields->push(HX_CSTRING("rndFactorSpeed"));
	outFields->push(HX_CSTRING("rndFactorLifeSpan"));
	outFields->push(HX_CSTRING("lifespan"));
	outFields->push(HX_CSTRING("_weapon"));
	outFields->push(HX_CSTRING("_animated"));
	outFields->push(HX_CSTRING("_bulletSpeed"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(FlxBullet_obj,accelerates),HX_CSTRING("accelerates")},
	{hx::fsInt,(int)offsetof(FlxBullet_obj,xAcceleration),HX_CSTRING("xAcceleration")},
	{hx::fsInt,(int)offsetof(FlxBullet_obj,yAcceleration),HX_CSTRING("yAcceleration")},
	{hx::fsInt,(int)offsetof(FlxBullet_obj,rndFactorAngle),HX_CSTRING("rndFactorAngle")},
	{hx::fsInt,(int)offsetof(FlxBullet_obj,rndFactorSpeed),HX_CSTRING("rndFactorSpeed")},
	{hx::fsInt,(int)offsetof(FlxBullet_obj,rndFactorLifeSpan),HX_CSTRING("rndFactorLifeSpan")},
	{hx::fsFloat,(int)offsetof(FlxBullet_obj,lifespan),HX_CSTRING("lifespan")},
	{hx::fsObject /*::flixel::addons::weapon::FlxWeapon*/ ,(int)offsetof(FlxBullet_obj,_weapon),HX_CSTRING("_weapon")},
	{hx::fsBool,(int)offsetof(FlxBullet_obj,_animated),HX_CSTRING("_animated")},
	{hx::fsInt,(int)offsetof(FlxBullet_obj,_bulletSpeed),HX_CSTRING("_bulletSpeed")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("accelerates"),
	HX_CSTRING("xAcceleration"),
	HX_CSTRING("yAcceleration"),
	HX_CSTRING("rndFactorAngle"),
	HX_CSTRING("rndFactorSpeed"),
	HX_CSTRING("rndFactorLifeSpan"),
	HX_CSTRING("lifespan"),
	HX_CSTRING("_weapon"),
	HX_CSTRING("_animated"),
	HX_CSTRING("_bulletSpeed"),
	HX_CSTRING("addAnimation"),
	HX_CSTRING("fire"),
	HX_CSTRING("fireAtMouse"),
	HX_CSTRING("fireAtTouch"),
	HX_CSTRING("fireAtPosition"),
	HX_CSTRING("fireAtTarget"),
	HX_CSTRING("fireFromAngle"),
	HX_CSTRING("postFire"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxBullet_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxBullet_obj::__mClass,"__mClass");
};

#endif

Class FlxBullet_obj::__mClass;

void FlxBullet_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.addons.weapon.FlxBullet"), hx::TCanCast< FlxBullet_obj> ,sStaticFields,sMemberFields,
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

void FlxBullet_obj::__boot()
{
}

} // end namespace flixel
} // end namespace addons
} // end namespace weapon
