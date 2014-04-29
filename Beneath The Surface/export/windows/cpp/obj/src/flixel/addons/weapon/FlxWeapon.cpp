#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_addons_weapon_FlxBullet
#include <flixel/addons/weapon/FlxBullet.h>
#endif
#ifndef INCLUDED_flixel_addons_weapon_FlxWeapon
#include <flixel/addons/weapon/FlxWeapon.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
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
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemap
#include <flixel/tile/FlxTilemap.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_FlxPoint
#include <flixel/util/FlxPool_flixel_util_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_FlxRect
#include <flixel/util/FlxPool_flixel_util_FlxRect.h>
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

Void FlxWeapon_obj::__construct(::String Name,::flixel::FlxSprite ParentRef,::Class BulletType,Dynamic __o_BulletID)
{
HX_STACK_FRAME("flixel.addons.weapon.FlxWeapon","new",0x3f7727f7,"flixel.addons.weapon.FlxWeapon.new","flixel/addons/weapon/FlxWeapon.hx",33,0x017a22ba)
HX_STACK_THIS(this)
HX_STACK_ARG(Name,"Name")
HX_STACK_ARG(ParentRef,"ParentRef")
HX_STACK_ARG(BulletType,"BulletType")
HX_STACK_ARG(__o_BulletID,"BulletID")
Dynamic BulletID = __o_BulletID.Default(0);
{
	HX_STACK_LINE(130)
	this->_bulletsFired = (int)0;
	HX_STACK_LINE(117)
	this->_lastFired = (int)0;
	HX_STACK_LINE(83)
	this->rndFactorLifeSpan = (int)0;
	HX_STACK_LINE(82)
	this->rndFactorSpeed = (int)0;
	HX_STACK_LINE(81)
	this->rndFactorAngle = (int)0;
	HX_STACK_LINE(79)
	this->bulletElasticity = (int)0;
	HX_STACK_LINE(77)
	this->bulletDamage = (int)1;
	HX_STACK_LINE(76)
	this->bulletLifeSpan = (int)0;
	HX_STACK_LINE(75)
	this->multiShot = (int)0;
	HX_STACK_LINE(67)
	this->fireRate = (int)0;
	HX_STACK_LINE(66)
	this->nextFire = (int)0;
	HX_STACK_LINE(153)
	::flixel::util::FlxPoint _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(153)
	{
		HX_STACK_LINE(153)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(153)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(153)
		::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(153)
		point->_inPool = false;
		HX_STACK_LINE(153)
		_g = point;
	}
	HX_STACK_LINE(153)
	this->rndFactorPosition = _g;
	HX_STACK_LINE(154)
	::flixel::util::FlxRect _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(154)
	{
		HX_STACK_LINE(154)
		::flixel::util::FlxRect rect;		HX_STACK_VAR(rect,"rect");
		HX_STACK_LINE(154)
		{
			HX_STACK_LINE(154)
			::flixel::util::FlxRect _this = ::flixel::util::FlxRect_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(154)
			_this->x = (int)0;
			HX_STACK_LINE(154)
			_this->y = (int)0;
			HX_STACK_LINE(154)
			_this->width = ::flixel::FlxG_obj::width;
			HX_STACK_LINE(154)
			_this->height = ::flixel::FlxG_obj::height;
			HX_STACK_LINE(154)
			rect = _this;
		}
		HX_STACK_LINE(154)
		rect->_inPool = false;
		HX_STACK_LINE(154)
		_g1 = rect;
	}
	HX_STACK_LINE(154)
	this->bounds = _g1;
	HX_STACK_LINE(155)
	::flixel::util::FlxPoint _g2;		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(155)
	{
		HX_STACK_LINE(155)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(155)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(155)
		::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(155)
		point->_inPool = false;
		HX_STACK_LINE(155)
		_g2 = point;
	}
	HX_STACK_LINE(155)
	this->_positionOffset = _g2;
	HX_STACK_LINE(156)
	::flixel::util::FlxPoint _g3;		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(156)
	{
		HX_STACK_LINE(156)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(156)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(156)
		::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(156)
		point->_inPool = false;
		HX_STACK_LINE(156)
		_g3 = point;
	}
	HX_STACK_LINE(156)
	this->_velocity = _g3;
	HX_STACK_LINE(158)
	this->name = Name;
	HX_STACK_LINE(160)
	if (((BulletType == null()))){
		HX_STACK_LINE(161)
		BulletType = hx::ClassOf< ::flixel::addons::weapon::FlxBullet >();
	}
	HX_STACK_LINE(163)
	this->bulletType = BulletType;
	HX_STACK_LINE(164)
	this->bulletID = BulletID;
	HX_STACK_LINE(166)
	if (((ParentRef != null()))){
		HX_STACK_LINE(168)
		this->setParent(ParentRef,null(),null(),null());
	}
}
;
	return null();
}

//FlxWeapon_obj::~FlxWeapon_obj() { }

Dynamic FlxWeapon_obj::__CreateEmpty() { return  new FlxWeapon_obj; }
hx::ObjectPtr< FlxWeapon_obj > FlxWeapon_obj::__new(::String Name,::flixel::FlxSprite ParentRef,::Class BulletType,Dynamic __o_BulletID)
{  hx::ObjectPtr< FlxWeapon_obj > result = new FlxWeapon_obj();
	result->__construct(Name,ParentRef,BulletType,__o_BulletID);
	return result;}

Dynamic FlxWeapon_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxWeapon_obj > result = new FlxWeapon_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Void FlxWeapon_obj::makePixelBullet( int Quantity,hx::Null< int >  __o_Width,hx::Null< int >  __o_Height,hx::Null< int >  __o_Color,hx::Null< int >  __o_OffsetX,hx::Null< int >  __o_OffsetY){
int Width = __o_Width.Default(2);
int Height = __o_Height.Default(2);
int Color = __o_Color.Default(-1);
int OffsetX = __o_OffsetX.Default(0);
int OffsetY = __o_OffsetY.Default(0);
	HX_STACK_FRAME("flixel.addons.weapon.FlxWeapon","makePixelBullet",0xebee3c31,"flixel.addons.weapon.FlxWeapon.makePixelBullet","flixel/addons/weapon/FlxWeapon.hx",183,0x017a22ba)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Quantity,"Quantity")
	HX_STACK_ARG(Width,"Width")
	HX_STACK_ARG(Height,"Height")
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(OffsetX,"OffsetX")
	HX_STACK_ARG(OffsetY,"OffsetY")
{
		HX_STACK_LINE(184)
		::flixel::group::FlxTypedGroup _g = ::flixel::group::FlxTypedGroup_obj::__new(Quantity);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(184)
		this->group = _g;
		HX_STACK_LINE(186)
		{
			HX_STACK_LINE(186)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(186)
			while((true)){
				HX_STACK_LINE(186)
				if ((!(((_g1 < Quantity))))){
					HX_STACK_LINE(186)
					break;
				}
				HX_STACK_LINE(186)
				int b = (_g1)++;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(188)
				::flixel::addons::weapon::FlxBullet tempBullet = ::Type_obj::createInstance(this->bulletType,Dynamic( Array_obj<Dynamic>::__new().Add(hx::ObjectPtr<OBJ_>(this)).Add(this->bulletID)));		HX_STACK_VAR(tempBullet,"tempBullet");
				HX_STACK_LINE(189)
				tempBullet->makeGraphic(Width,Height,Color,null(),null());
				HX_STACK_LINE(190)
				this->group->add(tempBullet);
			}
		}
		HX_STACK_LINE(193)
		this->_positionOffset->set_x(OffsetX);
		HX_STACK_LINE(194)
		this->_positionOffset->set_y(OffsetY);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(FlxWeapon_obj,makePixelBullet,(void))

Void FlxWeapon_obj::makeImageBullet( int Quantity,Dynamic Image,hx::Null< int >  __o_OffsetX,hx::Null< int >  __o_OffsetY,hx::Null< bool >  __o_AutoRotate,hx::Null< int >  __o_Rotations,hx::Null< int >  __o_Frame,hx::Null< bool >  __o_AntiAliasing,hx::Null< bool >  __o_AutoBuffer){
int OffsetX = __o_OffsetX.Default(0);
int OffsetY = __o_OffsetY.Default(0);
bool AutoRotate = __o_AutoRotate.Default(false);
int Rotations = __o_Rotations.Default(16);
int Frame = __o_Frame.Default(-1);
bool AntiAliasing = __o_AntiAliasing.Default(false);
bool AutoBuffer = __o_AutoBuffer.Default(false);
	HX_STACK_FRAME("flixel.addons.weapon.FlxWeapon","makeImageBullet",0xc2a162c6,"flixel.addons.weapon.FlxWeapon.makeImageBullet","flixel/addons/weapon/FlxWeapon.hx",211,0x017a22ba)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Quantity,"Quantity")
	HX_STACK_ARG(Image,"Image")
	HX_STACK_ARG(OffsetX,"OffsetX")
	HX_STACK_ARG(OffsetY,"OffsetY")
	HX_STACK_ARG(AutoRotate,"AutoRotate")
	HX_STACK_ARG(Rotations,"Rotations")
	HX_STACK_ARG(Frame,"Frame")
	HX_STACK_ARG(AntiAliasing,"AntiAliasing")
	HX_STACK_ARG(AutoBuffer,"AutoBuffer")
{
		HX_STACK_LINE(212)
		::flixel::group::FlxTypedGroup _g = ::flixel::group::FlxTypedGroup_obj::__new(Quantity);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(212)
		this->group = _g;
		HX_STACK_LINE(214)
		this->_rotateToAngle = AutoRotate;
		HX_STACK_LINE(216)
		{
			HX_STACK_LINE(216)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(216)
			while((true)){
				HX_STACK_LINE(216)
				if ((!(((_g1 < Quantity))))){
					HX_STACK_LINE(216)
					break;
				}
				HX_STACK_LINE(216)
				int b = (_g1)++;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(218)
				::flixel::addons::weapon::FlxBullet tempBullet = ::Type_obj::createInstance(this->bulletType,Dynamic( Array_obj<Dynamic>::__new().Add(hx::ObjectPtr<OBJ_>(this)).Add(this->bulletID)));		HX_STACK_VAR(tempBullet,"tempBullet");
				HX_STACK_LINE(230)
				tempBullet->loadGraphic(Image,null(),null(),null(),null(),null());
				HX_STACK_LINE(231)
				tempBullet->animation->set_frameIndex(Frame);
				HX_STACK_LINE(232)
				tempBullet->antialiasing = AntiAliasing;
				HX_STACK_LINE(234)
				this->group->add(tempBullet);
			}
		}
		HX_STACK_LINE(237)
		this->_positionOffset->set_x(OffsetX);
		HX_STACK_LINE(238)
		this->_positionOffset->set_y(OffsetY);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC9(FlxWeapon_obj,makeImageBullet,(void))

Void FlxWeapon_obj::makeAnimatedBullet( int Quantity,Dynamic ImageSequence,int FrameWidth,int FrameHeight,Array< int > Frames,int FrameRate,bool Looped,hx::Null< int >  __o_OffsetX,hx::Null< int >  __o_OffsetY){
int OffsetX = __o_OffsetX.Default(0);
int OffsetY = __o_OffsetY.Default(0);
	HX_STACK_FRAME("flixel.addons.weapon.FlxWeapon","makeAnimatedBullet",0x1dee721c,"flixel.addons.weapon.FlxWeapon.makeAnimatedBullet","flixel/addons/weapon/FlxWeapon.hx",255,0x017a22ba)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Quantity,"Quantity")
	HX_STACK_ARG(ImageSequence,"ImageSequence")
	HX_STACK_ARG(FrameWidth,"FrameWidth")
	HX_STACK_ARG(FrameHeight,"FrameHeight")
	HX_STACK_ARG(Frames,"Frames")
	HX_STACK_ARG(FrameRate,"FrameRate")
	HX_STACK_ARG(Looped,"Looped")
	HX_STACK_ARG(OffsetX,"OffsetX")
	HX_STACK_ARG(OffsetY,"OffsetY")
{
		HX_STACK_LINE(256)
		::flixel::group::FlxTypedGroup _g = ::flixel::group::FlxTypedGroup_obj::__new(Quantity);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(256)
		this->group = _g;
		HX_STACK_LINE(258)
		{
			HX_STACK_LINE(258)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(258)
			while((true)){
				HX_STACK_LINE(258)
				if ((!(((_g1 < Quantity))))){
					HX_STACK_LINE(258)
					break;
				}
				HX_STACK_LINE(258)
				int b = (_g1)++;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(260)
				::flixel::addons::weapon::FlxBullet tempBullet = ::Type_obj::createInstance(this->bulletType,Dynamic( Array_obj<Dynamic>::__new().Add(hx::ObjectPtr<OBJ_>(this)).Add(this->bulletID)));		HX_STACK_VAR(tempBullet,"tempBullet");
				HX_STACK_LINE(262)
				tempBullet->loadGraphic(ImageSequence,true,FrameWidth,FrameHeight,null(),null());
				HX_STACK_LINE(263)
				tempBullet->addAnimation(HX_CSTRING("fire"),Frames,FrameRate,Looped);
				HX_STACK_LINE(265)
				this->group->add(tempBullet);
			}
		}
		HX_STACK_LINE(268)
		this->_positionOffset->set_x(OffsetX);
		HX_STACK_LINE(269)
		this->_positionOffset->set_y(OffsetY);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC9(FlxWeapon_obj,makeAnimatedBullet,(void))

bool FlxWeapon_obj::runFire( int Method,hx::Null< int >  __o_X,hx::Null< int >  __o_Y,::flixel::FlxSprite Target,hx::Null< int >  __o_Angle){
int X = __o_X.Default(0);
int Y = __o_Y.Default(0);
int Angle = __o_Angle.Default(0);
	HX_STACK_FRAME("flixel.addons.weapon.FlxWeapon","runFire",0xab9557b8,"flixel.addons.weapon.FlxWeapon.runFire","flixel/addons/weapon/FlxWeapon.hx",282,0x017a22ba)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Method,"Method")
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(Target,"Target")
	HX_STACK_ARG(Angle,"Angle")
{
		HX_STACK_LINE(283)
		if (((bool((this->fireRate > (int)0)) && bool((::flixel::FlxG_obj::game->ticks < this->nextFire))))){
			HX_STACK_LINE(285)
			return false;
		}
		HX_STACK_LINE(288)
		::flixel::addons::weapon::FlxBullet _g = this->getFreeBullet();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(288)
		this->currentBullet = _g;
		HX_STACK_LINE(290)
		if (((this->currentBullet == null()))){
			HX_STACK_LINE(292)
			return false;
		}
		HX_STACK_LINE(295)
		if (((this->onPreFireCallback_dyn() != null()))){
			HX_STACK_LINE(297)
			this->onPreFireCallback();
		}
		HX_STACK_LINE(301)
		if (((this->onPreFireSound != null()))){
			HX_STACK_LINE(303)
			this->onPreFireSound->play(null());
		}
		HX_STACK_LINE(308)
		this->currentBullet->velocity->set_x((int)0);
		HX_STACK_LINE(309)
		this->currentBullet->velocity->set_y((int)0);
		HX_STACK_LINE(311)
		this->_lastFired = ::flixel::FlxG_obj::game->ticks;
		HX_STACK_LINE(312)
		int _g1 = ::Std_obj::_int((Float(this->fireRate) / Float(::flixel::FlxG_obj::timeScale)));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(312)
		int _g2 = (::flixel::FlxG_obj::game->ticks + _g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(312)
		this->nextFire = _g2;
		HX_STACK_LINE(314)
		Float launchX = this->_positionOffset->x;		HX_STACK_VAR(launchX,"launchX");
		HX_STACK_LINE(315)
		Float launchY = this->_positionOffset->y;		HX_STACK_VAR(launchY,"launchY");
		HX_STACK_LINE(317)
		if ((this->_fireFromParent)){
			HX_STACK_LINE(319)
			hx::AddEq(launchX,this->parent->x);
			HX_STACK_LINE(320)
			hx::AddEq(launchY,this->parent->y);
		}
		else{
			HX_STACK_LINE(322)
			if ((this->_fireFromPosition)){
				HX_STACK_LINE(324)
				hx::AddEq(launchX,this->_fireX);
				HX_STACK_LINE(325)
				hx::AddEq(launchY,this->_fireY);
			}
		}
		HX_STACK_LINE(328)
		if ((this->_directionFromParent)){
			HX_STACK_LINE(330)
			::flixel::util::FlxPoint _g3 = ::flixel::util::FlxVelocity_obj::velocityFromFacing(this->parent,this->bulletSpeed);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(330)
			this->_velocity = _g3;
		}
		HX_STACK_LINE(334)
		if (((Method == (int)0))){
			HX_STACK_LINE(336)
			this->currentBullet->fire(launchX,launchY,this->_velocity->x,this->_velocity->y);
		}
		else{
			HX_STACK_LINE(338)
			if (((Method == (int)2))){
				HX_STACK_LINE(340)
				this->currentBullet->fireAtPosition(launchX,launchY,X,Y,this->bulletSpeed);
			}
			else{
				HX_STACK_LINE(342)
				if (((Method == (int)3))){
					HX_STACK_LINE(344)
					this->currentBullet->fireAtTarget(launchX,launchY,Target,this->bulletSpeed);
				}
				else{
					HX_STACK_LINE(346)
					if (((Method == (int)4))){
						HX_STACK_LINE(349)
						this->currentBullet->fireFromAngle(launchX,launchY,Angle,this->bulletSpeed);
						HX_STACK_LINE(350)
						this->currentBullet->set_angle(Angle);
					}
					else{
						HX_STACK_LINE(352)
						if (((Method == (int)5))){
							HX_STACK_LINE(354)
							int _g4 = ::Math_obj::floor(this->parent->angle);		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(354)
							this->currentBullet->fireFromAngle(launchX,launchY,_g4,this->bulletSpeed);
						}
						else{
							HX_STACK_LINE(357)
							if (((Method == (int)6))){
								HX_STACK_LINE(359)
								if (((this->_touchTarget != null()))){
									HX_STACK_LINE(360)
									this->currentBullet->fireAtTouch(launchX,launchY,this->_touchTarget,this->bulletSpeed,null());
								}
							}
							else{
								HX_STACK_LINE(364)
								if (((Method == (int)1))){
									HX_STACK_LINE(366)
									this->currentBullet->fireAtMouse(launchX,launchY,this->bulletSpeed,null());
								}
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(369)
		if (((this->onPostFireCallback_dyn() != null()))){
			HX_STACK_LINE(371)
			this->onPostFireCallback();
		}
		HX_STACK_LINE(375)
		if (((this->onPostFireSound != null()))){
			HX_STACK_LINE(377)
			this->onPostFireSound->play(null());
		}
		HX_STACK_LINE(381)
		(this->_bulletsFired)++;
		HX_STACK_LINE(383)
		return true;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxWeapon_obj,runFire,return )

bool FlxWeapon_obj::fire( ){
	HX_STACK_FRAME("flixel.addons.weapon.FlxWeapon","fire",0x4385203f,"flixel.addons.weapon.FlxWeapon.fire","flixel/addons/weapon/FlxWeapon.hx",393,0x017a22ba)
	HX_STACK_THIS(this)
	HX_STACK_LINE(393)
	return this->runFire((int)0,null(),null(),null(),null());
}


HX_DEFINE_DYNAMIC_FUNC0(FlxWeapon_obj,fire,return )

bool FlxWeapon_obj::fireAtMouse( ){
	HX_STACK_FRAME("flixel.addons.weapon.FlxWeapon","fireAtMouse",0x58b47db3,"flixel.addons.weapon.FlxWeapon.fireAtMouse","flixel/addons/weapon/FlxWeapon.hx",404,0x017a22ba)
	HX_STACK_THIS(this)
	HX_STACK_LINE(404)
	return this->runFire((int)1,null(),null(),null(),null());
}


HX_DEFINE_DYNAMIC_FUNC0(FlxWeapon_obj,fireAtMouse,return )

bool FlxWeapon_obj::fireAtTouch( ::flixel::input::touch::FlxTouch Touch){
	HX_STACK_FRAME("flixel.addons.weapon.FlxWeapon","fireAtTouch",0x60827f4d,"flixel.addons.weapon.FlxWeapon.fireAtTouch","flixel/addons/weapon/FlxWeapon.hx",416,0x017a22ba)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Touch,"Touch")
	HX_STACK_LINE(417)
	if (((Touch == null()))){
		HX_STACK_LINE(419)
		::flixel::input::touch::FlxTouch _g = ::flixel::FlxG_obj::touches->getFirst();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(419)
		this->_touchTarget = _g;
	}
	else{
		HX_STACK_LINE(423)
		this->_touchTarget = Touch;
	}
	HX_STACK_LINE(426)
	bool fired = false;		HX_STACK_VAR(fired,"fired");
	HX_STACK_LINE(428)
	if (((this->_touchTarget != null()))){
		HX_STACK_LINE(430)
		bool _g1 = this->runFire((int)6,null(),null(),null(),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(430)
		fired = _g1;
		HX_STACK_LINE(431)
		this->_touchTarget = null();
	}
	HX_STACK_LINE(434)
	return fired;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxWeapon_obj,fireAtTouch,return )

bool FlxWeapon_obj::fireAtPosition( int X,int Y){
	HX_STACK_FRAME("flixel.addons.weapon.FlxWeapon","fireAtPosition",0x4ce1e5db,"flixel.addons.weapon.FlxWeapon.fireAtPosition","flixel/addons/weapon/FlxWeapon.hx",447,0x017a22ba)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_LINE(447)
	return this->runFire((int)2,X,Y,null(),null());
}


HX_DEFINE_DYNAMIC_FUNC2(FlxWeapon_obj,fireAtPosition,return )

bool FlxWeapon_obj::fireAtTarget( ::flixel::FlxSprite Target){
	HX_STACK_FRAME("flixel.addons.weapon.FlxWeapon","fireAtTarget",0x00182803,"flixel.addons.weapon.FlxWeapon.fireAtTarget","flixel/addons/weapon/FlxWeapon.hx",458,0x017a22ba)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Target,"Target")
	HX_STACK_LINE(458)
	return this->runFire((int)3,(int)0,(int)0,Target,null());
}


HX_DEFINE_DYNAMIC_FUNC1(FlxWeapon_obj,fireAtTarget,return )

bool FlxWeapon_obj::fireFromAngle( int Angle){
	HX_STACK_FRAME("flixel.addons.weapon.FlxWeapon","fireFromAngle",0xbe686dca,"flixel.addons.weapon.FlxWeapon.fireFromAngle","flixel/addons/weapon/FlxWeapon.hx",469,0x017a22ba)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Angle,"Angle")
	HX_STACK_LINE(469)
	return this->runFire((int)4,(int)0,(int)0,null(),Angle);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxWeapon_obj,fireFromAngle,return )

bool FlxWeapon_obj::fireFromParentAngle( ){
	HX_STACK_FRAME("flixel.addons.weapon.FlxWeapon","fireFromParentAngle",0xc6dd3380,"flixel.addons.weapon.FlxWeapon.fireFromParentAngle","flixel/addons/weapon/FlxWeapon.hx",479,0x017a22ba)
	HX_STACK_THIS(this)
	HX_STACK_LINE(479)
	return this->runFire((int)5,null(),null(),null(),null());
}


HX_DEFINE_DYNAMIC_FUNC0(FlxWeapon_obj,fireFromParentAngle,return )

Void FlxWeapon_obj::setParent( ::flixel::FlxSprite ParentRef,hx::Null< int >  __o_OffsetX,hx::Null< int >  __o_OffsetY,hx::Null< bool >  __o_UseDirection){
int OffsetX = __o_OffsetX.Default(0);
int OffsetY = __o_OffsetY.Default(0);
bool UseDirection = __o_UseDirection.Default(false);
	HX_STACK_FRAME("flixel.addons.weapon.FlxWeapon","setParent",0x5b0d1d43,"flixel.addons.weapon.FlxWeapon.setParent","flixel/addons/weapon/FlxWeapon.hx",492,0x017a22ba)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ParentRef,"ParentRef")
	HX_STACK_ARG(OffsetX,"OffsetX")
	HX_STACK_ARG(OffsetY,"OffsetY")
	HX_STACK_ARG(UseDirection,"UseDirection")
{
		HX_STACK_LINE(492)
		if (((ParentRef != null()))){
			HX_STACK_LINE(494)
			this->_fireFromParent = true;
			HX_STACK_LINE(496)
			this->parent = ParentRef;
			HX_STACK_LINE(498)
			this->_positionOffset->set_x(OffsetX);
			HX_STACK_LINE(499)
			this->_positionOffset->set_y(OffsetY);
			HX_STACK_LINE(501)
			this->_directionFromParent = UseDirection;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxWeapon_obj,setParent,(void))

Void FlxWeapon_obj::setFiringPosition( int X,int Y,hx::Null< int >  __o_OffsetX,hx::Null< int >  __o_OffsetY){
int OffsetX = __o_OffsetX.Default(0);
int OffsetY = __o_OffsetY.Default(0);
	HX_STACK_FRAME("flixel.addons.weapon.FlxWeapon","setFiringPosition",0xc342f755,"flixel.addons.weapon.FlxWeapon.setFiringPosition","flixel/addons/weapon/FlxWeapon.hx",515,0x017a22ba)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(OffsetX,"OffsetX")
	HX_STACK_ARG(OffsetY,"OffsetY")
{
		HX_STACK_LINE(516)
		this->_fireFromPosition = true;
		HX_STACK_LINE(517)
		this->_fireX = X;
		HX_STACK_LINE(518)
		this->_fireY = Y;
		HX_STACK_LINE(520)
		this->_positionOffset->set_x(OffsetX);
		HX_STACK_LINE(521)
		this->_positionOffset->set_y(OffsetY);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxWeapon_obj,setFiringPosition,(void))

Void FlxWeapon_obj::setBulletSpeed( int Speed){
{
		HX_STACK_FRAME("flixel.addons.weapon.FlxWeapon","setBulletSpeed",0xcfe8f32c,"flixel.addons.weapon.FlxWeapon.setBulletSpeed","flixel/addons/weapon/FlxWeapon.hx",532,0x017a22ba)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Speed,"Speed")
		HX_STACK_LINE(532)
		this->bulletSpeed = Speed;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxWeapon_obj,setBulletSpeed,(void))

int FlxWeapon_obj::getBulletSpeed( ){
	HX_STACK_FRAME("flixel.addons.weapon.FlxWeapon","getBulletSpeed",0xafc90ab8,"flixel.addons.weapon.FlxWeapon.getBulletSpeed","flixel/addons/weapon/FlxWeapon.hx",542,0x017a22ba)
	HX_STACK_THIS(this)
	HX_STACK_LINE(542)
	return this->bulletSpeed;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxWeapon_obj,getBulletSpeed,return )

Void FlxWeapon_obj::setFireRate( int Rate){
{
		HX_STACK_FRAME("flixel.addons.weapon.FlxWeapon","setFireRate",0x0ca4760f,"flixel.addons.weapon.FlxWeapon.setFireRate","flixel/addons/weapon/FlxWeapon.hx",553,0x017a22ba)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Rate,"Rate")
		HX_STACK_LINE(553)
		this->fireRate = Rate;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxWeapon_obj,setFireRate,(void))

Void FlxWeapon_obj::setBulletBounds( ::flixel::util::FlxRect Bounds){
{
		HX_STACK_FRAME("flixel.addons.weapon.FlxWeapon","setBulletBounds",0xc70e5b30,"flixel.addons.weapon.FlxWeapon.setBulletBounds","flixel/addons/weapon/FlxWeapon.hx",564,0x017a22ba)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Bounds,"Bounds")
		HX_STACK_LINE(564)
		this->bounds = Bounds;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxWeapon_obj,setBulletBounds,(void))

Void FlxWeapon_obj::setBulletDirection( int Angle,int Speed){
{
		HX_STACK_FRAME("flixel.addons.weapon.FlxWeapon","setBulletDirection",0x8226f464,"flixel.addons.weapon.FlxWeapon.setBulletDirection","flixel/addons/weapon/FlxWeapon.hx",576,0x017a22ba)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Angle,"Angle")
		HX_STACK_ARG(Speed,"Speed")
		HX_STACK_LINE(577)
		::flixel::util::FlxPoint _g6;		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(577)
		{
			HX_STACK_LINE(577)
			Float a = (Angle * ((Float(::Math_obj::PI) / Float((int)180))));		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(577)
			::flixel::util::FlxPoint result;		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(577)
			{
				HX_STACK_LINE(577)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(577)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(577)
				::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(577)
				point->_inPool = false;
				HX_STACK_LINE(577)
				result = point;
			}
			HX_STACK_LINE(577)
			Float _g = ::Math_obj::cos(a);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(577)
			Float _g1 = (_g * Speed);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(577)
			int _g2 = ::Std_obj::_int(_g1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(577)
			result->set_x(_g2);
			HX_STACK_LINE(577)
			Float _g3 = ::Math_obj::sin(a);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(577)
			Float _g4 = (_g3 * Speed);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(577)
			int _g5 = ::Std_obj::_int(_g4);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(577)
			result->set_y(_g5);
			HX_STACK_LINE(577)
			_g6 = result;
		}
		HX_STACK_LINE(577)
		this->_velocity = _g6;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxWeapon_obj,setBulletDirection,(void))

Void FlxWeapon_obj::setBulletGravity( int ForceX,int ForceY){
{
		HX_STACK_FRAME("flixel.addons.weapon.FlxWeapon","setBulletGravity",0xe9c8bd33,"flixel.addons.weapon.FlxWeapon.setBulletGravity","flixel/addons/weapon/FlxWeapon.hx",587,0x017a22ba)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ForceX,"ForceX")
		HX_STACK_ARG(ForceY,"ForceY")
		HX_STACK_LINE(587)
		Array< int > ForceY1 = Array_obj< int >::__new().Add(ForceY);		HX_STACK_VAR(ForceY1,"ForceY1");
		HX_STACK_LINE(587)
		Array< int > ForceX1 = Array_obj< int >::__new().Add(ForceX);		HX_STACK_VAR(ForceX1,"ForceX1");

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,Array< int >,ForceY1,Array< int >,ForceX1)
		Void run(::flixel::addons::weapon::FlxBullet b){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","flixel/addons/weapon/FlxWeapon.hx",589,0x017a22ba)
			HX_STACK_ARG(b,"b")
			{
				HX_STACK_LINE(590)
				b->acceleration->set_x(ForceX1->__get((int)0));
				HX_STACK_LINE(591)
				b->acceleration->set_y(ForceY1->__get((int)0));
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(589)
		this->group->forEach( Dynamic(new _Function_1_1(ForceY1,ForceX1)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxWeapon_obj,setBulletGravity,(void))

Void FlxWeapon_obj::setBulletAcceleration( int AccelerationX,int AccelerationY,int SpeedMaxX,int SpeedMaxY){
{
		HX_STACK_FRAME("flixel.addons.weapon.FlxWeapon","setBulletAcceleration",0x75d6933b,"flixel.addons.weapon.FlxWeapon.setBulletAcceleration","flixel/addons/weapon/FlxWeapon.hx",605,0x017a22ba)
		HX_STACK_THIS(this)
		HX_STACK_ARG(AccelerationX,"AccelerationX")
		HX_STACK_ARG(AccelerationY,"AccelerationY")
		HX_STACK_ARG(SpeedMaxX,"SpeedMaxX")
		HX_STACK_ARG(SpeedMaxY,"SpeedMaxY")
		HX_STACK_LINE(605)
		Array< int > SpeedMaxY1 = Array_obj< int >::__new().Add(SpeedMaxY);		HX_STACK_VAR(SpeedMaxY1,"SpeedMaxY1");
		HX_STACK_LINE(605)
		Array< int > SpeedMaxX1 = Array_obj< int >::__new().Add(SpeedMaxX);		HX_STACK_VAR(SpeedMaxX1,"SpeedMaxX1");
		HX_STACK_LINE(605)
		Array< int > AccelerationY1 = Array_obj< int >::__new().Add(AccelerationY);		HX_STACK_VAR(AccelerationY1,"AccelerationY1");
		HX_STACK_LINE(605)
		Array< int > AccelerationX1 = Array_obj< int >::__new().Add(AccelerationX);		HX_STACK_VAR(AccelerationX1,"AccelerationX1");
		HX_STACK_LINE(607)
		if (((bool((AccelerationX1->__get((int)0) == (int)0)) && bool((AccelerationY1->__get((int)0) == (int)0))))){

			HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_2_1)
			Void run(::flixel::addons::weapon::FlxBullet b){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","flixel/addons/weapon/FlxWeapon.hx",610,0x017a22ba)
				HX_STACK_ARG(b,"b")
				{
					HX_STACK_LINE(610)
					b->accelerates = false;
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(609)
			this->group->forEach( Dynamic(new _Function_2_1()));
		}
		else{

			HX_BEGIN_LOCAL_FUNC_S4(hx::LocalFunc,_Function_2_1,Array< int >,AccelerationY1,Array< int >,SpeedMaxY1,Array< int >,AccelerationX1,Array< int >,SpeedMaxX1)
			Void run(::flixel::addons::weapon::FlxBullet b){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","flixel/addons/weapon/FlxWeapon.hx",615,0x017a22ba)
				HX_STACK_ARG(b,"b")
				{
					HX_STACK_LINE(616)
					b->accelerates = true;
					HX_STACK_LINE(617)
					b->xAcceleration = AccelerationX1->__get((int)0);
					HX_STACK_LINE(618)
					b->yAcceleration = AccelerationY1->__get((int)0);
					HX_STACK_LINE(619)
					b->maxVelocity->set_x(SpeedMaxX1->__get((int)0));
					HX_STACK_LINE(620)
					b->maxVelocity->set_y(SpeedMaxY1->__get((int)0));
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(615)
			this->group->forEach( Dynamic(new _Function_2_1(AccelerationY1,SpeedMaxY1,AccelerationX1,SpeedMaxX1)));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxWeapon_obj,setBulletAcceleration,(void))

Void FlxWeapon_obj::setBulletOffset( Float OffsetX,Float OffsetY){
{
		HX_STACK_FRAME("flixel.addons.weapon.FlxWeapon","setBulletOffset",0xc1306c4e,"flixel.addons.weapon.FlxWeapon.setBulletOffset","flixel/addons/weapon/FlxWeapon.hx",634,0x017a22ba)
		HX_STACK_THIS(this)
		HX_STACK_ARG(OffsetX,"OffsetX")
		HX_STACK_ARG(OffsetY,"OffsetY")
		HX_STACK_LINE(635)
		this->_positionOffset->set_x(OffsetX);
		HX_STACK_LINE(636)
		this->_positionOffset->set_y(OffsetY);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxWeapon_obj,setBulletOffset,(void))

Void FlxWeapon_obj::setBulletRandomFactor( hx::Null< int >  __o_RandomAngle,hx::Null< int >  __o_RandomSpeed,::flixel::util::FlxPoint RandomPosition,hx::Null< Float >  __o_RandomLifeSpan){
int RandomAngle = __o_RandomAngle.Default(0);
int RandomSpeed = __o_RandomSpeed.Default(0);
Float RandomLifeSpan = __o_RandomLifeSpan.Default(0);
	HX_STACK_FRAME("flixel.addons.weapon.FlxWeapon","setBulletRandomFactor",0x976ca62d,"flixel.addons.weapon.FlxWeapon.setBulletRandomFactor","flixel/addons/weapon/FlxWeapon.hx",648,0x017a22ba)
	HX_STACK_THIS(this)
	HX_STACK_ARG(RandomAngle,"RandomAngle")
	HX_STACK_ARG(RandomSpeed,"RandomSpeed")
	HX_STACK_ARG(RandomPosition,"RandomPosition")
	HX_STACK_ARG(RandomLifeSpan,"RandomLifeSpan")
{
		HX_STACK_LINE(649)
		this->rndFactorAngle = RandomAngle;
		HX_STACK_LINE(650)
		this->rndFactorSpeed = RandomSpeed;
		HX_STACK_LINE(652)
		if (((RandomPosition != null()))){
			HX_STACK_LINE(654)
			this->rndFactorPosition = RandomPosition;
		}
		HX_STACK_LINE(657)
		if (((RandomLifeSpan < (int)0))){
			HX_STACK_LINE(657)
			this->rndFactorLifeSpan = -(RandomLifeSpan);
		}
		else{
			HX_STACK_LINE(657)
			this->rndFactorLifeSpan = RandomLifeSpan;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxWeapon_obj,setBulletRandomFactor,(void))

Void FlxWeapon_obj::setBulletLifeSpan( Float Lifespan){
{
		HX_STACK_FRAME("flixel.addons.weapon.FlxWeapon","setBulletLifeSpan",0x7502ff61,"flixel.addons.weapon.FlxWeapon.setBulletLifeSpan","flixel/addons/weapon/FlxWeapon.hx",668,0x017a22ba)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Lifespan,"Lifespan")
		HX_STACK_LINE(668)
		this->bulletLifeSpan = Lifespan;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxWeapon_obj,setBulletLifeSpan,(void))

Void FlxWeapon_obj::setBulletElasticity( Float Elasticity){
{
		HX_STACK_FRAME("flixel.addons.weapon.FlxWeapon","setBulletElasticity",0x858d71b4,"flixel.addons.weapon.FlxWeapon.setBulletElasticity","flixel/addons/weapon/FlxWeapon.hx",678,0x017a22ba)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Elasticity,"Elasticity")
		HX_STACK_LINE(678)
		this->bulletElasticity = Elasticity;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxWeapon_obj,setBulletElasticity,(void))

::flixel::addons::weapon::FlxBullet FlxWeapon_obj::getFreeBullet( ){
	HX_STACK_FRAME("flixel.addons.weapon.FlxWeapon","getFreeBullet",0x2e2a229b,"flixel.addons.weapon.FlxWeapon.getFreeBullet","flixel/addons/weapon/FlxWeapon.hx",687,0x017a22ba)
	HX_STACK_THIS(this)
	HX_STACK_LINE(688)
	::flixel::addons::weapon::FlxBullet result = null();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(690)
	if (((bool((this->group == null())) || bool((this->group->length == (int)0))))){
		HX_STACK_LINE(692)
		HX_STACK_DO_THROW(HX_CSTRING("Weapon.as cannot fire a bullet until one has been created via a call to makePixelBullet or makeImageBullet"));
		HX_STACK_LINE(693)
		return null();
	}
	HX_STACK_LINE(696)
	::flixel::addons::weapon::FlxBullet bullet;		HX_STACK_VAR(bullet,"bullet");
	HX_STACK_LINE(698)
	{
		HX_STACK_LINE(698)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(698)
		int _g = this->group->members->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(698)
		while((true)){
			HX_STACK_LINE(698)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(698)
				break;
			}
			HX_STACK_LINE(698)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(700)
			bullet = this->group->members->__GetItem(i);
			HX_STACK_LINE(702)
			if (((bullet->exists == false))){
				HX_STACK_LINE(704)
				result = bullet;
				HX_STACK_LINE(705)
				break;
			}
		}
	}
	HX_STACK_LINE(709)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxWeapon_obj,getFreeBullet,return )

Void FlxWeapon_obj::setPreFireCallback( Dynamic Callback,::flixel::system::FlxSound Sound){
{
		HX_STACK_FRAME("flixel.addons.weapon.FlxWeapon","setPreFireCallback",0x17fc4125,"flixel.addons.weapon.FlxWeapon.setPreFireCallback","flixel/addons/weapon/FlxWeapon.hx",719,0x017a22ba)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Callback,"Callback")
		HX_STACK_ARG(Sound,"Sound")
		HX_STACK_LINE(720)
		this->onPreFireCallback = Callback;
		HX_STACK_LINE(721)
		this->onPreFireSound = Sound;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxWeapon_obj,setPreFireCallback,(void))

Void FlxWeapon_obj::setFireCallback( Dynamic Callback,::flixel::system::FlxSound Sound){
{
		HX_STACK_FRAME("flixel.addons.weapon.FlxWeapon","setFireCallback",0xd6298074,"flixel.addons.weapon.FlxWeapon.setFireCallback","flixel/addons/weapon/FlxWeapon.hx",731,0x017a22ba)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Callback,"Callback")
		HX_STACK_ARG(Sound,"Sound")
		HX_STACK_LINE(732)
		this->onFireCallback = Callback;
		HX_STACK_LINE(733)
		this->onFireSound = Sound;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxWeapon_obj,setFireCallback,(void))

Void FlxWeapon_obj::setPostFireCallback( Dynamic Callback,::flixel::system::FlxSound Sound){
{
		HX_STACK_FRAME("flixel.addons.weapon.FlxWeapon","setPostFireCallback",0xdc094174,"flixel.addons.weapon.FlxWeapon.setPostFireCallback","flixel/addons/weapon/FlxWeapon.hx",743,0x017a22ba)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Callback,"Callback")
		HX_STACK_ARG(Sound,"Sound")
		HX_STACK_LINE(744)
		this->onPostFireCallback = Callback;
		HX_STACK_LINE(745)
		this->onPostFireSound = Sound;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxWeapon_obj,setPostFireCallback,(void))

Void FlxWeapon_obj::bulletsOverlap( ::flixel::FlxBasic ObjectOrGroup,Dynamic NotifyCallBack,hx::Null< bool >  __o_SkipParent){
bool SkipParent = __o_SkipParent.Default(true);
	HX_STACK_FRAME("flixel.addons.weapon.FlxWeapon","bulletsOverlap",0x10a2055f,"flixel.addons.weapon.FlxWeapon.bulletsOverlap","flixel/addons/weapon/FlxWeapon.hx",757,0x017a22ba)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ObjectOrGroup,"ObjectOrGroup")
	HX_STACK_ARG(NotifyCallBack,"NotifyCallBack")
	HX_STACK_ARG(SkipParent,"SkipParent")
{
		HX_STACK_LINE(757)
		if (((bool((this->group != null())) && bool((this->group->length > (int)0))))){
			HX_STACK_LINE(759)
			this->_skipParentCollision = SkipParent;
			HX_STACK_LINE(760)
			::flixel::FlxG_obj::overlap(ObjectOrGroup,this->group,(  (((NotifyCallBack != null()))) ? Dynamic(NotifyCallBack) : Dynamic(this->onBulletHit_dyn()) ),this->shouldBulletHit_dyn());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxWeapon_obj,bulletsOverlap,(void))

bool FlxWeapon_obj::shouldBulletHit( ::flixel::FlxObject Object,::flixel::FlxObject Bullet){
	HX_STACK_FRAME("flixel.addons.weapon.FlxWeapon","shouldBulletHit",0xf466b895,"flixel.addons.weapon.FlxWeapon.shouldBulletHit","flixel/addons/weapon/FlxWeapon.hx",765,0x017a22ba)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_ARG(Bullet,"Bullet")
	HX_STACK_LINE(766)
	if (((bool((this->parent == Object)) && bool(this->_skipParentCollision)))){
		HX_STACK_LINE(768)
		return false;
	}
	HX_STACK_LINE(771)
	if ((::Std_obj::is(Object,hx::ClassOf< ::flixel::tile::FlxTilemap >()))){
		HX_STACK_LINE(773)
		return (hx::TCast< flixel::tile::FlxTilemap >::cast(Object))->overlapsWithCallback(Bullet,null(),null(),null());
	}
	else{
		HX_STACK_LINE(777)
		return true;
	}
	HX_STACK_LINE(771)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxWeapon_obj,shouldBulletHit,return )

Void FlxWeapon_obj::onBulletHit( ::flixel::FlxObject Object,::flixel::FlxObject Bullet){
{
		HX_STACK_FRAME("flixel.addons.weapon.FlxWeapon","onBulletHit",0x45e7eaa9,"flixel.addons.weapon.FlxWeapon.onBulletHit","flixel/addons/weapon/FlxWeapon.hx",783,0x017a22ba)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Object,"Object")
		HX_STACK_ARG(Bullet,"Bullet")
		HX_STACK_LINE(783)
		Bullet->kill();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxWeapon_obj,onBulletHit,(void))

int FlxWeapon_obj::BULLET_UP;

int FlxWeapon_obj::BULLET_DOWN;

int FlxWeapon_obj::BULLET_LEFT;

int FlxWeapon_obj::BULLET_RIGHT;

int FlxWeapon_obj::BULLET_NORTH_EAST;

int FlxWeapon_obj::BULLET_NORTH_WEST;

int FlxWeapon_obj::BULLET_SOUTH_EAST;

int FlxWeapon_obj::BULLET_SOUTH_WEST;

int FlxWeapon_obj::FIRE;

int FlxWeapon_obj::FIRE_AT_MOUSE;

int FlxWeapon_obj::FIRE_AT_POSITION;

int FlxWeapon_obj::FIRE_AT_TARGET;

int FlxWeapon_obj::FIRE_FROM_ANGLE;

int FlxWeapon_obj::FIRE_FROM_PARENT_ANGLE;

int FlxWeapon_obj::FIRE_AT_TOUCH;


FlxWeapon_obj::FlxWeapon_obj()
{
}

void FlxWeapon_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxWeapon);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(group,"group");
	HX_MARK_MEMBER_NAME(bulletType,"bulletType");
	HX_MARK_MEMBER_NAME(bulletID,"bulletID");
	HX_MARK_MEMBER_NAME(nextFire,"nextFire");
	HX_MARK_MEMBER_NAME(fireRate,"fireRate");
	HX_MARK_MEMBER_NAME(bulletSpeed,"bulletSpeed");
	HX_MARK_MEMBER_NAME(bounds,"bounds");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(multiShot,"multiShot");
	HX_MARK_MEMBER_NAME(bulletLifeSpan,"bulletLifeSpan");
	HX_MARK_MEMBER_NAME(bulletDamage,"bulletDamage");
	HX_MARK_MEMBER_NAME(bulletElasticity,"bulletElasticity");
	HX_MARK_MEMBER_NAME(rndFactorAngle,"rndFactorAngle");
	HX_MARK_MEMBER_NAME(rndFactorSpeed,"rndFactorSpeed");
	HX_MARK_MEMBER_NAME(rndFactorLifeSpan,"rndFactorLifeSpan");
	HX_MARK_MEMBER_NAME(rndFactorPosition,"rndFactorPosition");
	HX_MARK_MEMBER_NAME(currentBullet,"currentBullet");
	HX_MARK_MEMBER_NAME(onPreFireCallback,"onPreFireCallback");
	HX_MARK_MEMBER_NAME(onFireCallback,"onFireCallback");
	HX_MARK_MEMBER_NAME(onPostFireCallback,"onPostFireCallback");
	HX_MARK_MEMBER_NAME(onPreFireSound,"onPreFireSound");
	HX_MARK_MEMBER_NAME(onFireSound,"onFireSound");
	HX_MARK_MEMBER_NAME(onPostFireSound,"onPostFireSound");
	HX_MARK_MEMBER_NAME(_rotateToAngle,"_rotateToAngle");
	HX_MARK_MEMBER_NAME(_velocity,"_velocity");
	HX_MARK_MEMBER_NAME(_fireFromPosition,"_fireFromPosition");
	HX_MARK_MEMBER_NAME(_fireX,"_fireX");
	HX_MARK_MEMBER_NAME(_fireY,"_fireY");
	HX_MARK_MEMBER_NAME(_lastFired,"_lastFired");
	HX_MARK_MEMBER_NAME(_touchTarget,"_touchTarget");
	HX_MARK_MEMBER_NAME(_fireFromParent,"_fireFromParent");
	HX_MARK_MEMBER_NAME(_positionOffset,"_positionOffset");
	HX_MARK_MEMBER_NAME(_directionFromParent,"_directionFromParent");
	HX_MARK_MEMBER_NAME(_angleFromParent,"_angleFromParent");
	HX_MARK_MEMBER_NAME(_bulletsFired,"_bulletsFired");
	HX_MARK_MEMBER_NAME(_currentMagazine,"_currentMagazine");
	HX_MARK_MEMBER_NAME(_magazineCount,"_magazineCount");
	HX_MARK_MEMBER_NAME(_bulletsPerMagazine,"_bulletsPerMagazine");
	HX_MARK_MEMBER_NAME(_magazineSwapDelay,"_magazineSwapDelay");
	HX_MARK_MEMBER_NAME(_skipParentCollision,"_skipParentCollision");
	HX_MARK_MEMBER_NAME(_magazineSwapCallback,"_magazineSwapCallback");
	HX_MARK_MEMBER_NAME(_magazineSwapSound,"_magazineSwapSound");
	HX_MARK_END_CLASS();
}

void FlxWeapon_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(group,"group");
	HX_VISIT_MEMBER_NAME(bulletType,"bulletType");
	HX_VISIT_MEMBER_NAME(bulletID,"bulletID");
	HX_VISIT_MEMBER_NAME(nextFire,"nextFire");
	HX_VISIT_MEMBER_NAME(fireRate,"fireRate");
	HX_VISIT_MEMBER_NAME(bulletSpeed,"bulletSpeed");
	HX_VISIT_MEMBER_NAME(bounds,"bounds");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(multiShot,"multiShot");
	HX_VISIT_MEMBER_NAME(bulletLifeSpan,"bulletLifeSpan");
	HX_VISIT_MEMBER_NAME(bulletDamage,"bulletDamage");
	HX_VISIT_MEMBER_NAME(bulletElasticity,"bulletElasticity");
	HX_VISIT_MEMBER_NAME(rndFactorAngle,"rndFactorAngle");
	HX_VISIT_MEMBER_NAME(rndFactorSpeed,"rndFactorSpeed");
	HX_VISIT_MEMBER_NAME(rndFactorLifeSpan,"rndFactorLifeSpan");
	HX_VISIT_MEMBER_NAME(rndFactorPosition,"rndFactorPosition");
	HX_VISIT_MEMBER_NAME(currentBullet,"currentBullet");
	HX_VISIT_MEMBER_NAME(onPreFireCallback,"onPreFireCallback");
	HX_VISIT_MEMBER_NAME(onFireCallback,"onFireCallback");
	HX_VISIT_MEMBER_NAME(onPostFireCallback,"onPostFireCallback");
	HX_VISIT_MEMBER_NAME(onPreFireSound,"onPreFireSound");
	HX_VISIT_MEMBER_NAME(onFireSound,"onFireSound");
	HX_VISIT_MEMBER_NAME(onPostFireSound,"onPostFireSound");
	HX_VISIT_MEMBER_NAME(_rotateToAngle,"_rotateToAngle");
	HX_VISIT_MEMBER_NAME(_velocity,"_velocity");
	HX_VISIT_MEMBER_NAME(_fireFromPosition,"_fireFromPosition");
	HX_VISIT_MEMBER_NAME(_fireX,"_fireX");
	HX_VISIT_MEMBER_NAME(_fireY,"_fireY");
	HX_VISIT_MEMBER_NAME(_lastFired,"_lastFired");
	HX_VISIT_MEMBER_NAME(_touchTarget,"_touchTarget");
	HX_VISIT_MEMBER_NAME(_fireFromParent,"_fireFromParent");
	HX_VISIT_MEMBER_NAME(_positionOffset,"_positionOffset");
	HX_VISIT_MEMBER_NAME(_directionFromParent,"_directionFromParent");
	HX_VISIT_MEMBER_NAME(_angleFromParent,"_angleFromParent");
	HX_VISIT_MEMBER_NAME(_bulletsFired,"_bulletsFired");
	HX_VISIT_MEMBER_NAME(_currentMagazine,"_currentMagazine");
	HX_VISIT_MEMBER_NAME(_magazineCount,"_magazineCount");
	HX_VISIT_MEMBER_NAME(_bulletsPerMagazine,"_bulletsPerMagazine");
	HX_VISIT_MEMBER_NAME(_magazineSwapDelay,"_magazineSwapDelay");
	HX_VISIT_MEMBER_NAME(_skipParentCollision,"_skipParentCollision");
	HX_VISIT_MEMBER_NAME(_magazineSwapCallback,"_magazineSwapCallback");
	HX_VISIT_MEMBER_NAME(_magazineSwapSound,"_magazineSwapSound");
}

Dynamic FlxWeapon_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		if (HX_FIELD_EQ(inName,"fire") ) { return fire_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"group") ) { return group; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bounds") ) { return bounds; }
		if (HX_FIELD_EQ(inName,"parent") ) { return parent; }
		if (HX_FIELD_EQ(inName,"_fireX") ) { return _fireX; }
		if (HX_FIELD_EQ(inName,"_fireY") ) { return _fireY; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"runFire") ) { return runFire_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"bulletID") ) { return bulletID; }
		if (HX_FIELD_EQ(inName,"nextFire") ) { return nextFire; }
		if (HX_FIELD_EQ(inName,"fireRate") ) { return fireRate; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"multiShot") ) { return multiShot; }
		if (HX_FIELD_EQ(inName,"_velocity") ) { return _velocity; }
		if (HX_FIELD_EQ(inName,"setParent") ) { return setParent_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bulletType") ) { return bulletType; }
		if (HX_FIELD_EQ(inName,"_lastFired") ) { return _lastFired; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bulletSpeed") ) { return bulletSpeed; }
		if (HX_FIELD_EQ(inName,"onFireSound") ) { return onFireSound; }
		if (HX_FIELD_EQ(inName,"fireAtMouse") ) { return fireAtMouse_dyn(); }
		if (HX_FIELD_EQ(inName,"fireAtTouch") ) { return fireAtTouch_dyn(); }
		if (HX_FIELD_EQ(inName,"setFireRate") ) { return setFireRate_dyn(); }
		if (HX_FIELD_EQ(inName,"onBulletHit") ) { return onBulletHit_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"bulletDamage") ) { return bulletDamage; }
		if (HX_FIELD_EQ(inName,"_touchTarget") ) { return _touchTarget; }
		if (HX_FIELD_EQ(inName,"fireAtTarget") ) { return fireAtTarget_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"currentBullet") ) { return currentBullet; }
		if (HX_FIELD_EQ(inName,"_bulletsFired") ) { return _bulletsFired; }
		if (HX_FIELD_EQ(inName,"fireFromAngle") ) { return fireFromAngle_dyn(); }
		if (HX_FIELD_EQ(inName,"getFreeBullet") ) { return getFreeBullet_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"bulletLifeSpan") ) { return bulletLifeSpan; }
		if (HX_FIELD_EQ(inName,"rndFactorAngle") ) { return rndFactorAngle; }
		if (HX_FIELD_EQ(inName,"rndFactorSpeed") ) { return rndFactorSpeed; }
		if (HX_FIELD_EQ(inName,"onFireCallback") ) { return onFireCallback; }
		if (HX_FIELD_EQ(inName,"onPreFireSound") ) { return onPreFireSound; }
		if (HX_FIELD_EQ(inName,"_rotateToAngle") ) { return _rotateToAngle; }
		if (HX_FIELD_EQ(inName,"_magazineCount") ) { return _magazineCount; }
		if (HX_FIELD_EQ(inName,"fireAtPosition") ) { return fireAtPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"setBulletSpeed") ) { return setBulletSpeed_dyn(); }
		if (HX_FIELD_EQ(inName,"getBulletSpeed") ) { return getBulletSpeed_dyn(); }
		if (HX_FIELD_EQ(inName,"bulletsOverlap") ) { return bulletsOverlap_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"onPostFireSound") ) { return onPostFireSound; }
		if (HX_FIELD_EQ(inName,"_fireFromParent") ) { return _fireFromParent; }
		if (HX_FIELD_EQ(inName,"_positionOffset") ) { return _positionOffset; }
		if (HX_FIELD_EQ(inName,"makePixelBullet") ) { return makePixelBullet_dyn(); }
		if (HX_FIELD_EQ(inName,"makeImageBullet") ) { return makeImageBullet_dyn(); }
		if (HX_FIELD_EQ(inName,"setBulletBounds") ) { return setBulletBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"setBulletOffset") ) { return setBulletOffset_dyn(); }
		if (HX_FIELD_EQ(inName,"setFireCallback") ) { return setFireCallback_dyn(); }
		if (HX_FIELD_EQ(inName,"shouldBulletHit") ) { return shouldBulletHit_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"bulletElasticity") ) { return bulletElasticity; }
		if (HX_FIELD_EQ(inName,"_angleFromParent") ) { return _angleFromParent; }
		if (HX_FIELD_EQ(inName,"_currentMagazine") ) { return _currentMagazine; }
		if (HX_FIELD_EQ(inName,"setBulletGravity") ) { return setBulletGravity_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"rndFactorLifeSpan") ) { return rndFactorLifeSpan; }
		if (HX_FIELD_EQ(inName,"rndFactorPosition") ) { return rndFactorPosition; }
		if (HX_FIELD_EQ(inName,"onPreFireCallback") ) { return onPreFireCallback; }
		if (HX_FIELD_EQ(inName,"_fireFromPosition") ) { return _fireFromPosition; }
		if (HX_FIELD_EQ(inName,"setFiringPosition") ) { return setFiringPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"setBulletLifeSpan") ) { return setBulletLifeSpan_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"onPostFireCallback") ) { return onPostFireCallback; }
		if (HX_FIELD_EQ(inName,"_magazineSwapDelay") ) { return _magazineSwapDelay; }
		if (HX_FIELD_EQ(inName,"_magazineSwapSound") ) { return _magazineSwapSound; }
		if (HX_FIELD_EQ(inName,"makeAnimatedBullet") ) { return makeAnimatedBullet_dyn(); }
		if (HX_FIELD_EQ(inName,"setBulletDirection") ) { return setBulletDirection_dyn(); }
		if (HX_FIELD_EQ(inName,"setPreFireCallback") ) { return setPreFireCallback_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_bulletsPerMagazine") ) { return _bulletsPerMagazine; }
		if (HX_FIELD_EQ(inName,"fireFromParentAngle") ) { return fireFromParentAngle_dyn(); }
		if (HX_FIELD_EQ(inName,"setBulletElasticity") ) { return setBulletElasticity_dyn(); }
		if (HX_FIELD_EQ(inName,"setPostFireCallback") ) { return setPostFireCallback_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_directionFromParent") ) { return _directionFromParent; }
		if (HX_FIELD_EQ(inName,"_skipParentCollision") ) { return _skipParentCollision; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_magazineSwapCallback") ) { return _magazineSwapCallback; }
		if (HX_FIELD_EQ(inName,"setBulletAcceleration") ) { return setBulletAcceleration_dyn(); }
		if (HX_FIELD_EQ(inName,"setBulletRandomFactor") ) { return setBulletRandomFactor_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxWeapon_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"group") ) { group=inValue.Cast< ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bounds") ) { bounds=inValue.Cast< ::flixel::util::FlxRect >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fireX") ) { _fireX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fireY") ) { _fireY=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"bulletID") ) { bulletID=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nextFire") ) { nextFire=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fireRate") ) { fireRate=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"multiShot") ) { multiShot=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_velocity") ) { _velocity=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bulletType") ) { bulletType=inValue.Cast< ::Class >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_lastFired") ) { _lastFired=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bulletSpeed") ) { bulletSpeed=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onFireSound") ) { onFireSound=inValue.Cast< ::flixel::system::FlxSound >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"bulletDamage") ) { bulletDamage=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_touchTarget") ) { _touchTarget=inValue.Cast< ::flixel::input::touch::FlxTouch >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"currentBullet") ) { currentBullet=inValue.Cast< ::flixel::addons::weapon::FlxBullet >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bulletsFired") ) { _bulletsFired=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"bulletLifeSpan") ) { bulletLifeSpan=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rndFactorAngle") ) { rndFactorAngle=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rndFactorSpeed") ) { rndFactorSpeed=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onFireCallback") ) { onFireCallback=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onPreFireSound") ) { onPreFireSound=inValue.Cast< ::flixel::system::FlxSound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rotateToAngle") ) { _rotateToAngle=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_magazineCount") ) { _magazineCount=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"onPostFireSound") ) { onPostFireSound=inValue.Cast< ::flixel::system::FlxSound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fireFromParent") ) { _fireFromParent=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_positionOffset") ) { _positionOffset=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"bulletElasticity") ) { bulletElasticity=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_angleFromParent") ) { _angleFromParent=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_currentMagazine") ) { _currentMagazine=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"rndFactorLifeSpan") ) { rndFactorLifeSpan=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rndFactorPosition") ) { rndFactorPosition=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onPreFireCallback") ) { onPreFireCallback=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fireFromPosition") ) { _fireFromPosition=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"onPostFireCallback") ) { onPostFireCallback=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_magazineSwapDelay") ) { _magazineSwapDelay=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_magazineSwapSound") ) { _magazineSwapSound=inValue.Cast< ::flixel::system::FlxSound >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_bulletsPerMagazine") ) { _bulletsPerMagazine=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_directionFromParent") ) { _directionFromParent=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_skipParentCollision") ) { _skipParentCollision=inValue.Cast< bool >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_magazineSwapCallback") ) { _magazineSwapCallback=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxWeapon_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("group"));
	outFields->push(HX_CSTRING("bulletType"));
	outFields->push(HX_CSTRING("bulletID"));
	outFields->push(HX_CSTRING("nextFire"));
	outFields->push(HX_CSTRING("fireRate"));
	outFields->push(HX_CSTRING("bulletSpeed"));
	outFields->push(HX_CSTRING("bounds"));
	outFields->push(HX_CSTRING("parent"));
	outFields->push(HX_CSTRING("multiShot"));
	outFields->push(HX_CSTRING("bulletLifeSpan"));
	outFields->push(HX_CSTRING("bulletDamage"));
	outFields->push(HX_CSTRING("bulletElasticity"));
	outFields->push(HX_CSTRING("rndFactorAngle"));
	outFields->push(HX_CSTRING("rndFactorSpeed"));
	outFields->push(HX_CSTRING("rndFactorLifeSpan"));
	outFields->push(HX_CSTRING("rndFactorPosition"));
	outFields->push(HX_CSTRING("currentBullet"));
	outFields->push(HX_CSTRING("onPreFireSound"));
	outFields->push(HX_CSTRING("onFireSound"));
	outFields->push(HX_CSTRING("onPostFireSound"));
	outFields->push(HX_CSTRING("_rotateToAngle"));
	outFields->push(HX_CSTRING("_velocity"));
	outFields->push(HX_CSTRING("_fireFromPosition"));
	outFields->push(HX_CSTRING("_fireX"));
	outFields->push(HX_CSTRING("_fireY"));
	outFields->push(HX_CSTRING("_lastFired"));
	outFields->push(HX_CSTRING("_touchTarget"));
	outFields->push(HX_CSTRING("_fireFromParent"));
	outFields->push(HX_CSTRING("_positionOffset"));
	outFields->push(HX_CSTRING("_directionFromParent"));
	outFields->push(HX_CSTRING("_angleFromParent"));
	outFields->push(HX_CSTRING("_bulletsFired"));
	outFields->push(HX_CSTRING("_currentMagazine"));
	outFields->push(HX_CSTRING("_magazineCount"));
	outFields->push(HX_CSTRING("_bulletsPerMagazine"));
	outFields->push(HX_CSTRING("_magazineSwapDelay"));
	outFields->push(HX_CSTRING("_skipParentCollision"));
	outFields->push(HX_CSTRING("_magazineSwapCallback"));
	outFields->push(HX_CSTRING("_magazineSwapSound"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("BULLET_UP"),
	HX_CSTRING("BULLET_DOWN"),
	HX_CSTRING("BULLET_LEFT"),
	HX_CSTRING("BULLET_RIGHT"),
	HX_CSTRING("BULLET_NORTH_EAST"),
	HX_CSTRING("BULLET_NORTH_WEST"),
	HX_CSTRING("BULLET_SOUTH_EAST"),
	HX_CSTRING("BULLET_SOUTH_WEST"),
	HX_CSTRING("FIRE"),
	HX_CSTRING("FIRE_AT_MOUSE"),
	HX_CSTRING("FIRE_AT_POSITION"),
	HX_CSTRING("FIRE_AT_TARGET"),
	HX_CSTRING("FIRE_FROM_ANGLE"),
	HX_CSTRING("FIRE_FROM_PARENT_ANGLE"),
	HX_CSTRING("FIRE_AT_TOUCH"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(FlxWeapon_obj,name),HX_CSTRING("name")},
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(FlxWeapon_obj,group),HX_CSTRING("group")},
	{hx::fsObject /*::Class*/ ,(int)offsetof(FlxWeapon_obj,bulletType),HX_CSTRING("bulletType")},
	{hx::fsInt,(int)offsetof(FlxWeapon_obj,bulletID),HX_CSTRING("bulletID")},
	{hx::fsInt,(int)offsetof(FlxWeapon_obj,nextFire),HX_CSTRING("nextFire")},
	{hx::fsInt,(int)offsetof(FlxWeapon_obj,fireRate),HX_CSTRING("fireRate")},
	{hx::fsInt,(int)offsetof(FlxWeapon_obj,bulletSpeed),HX_CSTRING("bulletSpeed")},
	{hx::fsObject /*::flixel::util::FlxRect*/ ,(int)offsetof(FlxWeapon_obj,bounds),HX_CSTRING("bounds")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(FlxWeapon_obj,parent),HX_CSTRING("parent")},
	{hx::fsInt,(int)offsetof(FlxWeapon_obj,multiShot),HX_CSTRING("multiShot")},
	{hx::fsFloat,(int)offsetof(FlxWeapon_obj,bulletLifeSpan),HX_CSTRING("bulletLifeSpan")},
	{hx::fsFloat,(int)offsetof(FlxWeapon_obj,bulletDamage),HX_CSTRING("bulletDamage")},
	{hx::fsFloat,(int)offsetof(FlxWeapon_obj,bulletElasticity),HX_CSTRING("bulletElasticity")},
	{hx::fsInt,(int)offsetof(FlxWeapon_obj,rndFactorAngle),HX_CSTRING("rndFactorAngle")},
	{hx::fsInt,(int)offsetof(FlxWeapon_obj,rndFactorSpeed),HX_CSTRING("rndFactorSpeed")},
	{hx::fsFloat,(int)offsetof(FlxWeapon_obj,rndFactorLifeSpan),HX_CSTRING("rndFactorLifeSpan")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxWeapon_obj,rndFactorPosition),HX_CSTRING("rndFactorPosition")},
	{hx::fsObject /*::flixel::addons::weapon::FlxBullet*/ ,(int)offsetof(FlxWeapon_obj,currentBullet),HX_CSTRING("currentBullet")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxWeapon_obj,onPreFireCallback),HX_CSTRING("onPreFireCallback")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxWeapon_obj,onFireCallback),HX_CSTRING("onFireCallback")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxWeapon_obj,onPostFireCallback),HX_CSTRING("onPostFireCallback")},
	{hx::fsObject /*::flixel::system::FlxSound*/ ,(int)offsetof(FlxWeapon_obj,onPreFireSound),HX_CSTRING("onPreFireSound")},
	{hx::fsObject /*::flixel::system::FlxSound*/ ,(int)offsetof(FlxWeapon_obj,onFireSound),HX_CSTRING("onFireSound")},
	{hx::fsObject /*::flixel::system::FlxSound*/ ,(int)offsetof(FlxWeapon_obj,onPostFireSound),HX_CSTRING("onPostFireSound")},
	{hx::fsBool,(int)offsetof(FlxWeapon_obj,_rotateToAngle),HX_CSTRING("_rotateToAngle")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxWeapon_obj,_velocity),HX_CSTRING("_velocity")},
	{hx::fsBool,(int)offsetof(FlxWeapon_obj,_fireFromPosition),HX_CSTRING("_fireFromPosition")},
	{hx::fsInt,(int)offsetof(FlxWeapon_obj,_fireX),HX_CSTRING("_fireX")},
	{hx::fsInt,(int)offsetof(FlxWeapon_obj,_fireY),HX_CSTRING("_fireY")},
	{hx::fsInt,(int)offsetof(FlxWeapon_obj,_lastFired),HX_CSTRING("_lastFired")},
	{hx::fsObject /*::flixel::input::touch::FlxTouch*/ ,(int)offsetof(FlxWeapon_obj,_touchTarget),HX_CSTRING("_touchTarget")},
	{hx::fsBool,(int)offsetof(FlxWeapon_obj,_fireFromParent),HX_CSTRING("_fireFromParent")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxWeapon_obj,_positionOffset),HX_CSTRING("_positionOffset")},
	{hx::fsBool,(int)offsetof(FlxWeapon_obj,_directionFromParent),HX_CSTRING("_directionFromParent")},
	{hx::fsBool,(int)offsetof(FlxWeapon_obj,_angleFromParent),HX_CSTRING("_angleFromParent")},
	{hx::fsInt,(int)offsetof(FlxWeapon_obj,_bulletsFired),HX_CSTRING("_bulletsFired")},
	{hx::fsInt,(int)offsetof(FlxWeapon_obj,_currentMagazine),HX_CSTRING("_currentMagazine")},
	{hx::fsInt,(int)offsetof(FlxWeapon_obj,_magazineCount),HX_CSTRING("_magazineCount")},
	{hx::fsInt,(int)offsetof(FlxWeapon_obj,_bulletsPerMagazine),HX_CSTRING("_bulletsPerMagazine")},
	{hx::fsInt,(int)offsetof(FlxWeapon_obj,_magazineSwapDelay),HX_CSTRING("_magazineSwapDelay")},
	{hx::fsBool,(int)offsetof(FlxWeapon_obj,_skipParentCollision),HX_CSTRING("_skipParentCollision")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxWeapon_obj,_magazineSwapCallback),HX_CSTRING("_magazineSwapCallback")},
	{hx::fsObject /*::flixel::system::FlxSound*/ ,(int)offsetof(FlxWeapon_obj,_magazineSwapSound),HX_CSTRING("_magazineSwapSound")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("name"),
	HX_CSTRING("group"),
	HX_CSTRING("bulletType"),
	HX_CSTRING("bulletID"),
	HX_CSTRING("nextFire"),
	HX_CSTRING("fireRate"),
	HX_CSTRING("bulletSpeed"),
	HX_CSTRING("bounds"),
	HX_CSTRING("parent"),
	HX_CSTRING("multiShot"),
	HX_CSTRING("bulletLifeSpan"),
	HX_CSTRING("bulletDamage"),
	HX_CSTRING("bulletElasticity"),
	HX_CSTRING("rndFactorAngle"),
	HX_CSTRING("rndFactorSpeed"),
	HX_CSTRING("rndFactorLifeSpan"),
	HX_CSTRING("rndFactorPosition"),
	HX_CSTRING("currentBullet"),
	HX_CSTRING("onPreFireCallback"),
	HX_CSTRING("onFireCallback"),
	HX_CSTRING("onPostFireCallback"),
	HX_CSTRING("onPreFireSound"),
	HX_CSTRING("onFireSound"),
	HX_CSTRING("onPostFireSound"),
	HX_CSTRING("_rotateToAngle"),
	HX_CSTRING("_velocity"),
	HX_CSTRING("_fireFromPosition"),
	HX_CSTRING("_fireX"),
	HX_CSTRING("_fireY"),
	HX_CSTRING("_lastFired"),
	HX_CSTRING("_touchTarget"),
	HX_CSTRING("_fireFromParent"),
	HX_CSTRING("_positionOffset"),
	HX_CSTRING("_directionFromParent"),
	HX_CSTRING("_angleFromParent"),
	HX_CSTRING("_bulletsFired"),
	HX_CSTRING("_currentMagazine"),
	HX_CSTRING("_magazineCount"),
	HX_CSTRING("_bulletsPerMagazine"),
	HX_CSTRING("_magazineSwapDelay"),
	HX_CSTRING("_skipParentCollision"),
	HX_CSTRING("_magazineSwapCallback"),
	HX_CSTRING("_magazineSwapSound"),
	HX_CSTRING("makePixelBullet"),
	HX_CSTRING("makeImageBullet"),
	HX_CSTRING("makeAnimatedBullet"),
	HX_CSTRING("runFire"),
	HX_CSTRING("fire"),
	HX_CSTRING("fireAtMouse"),
	HX_CSTRING("fireAtTouch"),
	HX_CSTRING("fireAtPosition"),
	HX_CSTRING("fireAtTarget"),
	HX_CSTRING("fireFromAngle"),
	HX_CSTRING("fireFromParentAngle"),
	HX_CSTRING("setParent"),
	HX_CSTRING("setFiringPosition"),
	HX_CSTRING("setBulletSpeed"),
	HX_CSTRING("getBulletSpeed"),
	HX_CSTRING("setFireRate"),
	HX_CSTRING("setBulletBounds"),
	HX_CSTRING("setBulletDirection"),
	HX_CSTRING("setBulletGravity"),
	HX_CSTRING("setBulletAcceleration"),
	HX_CSTRING("setBulletOffset"),
	HX_CSTRING("setBulletRandomFactor"),
	HX_CSTRING("setBulletLifeSpan"),
	HX_CSTRING("setBulletElasticity"),
	HX_CSTRING("getFreeBullet"),
	HX_CSTRING("setPreFireCallback"),
	HX_CSTRING("setFireCallback"),
	HX_CSTRING("setPostFireCallback"),
	HX_CSTRING("bulletsOverlap"),
	HX_CSTRING("shouldBulletHit"),
	HX_CSTRING("onBulletHit"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxWeapon_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxWeapon_obj::BULLET_UP,"BULLET_UP");
	HX_MARK_MEMBER_NAME(FlxWeapon_obj::BULLET_DOWN,"BULLET_DOWN");
	HX_MARK_MEMBER_NAME(FlxWeapon_obj::BULLET_LEFT,"BULLET_LEFT");
	HX_MARK_MEMBER_NAME(FlxWeapon_obj::BULLET_RIGHT,"BULLET_RIGHT");
	HX_MARK_MEMBER_NAME(FlxWeapon_obj::BULLET_NORTH_EAST,"BULLET_NORTH_EAST");
	HX_MARK_MEMBER_NAME(FlxWeapon_obj::BULLET_NORTH_WEST,"BULLET_NORTH_WEST");
	HX_MARK_MEMBER_NAME(FlxWeapon_obj::BULLET_SOUTH_EAST,"BULLET_SOUTH_EAST");
	HX_MARK_MEMBER_NAME(FlxWeapon_obj::BULLET_SOUTH_WEST,"BULLET_SOUTH_WEST");
	HX_MARK_MEMBER_NAME(FlxWeapon_obj::FIRE,"FIRE");
	HX_MARK_MEMBER_NAME(FlxWeapon_obj::FIRE_AT_MOUSE,"FIRE_AT_MOUSE");
	HX_MARK_MEMBER_NAME(FlxWeapon_obj::FIRE_AT_POSITION,"FIRE_AT_POSITION");
	HX_MARK_MEMBER_NAME(FlxWeapon_obj::FIRE_AT_TARGET,"FIRE_AT_TARGET");
	HX_MARK_MEMBER_NAME(FlxWeapon_obj::FIRE_FROM_ANGLE,"FIRE_FROM_ANGLE");
	HX_MARK_MEMBER_NAME(FlxWeapon_obj::FIRE_FROM_PARENT_ANGLE,"FIRE_FROM_PARENT_ANGLE");
	HX_MARK_MEMBER_NAME(FlxWeapon_obj::FIRE_AT_TOUCH,"FIRE_AT_TOUCH");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxWeapon_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxWeapon_obj::BULLET_UP,"BULLET_UP");
	HX_VISIT_MEMBER_NAME(FlxWeapon_obj::BULLET_DOWN,"BULLET_DOWN");
	HX_VISIT_MEMBER_NAME(FlxWeapon_obj::BULLET_LEFT,"BULLET_LEFT");
	HX_VISIT_MEMBER_NAME(FlxWeapon_obj::BULLET_RIGHT,"BULLET_RIGHT");
	HX_VISIT_MEMBER_NAME(FlxWeapon_obj::BULLET_NORTH_EAST,"BULLET_NORTH_EAST");
	HX_VISIT_MEMBER_NAME(FlxWeapon_obj::BULLET_NORTH_WEST,"BULLET_NORTH_WEST");
	HX_VISIT_MEMBER_NAME(FlxWeapon_obj::BULLET_SOUTH_EAST,"BULLET_SOUTH_EAST");
	HX_VISIT_MEMBER_NAME(FlxWeapon_obj::BULLET_SOUTH_WEST,"BULLET_SOUTH_WEST");
	HX_VISIT_MEMBER_NAME(FlxWeapon_obj::FIRE,"FIRE");
	HX_VISIT_MEMBER_NAME(FlxWeapon_obj::FIRE_AT_MOUSE,"FIRE_AT_MOUSE");
	HX_VISIT_MEMBER_NAME(FlxWeapon_obj::FIRE_AT_POSITION,"FIRE_AT_POSITION");
	HX_VISIT_MEMBER_NAME(FlxWeapon_obj::FIRE_AT_TARGET,"FIRE_AT_TARGET");
	HX_VISIT_MEMBER_NAME(FlxWeapon_obj::FIRE_FROM_ANGLE,"FIRE_FROM_ANGLE");
	HX_VISIT_MEMBER_NAME(FlxWeapon_obj::FIRE_FROM_PARENT_ANGLE,"FIRE_FROM_PARENT_ANGLE");
	HX_VISIT_MEMBER_NAME(FlxWeapon_obj::FIRE_AT_TOUCH,"FIRE_AT_TOUCH");
};

#endif

Class FlxWeapon_obj::__mClass;

void FlxWeapon_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.addons.weapon.FlxWeapon"), hx::TCanCast< FlxWeapon_obj> ,sStaticFields,sMemberFields,
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

void FlxWeapon_obj::__boot()
{
	BULLET_UP= (int)-90;
	BULLET_DOWN= (int)90;
	BULLET_LEFT= (int)180;
	BULLET_RIGHT= (int)0;
	BULLET_NORTH_EAST= (int)-45;
	BULLET_NORTH_WEST= (int)-135;
	BULLET_SOUTH_EAST= (int)45;
	BULLET_SOUTH_WEST= (int)135;
	FIRE= (int)0;
	FIRE_AT_MOUSE= (int)1;
	FIRE_AT_POSITION= (int)2;
	FIRE_AT_TARGET= (int)3;
	FIRE_FROM_ANGLE= (int)4;
	FIRE_FROM_PARENT_ANGLE= (int)5;
	FIRE_AT_TOUCH= (int)6;
}

} // end namespace flixel
} // end namespace addons
} // end namespace weapon
