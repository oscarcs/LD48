#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flixel_addons_display_FlxMouseSpring
#include <flixel/addons/display/FlxMouseSpring.h>
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
#ifndef INCLUDED_flixel_system_frontEnds_PluginFrontEnd
#include <flixel/system/frontEnds/PluginFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxCollision
#include <flixel/util/FlxCollision.h>
#endif
#ifndef INCLUDED_flixel_util_FlxMath
#include <flixel/util/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_FlxRect
#include <flixel/util/FlxPool_flixel_util_FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRect
#include <flixel/util/FlxRect.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace flixel{
namespace addons{
namespace display{

Void FlxExtendedSprite_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Dynamic SimpleGraphic)
{
HX_STACK_FRAME("flixel.addons.display.FlxExtendedSprite","new",0x1ee235ed,"flixel.addons.display.FlxExtendedSprite.new","flixel/addons/display/FlxExtendedSprite.hx",17,0xe2826ec4)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(SimpleGraphic,"SimpleGraphic")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
{
	HX_STACK_LINE(177)
	this->_allowVerticalDrag = true;
	HX_STACK_LINE(176)
	this->_allowHorizontalDrag = true;
	HX_STACK_LINE(165)
	this->_clickCounter = (int)0;
	HX_STACK_LINE(163)
	this->_clickPixelPerfect = false;
	HX_STACK_LINE(162)
	this->_clickOnRelease = false;
	HX_STACK_LINE(158)
	this->_snapOnRelease = false;
	HX_STACK_LINE(157)
	this->_snapOnDrag = false;
	HX_STACK_LINE(116)
	this->hasMouseSpring = false;
	HX_STACK_LINE(82)
	this->springOnPressed = true;
	HX_STACK_LINE(78)
	this->draggable = false;
	HX_STACK_LINE(74)
	this->isDragged = false;
	HX_STACK_LINE(46)
	this->hasGravity = false;
	HX_STACK_LINE(34)
	this->throwable = false;
	HX_STACK_LINE(30)
	this->clickable = false;
	HX_STACK_LINE(26)
	this->isPressed = false;
	HX_STACK_LINE(189)
	::flixel::util::FlxRect _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(189)
	{
		HX_STACK_LINE(189)
		Float X1 = (int)0;		HX_STACK_VAR(X1,"X1");
		HX_STACK_LINE(189)
		Float Y1 = (int)0;		HX_STACK_VAR(Y1,"Y1");
		HX_STACK_LINE(189)
		Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
		HX_STACK_LINE(189)
		Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
		HX_STACK_LINE(189)
		::flixel::util::FlxRect rect;		HX_STACK_VAR(rect,"rect");
		HX_STACK_LINE(189)
		{
			HX_STACK_LINE(189)
			::flixel::util::FlxRect _this = ::flixel::util::FlxRect_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(189)
			_this->x = X1;
			HX_STACK_LINE(189)
			_this->y = Y1;
			HX_STACK_LINE(189)
			_this->width = Width;
			HX_STACK_LINE(189)
			_this->height = Height;
			HX_STACK_LINE(189)
			rect = _this;
		}
		HX_STACK_LINE(189)
		rect->_inPool = false;
		HX_STACK_LINE(189)
		_g = rect;
	}
	HX_STACK_LINE(189)
	this->_rect = _g;
	HX_STACK_LINE(191)
	super::__construct(X,Y,SimpleGraphic);
}
;
	return null();
}

//FlxExtendedSprite_obj::~FlxExtendedSprite_obj() { }

Dynamic FlxExtendedSprite_obj::__CreateEmpty() { return  new FlxExtendedSprite_obj; }
hx::ObjectPtr< FlxExtendedSprite_obj > FlxExtendedSprite_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Dynamic SimpleGraphic)
{  hx::ObjectPtr< FlxExtendedSprite_obj > result = new FlxExtendedSprite_obj();
	result->__construct(__o_X,__o_Y,SimpleGraphic);
	return result;}

Dynamic FlxExtendedSprite_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxExtendedSprite_obj > result = new FlxExtendedSprite_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void FlxExtendedSprite_obj::enableMouseClicks( bool OnRelease,hx::Null< bool >  __o_PixelPerfect,hx::Null< int >  __o_AlphaThreshold){
bool PixelPerfect = __o_PixelPerfect.Default(false);
int AlphaThreshold = __o_AlphaThreshold.Default(255);
	HX_STACK_FRAME("flixel.addons.display.FlxExtendedSprite","enableMouseClicks",0x0c055bba,"flixel.addons.display.FlxExtendedSprite.enableMouseClicks","flixel/addons/display/FlxExtendedSprite.hx",204,0xe2826ec4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(OnRelease,"OnRelease")
	HX_STACK_ARG(PixelPerfect,"PixelPerfect")
	HX_STACK_ARG(AlphaThreshold,"AlphaThreshold")
{
		HX_STACK_LINE(205)
		::flixel::plugin::FlxPlugin _g = ::flixel::FlxG_obj::plugins->get(hx::ClassOf< ::flixel::addons::plugin::FlxMouseControl >());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(205)
		if (((_g == null()))){
			HX_STACK_LINE(207)
			HX_STACK_DO_THROW(HX_CSTRING("FlxExtendedSprite.enableMouseClicks called but FlxMouseControl plugin not activated"));
		}
		HX_STACK_LINE(210)
		this->clickable = true;
		HX_STACK_LINE(212)
		this->_clickOnRelease = OnRelease;
		HX_STACK_LINE(213)
		this->_clickPixelPerfect = PixelPerfect;
		HX_STACK_LINE(214)
		this->_clickPixelPerfectAlpha = AlphaThreshold;
		HX_STACK_LINE(215)
		this->_clickCounter = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxExtendedSprite_obj,enableMouseClicks,(void))

Void FlxExtendedSprite_obj::disableMouseClicks( ){
{
		HX_STACK_FRAME("flixel.addons.display.FlxExtendedSprite","disableMouseClicks",0xc2147f3b,"flixel.addons.display.FlxExtendedSprite.disableMouseClicks","flixel/addons/display/FlxExtendedSprite.hx",222,0xe2826ec4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(223)
		this->clickable = false;
		HX_STACK_LINE(224)
		this->mousePressedCallback = null();
		HX_STACK_LINE(225)
		this->mouseReleasedCallback = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxExtendedSprite_obj,disableMouseClicks,(void))

Void FlxExtendedSprite_obj::enableMouseDrag( hx::Null< bool >  __o_LockCenter,hx::Null< bool >  __o_PixelPerfect,hx::Null< int >  __o_AlphaThreshold,::flixel::util::FlxRect BoundsRect,::flixel::FlxSprite BoundsSprite){
bool LockCenter = __o_LockCenter.Default(false);
bool PixelPerfect = __o_PixelPerfect.Default(false);
int AlphaThreshold = __o_AlphaThreshold.Default(255);
	HX_STACK_FRAME("flixel.addons.display.FlxExtendedSprite","enableMouseDrag",0xeadcb2c3,"flixel.addons.display.FlxExtendedSprite.enableMouseDrag","flixel/addons/display/FlxExtendedSprite.hx",238,0xe2826ec4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(LockCenter,"LockCenter")
	HX_STACK_ARG(PixelPerfect,"PixelPerfect")
	HX_STACK_ARG(AlphaThreshold,"AlphaThreshold")
	HX_STACK_ARG(BoundsRect,"BoundsRect")
	HX_STACK_ARG(BoundsSprite,"BoundsSprite")
{
		HX_STACK_LINE(239)
		::flixel::plugin::FlxPlugin _g = ::flixel::FlxG_obj::plugins->get(hx::ClassOf< ::flixel::addons::plugin::FlxMouseControl >());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(239)
		if (((_g == null()))){
			HX_STACK_LINE(241)
			HX_STACK_DO_THROW(HX_CSTRING("FlxExtendedSprite.enableMouseDrag called but FlxMouseControl plugin not activated"));
		}
		HX_STACK_LINE(244)
		this->draggable = true;
		HX_STACK_LINE(246)
		this->_dragFromPoint = LockCenter;
		HX_STACK_LINE(247)
		this->_dragPixelPerfect = PixelPerfect;
		HX_STACK_LINE(248)
		this->_dragPixelPerfectAlpha = AlphaThreshold;
		HX_STACK_LINE(250)
		if (((BoundsRect != null()))){
			HX_STACK_LINE(252)
			this->boundsRect = BoundsRect;
		}
		HX_STACK_LINE(255)
		if (((BoundsSprite != null()))){
			HX_STACK_LINE(257)
			this->boundsSprite = BoundsSprite;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(FlxExtendedSprite_obj,enableMouseDrag,(void))

Void FlxExtendedSprite_obj::disableMouseDrag( ){
{
		HX_STACK_FRAME("flixel.addons.display.FlxExtendedSprite","disableMouseDrag",0xbef44404,"flixel.addons.display.FlxExtendedSprite.disableMouseDrag","flixel/addons/display/FlxExtendedSprite.hx",266,0xe2826ec4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(267)
		if ((this->isDragged)){
			HX_STACK_LINE(269)
			::flixel::addons::plugin::FlxMouseControl_obj::dragTarget = null();
			HX_STACK_LINE(270)
			::flixel::addons::plugin::FlxMouseControl_obj::isDragging = false;
		}
		HX_STACK_LINE(273)
		this->isDragged = false;
		HX_STACK_LINE(274)
		this->draggable = false;
		HX_STACK_LINE(276)
		this->mouseStartDragCallback = null();
		HX_STACK_LINE(277)
		this->mouseStopDragCallback = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxExtendedSprite_obj,disableMouseDrag,(void))

Void FlxExtendedSprite_obj::enableMouseThrow( int FactorX,int FactorY){
{
		HX_STACK_FRAME("flixel.addons.display.FlxExtendedSprite","enableMouseThrow",0xc619cb77,"flixel.addons.display.FlxExtendedSprite.enableMouseThrow","flixel/addons/display/FlxExtendedSprite.hx",287,0xe2826ec4)
		HX_STACK_THIS(this)
		HX_STACK_ARG(FactorX,"FactorX")
		HX_STACK_ARG(FactorY,"FactorY")
		HX_STACK_LINE(288)
		::flixel::plugin::FlxPlugin _g = ::flixel::FlxG_obj::plugins->get(hx::ClassOf< ::flixel::addons::plugin::FlxMouseControl >());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(288)
		if (((_g == null()))){
			HX_STACK_LINE(290)
			HX_STACK_DO_THROW(HX_CSTRING("FlxExtendedSprite.enableMouseThrow called but FlxMouseControl plugin not activated"));
		}
		HX_STACK_LINE(293)
		this->throwable = true;
		HX_STACK_LINE(294)
		this->_throwXFactor = FactorX;
		HX_STACK_LINE(295)
		this->_throwYFactor = FactorY;
		HX_STACK_LINE(297)
		if (((bool((this->clickable == false)) && bool((this->draggable == false))))){
			HX_STACK_LINE(299)
			this->clickable = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxExtendedSprite_obj,enableMouseThrow,(void))

Void FlxExtendedSprite_obj::disableMouseThrow( ){
{
		HX_STACK_FRAME("flixel.addons.display.FlxExtendedSprite","disableMouseThrow",0x86a15316,"flixel.addons.display.FlxExtendedSprite.disableMouseThrow","flixel/addons/display/FlxExtendedSprite.hx",308,0xe2826ec4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(308)
		this->throwable = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxExtendedSprite_obj,disableMouseThrow,(void))

Void FlxExtendedSprite_obj::enableMouseSnap( int SnapX,int SnapY,hx::Null< bool >  __o_OnDrag,hx::Null< bool >  __o_OnRelease){
bool OnDrag = __o_OnDrag.Default(true);
bool OnRelease = __o_OnRelease.Default(false);
	HX_STACK_FRAME("flixel.addons.display.FlxExtendedSprite","enableMouseSnap",0xf4c3dd19,"flixel.addons.display.FlxExtendedSprite.enableMouseSnap","flixel/addons/display/FlxExtendedSprite.hx",321,0xe2826ec4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(SnapX,"SnapX")
	HX_STACK_ARG(SnapY,"SnapY")
	HX_STACK_ARG(OnDrag,"OnDrag")
	HX_STACK_ARG(OnRelease,"OnRelease")
{
		HX_STACK_LINE(322)
		this->_snapOnDrag = OnDrag;
		HX_STACK_LINE(323)
		this->_snapOnRelease = OnRelease;
		HX_STACK_LINE(324)
		this->_snapX = SnapX;
		HX_STACK_LINE(325)
		this->_snapY = SnapY;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxExtendedSprite_obj,enableMouseSnap,(void))

Void FlxExtendedSprite_obj::disableMouseSnap( ){
{
		HX_STACK_FRAME("flixel.addons.display.FlxExtendedSprite","disableMouseSnap",0xc8db6e5a,"flixel.addons.display.FlxExtendedSprite.disableMouseSnap","flixel/addons/display/FlxExtendedSprite.hx",332,0xe2826ec4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(333)
		this->_snapOnDrag = false;
		HX_STACK_LINE(334)
		this->_snapOnRelease = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxExtendedSprite_obj,disableMouseSnap,(void))

::flixel::addons::display::FlxMouseSpring FlxExtendedSprite_obj::enableMouseSpring( hx::Null< bool >  __o_OnPressed,hx::Null< bool >  __o_RetainVelocity,hx::Null< Float >  __o_Tension,hx::Null< Float >  __o_Friction,hx::Null< Float >  __o_Gravity){
bool OnPressed = __o_OnPressed.Default(true);
bool RetainVelocity = __o_RetainVelocity.Default(false);
Float Tension = __o_Tension.Default(0.1);
Float Friction = __o_Friction.Default(0.95);
Float Gravity = __o_Gravity.Default(0);
	HX_STACK_FRAME("flixel.addons.display.FlxExtendedSprite","enableMouseSpring",0xc54cef5c,"flixel.addons.display.FlxExtendedSprite.enableMouseSpring","flixel/addons/display/FlxExtendedSprite.hx",349,0xe2826ec4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(OnPressed,"OnPressed")
	HX_STACK_ARG(RetainVelocity,"RetainVelocity")
	HX_STACK_ARG(Tension,"Tension")
	HX_STACK_ARG(Friction,"Friction")
	HX_STACK_ARG(Gravity,"Gravity")
{
		HX_STACK_LINE(350)
		::flixel::plugin::FlxPlugin _g = ::flixel::FlxG_obj::plugins->get(hx::ClassOf< ::flixel::addons::plugin::FlxMouseControl >());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(350)
		if (((_g == null()))){
			HX_STACK_LINE(352)
			HX_STACK_DO_THROW(HX_CSTRING("FlxExtendedSprite.enableMouseSpring called but FlxMouseControl plugin not activated"));
		}
		HX_STACK_LINE(355)
		this->hasMouseSpring = true;
		HX_STACK_LINE(356)
		this->springOnPressed = OnPressed;
		HX_STACK_LINE(358)
		if (((this->mouseSpring == null()))){
			HX_STACK_LINE(360)
			::flixel::addons::display::FlxMouseSpring _g1 = ::flixel::addons::display::FlxMouseSpring_obj::__new(hx::ObjectPtr<OBJ_>(this),RetainVelocity,Tension,Friction,Gravity);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(360)
			this->mouseSpring = _g1;
		}
		else{
			HX_STACK_LINE(364)
			this->mouseSpring->tension = Tension;
			HX_STACK_LINE(365)
			this->mouseSpring->friction = Friction;
			HX_STACK_LINE(366)
			this->mouseSpring->gravity = Gravity;
		}
		HX_STACK_LINE(369)
		if (((bool((this->clickable == false)) && bool((this->draggable == false))))){
			HX_STACK_LINE(371)
			this->clickable = true;
		}
		HX_STACK_LINE(374)
		return this->mouseSpring;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxExtendedSprite_obj,enableMouseSpring,return )

Void FlxExtendedSprite_obj::disableMouseSpring( ){
{
		HX_STACK_FRAME("flixel.addons.display.FlxExtendedSprite","disableMouseSpring",0x7b5c12dd,"flixel.addons.display.FlxExtendedSprite.disableMouseSpring","flixel/addons/display/FlxExtendedSprite.hx",381,0xe2826ec4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(382)
		this->hasMouseSpring = false;
		HX_STACK_LINE(383)
		this->mouseSpring = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxExtendedSprite_obj,disableMouseSpring,(void))

Void FlxExtendedSprite_obj::setDragLock( hx::Null< bool >  __o_AllowHorizontalDrag,hx::Null< bool >  __o_AllowVerticalDrag){
bool AllowHorizontalDrag = __o_AllowHorizontalDrag.Default(true);
bool AllowVerticalDrag = __o_AllowVerticalDrag.Default(true);
	HX_STACK_FRAME("flixel.addons.display.FlxExtendedSprite","setDragLock",0x200b024e,"flixel.addons.display.FlxExtendedSprite.setDragLock","flixel/addons/display/FlxExtendedSprite.hx",394,0xe2826ec4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(AllowHorizontalDrag,"AllowHorizontalDrag")
	HX_STACK_ARG(AllowVerticalDrag,"AllowVerticalDrag")
{
		HX_STACK_LINE(395)
		this->_allowHorizontalDrag = AllowHorizontalDrag;
		HX_STACK_LINE(396)
		this->_allowVerticalDrag = AllowVerticalDrag;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxExtendedSprite_obj,setDragLock,(void))

Void FlxExtendedSprite_obj::update( ){
{
		HX_STACK_FRAME("flixel.addons.display.FlxExtendedSprite","update",0x94f7569c,"flixel.addons.display.FlxExtendedSprite.update","flixel/addons/display/FlxExtendedSprite.hx",403,0xe2826ec4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(405)
		if (((bool((this->draggable == true)) && bool((this->isDragged == true))))){
			HX_STACK_LINE(407)
			this->updateDrag();
		}
		struct _Function_1_1{
			inline static bool Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/display/FlxExtendedSprite.hx",410,0xe2826ec4)
				{
					HX_STACK_LINE(410)
					::flixel::input::mouse::FlxMouseButton _this = ::flixel::FlxG_obj::mouse->_leftButton;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(410)
					return (bool((_this->current == (int)2)) || bool((_this->current == (int)-2)));
				}
				return null();
			}
		};
		HX_STACK_LINE(410)
		if (((bool((this->isPressed == false)) && bool(_Function_1_1::Block())))){
			HX_STACK_LINE(412)
			this->checkForClick();
		}
		HX_STACK_LINE(415)
		if (((this->hasGravity == true))){
			HX_STACK_LINE(417)
			this->updateGravity();
		}
		HX_STACK_LINE(420)
		if (((this->hasMouseSpring == true))){
			HX_STACK_LINE(422)
			if (((this->springOnPressed == false))){
				HX_STACK_LINE(424)
				this->mouseSpring->update();
			}
			else{
				HX_STACK_LINE(428)
				if (((this->isPressed == true))){
					HX_STACK_LINE(430)
					this->mouseSpring->update();
				}
				else{
					HX_STACK_LINE(434)
					this->mouseSpring->reset();
				}
			}
		}
		HX_STACK_LINE(440)
		this->super::update();
	}
return null();
}


Void FlxExtendedSprite_obj::updateGravity( ){
{
		HX_STACK_FRAME("flixel.addons.display.FlxExtendedSprite","updateGravity",0x1a4d8b12,"flixel.addons.display.FlxExtendedSprite.updateGravity","flixel/addons/display/FlxExtendedSprite.hx",447,0xe2826ec4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(451)
		if (((this->velocity->x != (int)0))){
			HX_STACK_LINE(453)
			if (((this->acceleration->x < (int)0))){
				HX_STACK_LINE(456)
				if (((((int(this->touching) & int((int)17))) != (int)0))){
					HX_STACK_LINE(458)
					this->drag->set_y(this->frictionY);
					HX_STACK_LINE(460)
					if (((((int(this->wasTouching) & int((int)17))) == (int)0))){
						HX_STACK_LINE(462)
						if (((this->velocity->x < this->toleranceX))){
							HX_STACK_LINE(464)
							this->velocity->set_x((int)0);
						}
					}
				}
				else{
					HX_STACK_LINE(470)
					this->drag->set_y((int)0);
				}
			}
			else{
				HX_STACK_LINE(473)
				if (((this->acceleration->x > (int)0))){
					HX_STACK_LINE(476)
					if (((((int(this->touching) & int((int)17))) != (int)0))){
						HX_STACK_LINE(479)
						this->drag->set_y(this->frictionY);
						HX_STACK_LINE(481)
						if (((((int(this->wasTouching) & int((int)17))) == (int)0))){
							HX_STACK_LINE(483)
							if (((this->velocity->x > -(this->toleranceX)))){
								HX_STACK_LINE(485)
								this->velocity->set_x((int)0);
							}
						}
					}
					else{
						HX_STACK_LINE(491)
						this->drag->set_y((int)0);
					}
				}
			}
		}
		HX_STACK_LINE(497)
		if (((this->velocity->y != (int)0))){
			HX_STACK_LINE(499)
			if (((this->acceleration->y < (int)0))){
				HX_STACK_LINE(502)
				if (((((int(this->touching) & int((int)256))) != (int)0))){
					HX_STACK_LINE(504)
					this->drag->set_x(this->frictionX);
					HX_STACK_LINE(506)
					if (((((int(this->wasTouching) & int((int)256))) == (int)0))){
						HX_STACK_LINE(508)
						if (((this->velocity->y < this->toleranceY))){
							HX_STACK_LINE(510)
							this->velocity->set_y((int)0);
						}
					}
				}
				else{
					HX_STACK_LINE(516)
					this->drag->set_x((int)0);
				}
			}
			else{
				HX_STACK_LINE(519)
				if (((this->acceleration->y > (int)0))){
					HX_STACK_LINE(522)
					if (((((int(this->touching) & int((int)4096))) != (int)0))){
						HX_STACK_LINE(525)
						this->drag->set_x(this->frictionX);
						HX_STACK_LINE(527)
						if (((((int(this->wasTouching) & int((int)4096))) == (int)0))){
							HX_STACK_LINE(529)
							if (((this->velocity->y > -(this->toleranceY)))){
								HX_STACK_LINE(531)
								this->velocity->set_y((int)0);
							}
						}
					}
					else{
						HX_STACK_LINE(537)
						this->drag->set_x((int)0);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxExtendedSprite_obj,updateGravity,(void))

Void FlxExtendedSprite_obj::updateDrag( ){
{
		HX_STACK_FRAME("flixel.addons.display.FlxExtendedSprite","updateDrag",0x52262cb0,"flixel.addons.display.FlxExtendedSprite.updateDrag","flixel/addons/display/FlxExtendedSprite.hx",547,0xe2826ec4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(549)
		if (((this->_allowHorizontalDrag == true))){
			HX_STACK_LINE(552)
			int _g = ::Math_obj::floor((::flixel::FlxG_obj::mouse->screenX + (this->scrollFactor->x * ((::flixel::FlxG_obj::mouse->x - ::flixel::FlxG_obj::mouse->screenX)))));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(552)
			int _g1 = (_g - this->_dragOffsetX);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(552)
			this->set_x(_g1);
		}
		HX_STACK_LINE(556)
		if (((this->_allowVerticalDrag == true))){
			HX_STACK_LINE(559)
			int _g2 = ::Math_obj::floor((::flixel::FlxG_obj::mouse->screenY + (this->scrollFactor->y * ((::flixel::FlxG_obj::mouse->y - ::flixel::FlxG_obj::mouse->screenY)))));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(559)
			int _g3 = (_g2 - this->_dragOffsetY);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(559)
			this->set_y(_g3);
		}
		HX_STACK_LINE(563)
		if (((this->boundsRect != null()))){
			HX_STACK_LINE(565)
			this->checkBoundsRect();
		}
		HX_STACK_LINE(568)
		if (((this->boundsSprite != null()))){
			HX_STACK_LINE(570)
			this->checkBoundsSprite();
		}
		HX_STACK_LINE(573)
		if ((this->_snapOnDrag)){
			HX_STACK_LINE(575)
			int _g4 = ::Math_obj::floor((Float(this->x) / Float(this->_snapX)));		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(575)
			int _g5 = (_g4 * this->_snapX);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(575)
			this->set_x(_g5);
			HX_STACK_LINE(576)
			int _g6 = ::Math_obj::floor((Float(this->y) / Float(this->_snapY)));		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(576)
			int _g7 = (_g6 * this->_snapY);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(576)
			this->set_y(_g7);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxExtendedSprite_obj,updateDrag,(void))

Void FlxExtendedSprite_obj::checkForClick( ){
{
		HX_STACK_FRAME("flixel.addons.display.FlxExtendedSprite","checkForClick",0x015d1934,"flixel.addons.display.FlxExtendedSprite.checkForClick","flixel/addons/display/FlxExtendedSprite.hx",587,0xe2826ec4)
		HX_STACK_THIS(this)
		struct _Function_1_1{
			inline static bool Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/display/FlxExtendedSprite.hx",587,0xe2826ec4)
				{
					HX_STACK_LINE(587)
					::flixel::input::mouse::FlxMouseButton _this = ::flixel::FlxG_obj::mouse->_leftButton;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(587)
					return (bool((_this->current == (int)2)) || bool((_this->current == (int)-2)));
				}
				return null();
			}
		};
		HX_STACK_LINE(587)
		if (((  ((this->get_mouseOver())) ? bool(_Function_1_1::Block()) : bool(false) ))){
			HX_STACK_LINE(590)
			if (((bool((this->_clickPixelPerfect == false)) && bool((this->_dragPixelPerfect == false))))){
				HX_STACK_LINE(592)
				::flixel::addons::plugin::FlxMouseControl_obj::addToStack(hx::ObjectPtr<OBJ_>(this));
				HX_STACK_LINE(593)
				return null();
			}
			struct _Function_2_1{
				inline static bool Block( hx::ObjectPtr< ::flixel::addons::display::FlxExtendedSprite_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/display/FlxExtendedSprite.hx",596,0xe2826ec4)
					{
						HX_STACK_LINE(596)
						int _g = ::Math_obj::floor(::flixel::FlxG_obj::mouse->x);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(596)
						int _g1 = ::Math_obj::floor(::flixel::FlxG_obj::mouse->y);		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(596)
						return ::flixel::util::FlxCollision_obj::pixelPerfectPointCheck(_g,_g1,__this,__this->_clickPixelPerfectAlpha);
					}
					return null();
				}
			};
			HX_STACK_LINE(596)
			if (((  ((this->_clickPixelPerfect)) ? bool(_Function_2_1::Block(this)) : bool(false) ))){
				HX_STACK_LINE(598)
				::flixel::addons::plugin::FlxMouseControl_obj::addToStack(hx::ObjectPtr<OBJ_>(this));
				HX_STACK_LINE(599)
				return null();
			}
			struct _Function_2_2{
				inline static bool Block( hx::ObjectPtr< ::flixel::addons::display::FlxExtendedSprite_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/display/FlxExtendedSprite.hx",602,0xe2826ec4)
					{
						HX_STACK_LINE(602)
						int _g2 = ::Math_obj::floor(::flixel::FlxG_obj::mouse->x);		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(602)
						int _g3 = ::Math_obj::floor(::flixel::FlxG_obj::mouse->y);		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(602)
						return ::flixel::util::FlxCollision_obj::pixelPerfectPointCheck(_g2,_g3,__this,__this->_dragPixelPerfectAlpha);
					}
					return null();
				}
			};
			HX_STACK_LINE(602)
			if (((  ((this->_dragPixelPerfect)) ? bool(_Function_2_2::Block(this)) : bool(false) ))){
				HX_STACK_LINE(604)
				::flixel::addons::plugin::FlxMouseControl_obj::addToStack(hx::ObjectPtr<OBJ_>(this));
				HX_STACK_LINE(605)
				return null();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxExtendedSprite_obj,checkForClick,(void))

Void FlxExtendedSprite_obj::mousePressedHandler( ){
{
		HX_STACK_FRAME("flixel.addons.display.FlxExtendedSprite","mousePressedHandler",0xe7d0cdda,"flixel.addons.display.FlxExtendedSprite.mousePressedHandler","flixel/addons/display/FlxExtendedSprite.hx",616,0xe2826ec4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(617)
		this->isPressed = true;
		HX_STACK_LINE(619)
		if (((bool((this->clickable == true)) && bool((this->_clickOnRelease == false))))){
			HX_STACK_LINE(621)
			(this->_clickCounter)++;
		}
		HX_STACK_LINE(624)
		if (((this->mousePressedCallback_dyn() != null()))){
			HX_STACK_LINE(626)
			int _g = this->get_mouseX();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(626)
			int _g1 = this->get_mouseY();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(626)
			this->mousePressedCallback(hx::ObjectPtr<OBJ_>(this),_g,_g1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxExtendedSprite_obj,mousePressedHandler,(void))

Void FlxExtendedSprite_obj::mouseReleasedHandler( ){
{
		HX_STACK_FRAME("flixel.addons.display.FlxExtendedSprite","mouseReleasedHandler",0x893ebfbb,"flixel.addons.display.FlxExtendedSprite.mouseReleasedHandler","flixel/addons/display/FlxExtendedSprite.hx",634,0xe2826ec4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(635)
		this->isPressed = false;
		HX_STACK_LINE(637)
		if (((this->isDragged == true))){
			HX_STACK_LINE(639)
			this->stopDrag();
		}
		HX_STACK_LINE(642)
		if (((bool((this->clickable == true)) && bool((this->_clickOnRelease == true))))){
			HX_STACK_LINE(644)
			(this->_clickCounter)++;
		}
		HX_STACK_LINE(647)
		if (((this->throwable == true))){
			HX_STACK_LINE(649)
			this->velocity->set_x((::flixel::addons::plugin::FlxMouseControl_obj::speedX * this->_throwXFactor));
			HX_STACK_LINE(650)
			this->velocity->set_y((::flixel::addons::plugin::FlxMouseControl_obj::speedY * this->_throwYFactor));
		}
		HX_STACK_LINE(653)
		if (((this->mouseReleasedCallback_dyn() != null()))){
			HX_STACK_LINE(655)
			int _g = this->get_mouseX();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(655)
			int _g1 = this->get_mouseY();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(655)
			this->mouseReleasedCallback(hx::ObjectPtr<OBJ_>(this),_g,_g1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxExtendedSprite_obj,mouseReleasedHandler,(void))

Void FlxExtendedSprite_obj::startDrag( ){
{
		HX_STACK_FRAME("flixel.addons.display.FlxExtendedSprite","startDrag",0x579e32c3,"flixel.addons.display.FlxExtendedSprite.startDrag","flixel/addons/display/FlxExtendedSprite.hx",664,0xe2826ec4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(665)
		this->isDragged = true;
		HX_STACK_LINE(668)
		if (((this->_dragFromPoint == false))){
			HX_STACK_LINE(670)
			int _g = ::Math_obj::floor(((::flixel::FlxG_obj::mouse->screenX + (this->scrollFactor->x * ((::flixel::FlxG_obj::mouse->x - ::flixel::FlxG_obj::mouse->screenX)))) - this->x));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(670)
			this->_dragOffsetX = _g;
			HX_STACK_LINE(671)
			int _g1 = ::Math_obj::floor(((::flixel::FlxG_obj::mouse->screenY + (this->scrollFactor->y * ((::flixel::FlxG_obj::mouse->y - ::flixel::FlxG_obj::mouse->screenY)))) - this->y));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(671)
			this->_dragOffsetY = _g1;
		}
		else{
			HX_STACK_LINE(676)
			int _g2 = ::Std_obj::_int((Float(this->frameWidth) / Float((int)2)));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(676)
			this->_dragOffsetX = _g2;
			HX_STACK_LINE(677)
			int _g3 = ::Std_obj::_int((Float(this->frameHeight) / Float((int)2)));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(677)
			this->_dragOffsetY = _g3;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxExtendedSprite_obj,startDrag,(void))

Void FlxExtendedSprite_obj::checkBoundsRect( ){
{
		HX_STACK_FRAME("flixel.addons.display.FlxExtendedSprite","checkBoundsRect",0x102b4a2e,"flixel.addons.display.FlxExtendedSprite.checkBoundsRect","flixel/addons/display/FlxExtendedSprite.hx",686,0xe2826ec4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(687)
		if (((this->x < this->boundsRect->x))){
			HX_STACK_LINE(689)
			this->set_x(this->boundsRect->x);
		}
		else{
			HX_STACK_LINE(691)
			Float _g = this->get_width();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(691)
			Float _g1 = (this->x + _g);		HX_STACK_VAR(_g1,"_g1");
			struct _Function_2_1{
				inline static Float Block( hx::ObjectPtr< ::flixel::addons::display::FlxExtendedSprite_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/display/FlxExtendedSprite.hx",691,0xe2826ec4)
					{
						HX_STACK_LINE(691)
						::flixel::util::FlxRect _this = __this->boundsRect;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(691)
						return (_this->x + _this->width);
					}
					return null();
				}
			};
			HX_STACK_LINE(691)
			if (((_g1 > _Function_2_1::Block(this)))){
				HX_STACK_LINE(693)
				Float _g2 = this->get_width();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(693)
				Float _g3;		HX_STACK_VAR(_g3,"_g3");
				struct _Function_3_1{
					inline static Float Block( hx::ObjectPtr< ::flixel::addons::display::FlxExtendedSprite_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/display/FlxExtendedSprite.hx",693,0xe2826ec4)
						{
							HX_STACK_LINE(693)
							::flixel::util::FlxRect _this = __this->boundsRect;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(693)
							return (_this->x + _this->width);
						}
						return null();
					}
				};
				HX_STACK_LINE(693)
				_g3 = (_Function_3_1::Block(this) - _g2);
				HX_STACK_LINE(693)
				this->set_x(_g3);
			}
		}
		HX_STACK_LINE(696)
		if (((this->y < this->boundsRect->y))){
			HX_STACK_LINE(698)
			this->set_y(this->boundsRect->y);
		}
		else{
			HX_STACK_LINE(700)
			Float _g4 = this->get_height();		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(700)
			Float _g5 = (this->y + _g4);		HX_STACK_VAR(_g5,"_g5");
			struct _Function_2_1{
				inline static Float Block( hx::ObjectPtr< ::flixel::addons::display::FlxExtendedSprite_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/display/FlxExtendedSprite.hx",700,0xe2826ec4)
					{
						HX_STACK_LINE(700)
						::flixel::util::FlxRect _this = __this->boundsRect;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(700)
						return (_this->y + _this->height);
					}
					return null();
				}
			};
			HX_STACK_LINE(700)
			if (((_g5 > _Function_2_1::Block(this)))){
				HX_STACK_LINE(702)
				Float _g6 = this->get_height();		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(702)
				Float _g7;		HX_STACK_VAR(_g7,"_g7");
				struct _Function_3_1{
					inline static Float Block( hx::ObjectPtr< ::flixel::addons::display::FlxExtendedSprite_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/display/FlxExtendedSprite.hx",702,0xe2826ec4)
						{
							HX_STACK_LINE(702)
							::flixel::util::FlxRect _this = __this->boundsRect;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(702)
							return (_this->y + _this->height);
						}
						return null();
					}
				};
				HX_STACK_LINE(702)
				_g7 = (_Function_3_1::Block(this) - _g6);
				HX_STACK_LINE(702)
				this->set_y(_g7);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxExtendedSprite_obj,checkBoundsRect,(void))

Void FlxExtendedSprite_obj::checkBoundsSprite( ){
{
		HX_STACK_FRAME("flixel.addons.display.FlxExtendedSprite","checkBoundsSprite",0xaedaaf8f,"flixel.addons.display.FlxExtendedSprite.checkBoundsSprite","flixel/addons/display/FlxExtendedSprite.hx",710,0xe2826ec4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(711)
		if (((this->x < this->boundsSprite->x))){
			HX_STACK_LINE(713)
			this->set_x(this->boundsSprite->x);
		}
		else{
			HX_STACK_LINE(715)
			Float _g = this->get_width();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(715)
			Float _g1 = (this->x + _g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(715)
			Float _g2 = this->boundsSprite->get_width();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(715)
			Float _g3 = (this->boundsSprite->x + _g2);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(715)
			if (((_g1 > _g3))){
				HX_STACK_LINE(717)
				Float _g4 = this->boundsSprite->get_width();		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(717)
				Float _g5 = (this->boundsSprite->x + _g4);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(717)
				Float _g6 = this->get_width();		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(717)
				Float _g7 = (_g5 - _g6);		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(717)
				this->set_x(_g7);
			}
		}
		HX_STACK_LINE(720)
		if (((this->y < this->boundsSprite->y))){
			HX_STACK_LINE(722)
			this->set_y(this->boundsSprite->y);
		}
		else{
			HX_STACK_LINE(724)
			Float _g8 = this->get_height();		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(724)
			Float _g9 = (this->y + _g8);		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(724)
			Float _g10 = this->boundsSprite->get_height();		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(724)
			Float _g11 = (this->boundsSprite->y + _g10);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(724)
			if (((_g9 > _g11))){
				HX_STACK_LINE(726)
				Float _g12 = this->boundsSprite->get_height();		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(726)
				Float _g13 = (this->boundsSprite->y + _g12);		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(726)
				Float _g14 = this->get_height();		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(726)
				Float _g15 = (_g13 - _g14);		HX_STACK_VAR(_g15,"_g15");
				HX_STACK_LINE(726)
				this->set_y(_g15);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxExtendedSprite_obj,checkBoundsSprite,(void))

Void FlxExtendedSprite_obj::stopDrag( ){
{
		HX_STACK_FRAME("flixel.addons.display.FlxExtendedSprite","stopDrag",0x5f9fcc69,"flixel.addons.display.FlxExtendedSprite.stopDrag","flixel/addons/display/FlxExtendedSprite.hx",734,0xe2826ec4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(735)
		this->isDragged = false;
		HX_STACK_LINE(737)
		if ((this->_snapOnRelease)){
			HX_STACK_LINE(739)
			int _g = ::Math_obj::floor((Float(this->x) / Float(this->_snapX)));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(739)
			int _g1 = (_g * this->_snapX);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(739)
			this->set_x(_g1);
			HX_STACK_LINE(740)
			int _g2 = ::Math_obj::floor((Float(this->y) / Float(this->_snapY)));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(740)
			int _g3 = (_g2 * this->_snapY);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(740)
			this->set_y(_g3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxExtendedSprite_obj,stopDrag,(void))

Void FlxExtendedSprite_obj::setGravity( int GravityX,int GravityY,hx::Null< Float >  __o_FrictionX,hx::Null< Float >  __o_FrictionY,hx::Null< Float >  __o_ToleranceX,hx::Null< Float >  __o_ToleranceY){
Float FrictionX = __o_FrictionX.Default(500);
Float FrictionY = __o_FrictionY.Default(500);
Float ToleranceX = __o_ToleranceX.Default(10);
Float ToleranceY = __o_ToleranceY.Default(10);
	HX_STACK_FRAME("flixel.addons.display.FlxExtendedSprite","setGravity",0x21dfa8df,"flixel.addons.display.FlxExtendedSprite.setGravity","flixel/addons/display/FlxExtendedSprite.hx",756,0xe2826ec4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(GravityX,"GravityX")
	HX_STACK_ARG(GravityY,"GravityY")
	HX_STACK_ARG(FrictionX,"FrictionX")
	HX_STACK_ARG(FrictionY,"FrictionY")
	HX_STACK_ARG(ToleranceX,"ToleranceX")
	HX_STACK_ARG(ToleranceY,"ToleranceY")
{
		HX_STACK_LINE(757)
		this->hasGravity = true;
		HX_STACK_LINE(759)
		this->gravityX = GravityX;
		HX_STACK_LINE(760)
		this->gravityY = GravityY;
		HX_STACK_LINE(762)
		this->frictionX = FrictionX;
		HX_STACK_LINE(763)
		this->frictionY = FrictionY;
		HX_STACK_LINE(765)
		this->toleranceX = ToleranceX;
		HX_STACK_LINE(766)
		this->toleranceY = ToleranceY;
		HX_STACK_LINE(768)
		if (((bool((GravityX == (int)0)) && bool((GravityY == (int)0))))){
			HX_STACK_LINE(770)
			this->hasGravity = false;
		}
		HX_STACK_LINE(773)
		this->acceleration->set_x(GravityX);
		HX_STACK_LINE(774)
		this->acceleration->set_y(GravityY);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(FlxExtendedSprite_obj,setGravity,(void))

Void FlxExtendedSprite_obj::flipGravity( ){
{
		HX_STACK_FRAME("flixel.addons.display.FlxExtendedSprite","flipGravity",0x12621dae,"flixel.addons.display.FlxExtendedSprite.flipGravity","flixel/addons/display/FlxExtendedSprite.hx",782,0xe2826ec4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(783)
		if (((  ((!(::Math_obj::isNaN(this->gravityX)))) ? bool((this->gravityX != (int)0)) : bool(false) ))){
			HX_STACK_LINE(785)
			this->gravityX = -(this->gravityX);
			HX_STACK_LINE(786)
			this->acceleration->set_x(this->gravityX);
		}
		HX_STACK_LINE(789)
		if (((  ((!(::Math_obj::isNaN(this->gravityY)))) ? bool((this->gravityY != (int)0)) : bool(false) ))){
			HX_STACK_LINE(791)
			this->gravityY = -(this->gravityY);
			HX_STACK_LINE(792)
			this->acceleration->set_y(this->gravityY);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxExtendedSprite_obj,flipGravity,(void))

int FlxExtendedSprite_obj::get_clicks( ){
	HX_STACK_FRAME("flixel.addons.display.FlxExtendedSprite","get_clicks",0x51d6c907,"flixel.addons.display.FlxExtendedSprite.get_clicks","flixel/addons/display/FlxExtendedSprite.hx",798,0xe2826ec4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(798)
	return this->_clickCounter;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxExtendedSprite_obj,get_clicks,return )

int FlxExtendedSprite_obj::set_clicks( int NewValue){
	HX_STACK_FRAME("flixel.addons.display.FlxExtendedSprite","set_clicks",0x5554677b,"flixel.addons.display.FlxExtendedSprite.set_clicks","flixel/addons/display/FlxExtendedSprite.hx",803,0xe2826ec4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(NewValue,"NewValue")
	HX_STACK_LINE(803)
	return this->_clickCounter = NewValue;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxExtendedSprite_obj,set_clicks,return )

int FlxExtendedSprite_obj::get_springX( ){
	HX_STACK_FRAME("flixel.addons.display.FlxExtendedSprite","get_springX",0xaf72b78f,"flixel.addons.display.FlxExtendedSprite.get_springX","flixel/addons/display/FlxExtendedSprite.hx",808,0xe2826ec4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(808)
	return ::Math_obj::floor((this->x + this->springOffsetX));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxExtendedSprite_obj,get_springX,return )

int FlxExtendedSprite_obj::get_springY( ){
	HX_STACK_FRAME("flixel.addons.display.FlxExtendedSprite","get_springY",0xaf72b790,"flixel.addons.display.FlxExtendedSprite.get_springY","flixel/addons/display/FlxExtendedSprite.hx",813,0xe2826ec4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(813)
	return ::Math_obj::floor((this->y + this->springOffsetY));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxExtendedSprite_obj,get_springY,return )

::flixel::util::FlxPoint FlxExtendedSprite_obj::get_point( ){
	HX_STACK_FRAME("flixel.addons.display.FlxExtendedSprite","get_point",0x66739df4,"flixel.addons.display.FlxExtendedSprite.get_point","flixel/addons/display/FlxExtendedSprite.hx",818,0xe2826ec4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(818)
	return this->_point;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxExtendedSprite_obj,get_point,return )

::flixel::util::FlxPoint FlxExtendedSprite_obj::set_point( ::flixel::util::FlxPoint NewPoint){
	HX_STACK_FRAME("flixel.addons.display.FlxExtendedSprite","set_point",0x49c48a00,"flixel.addons.display.FlxExtendedSprite.set_point","flixel/addons/display/FlxExtendedSprite.hx",823,0xe2826ec4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(NewPoint,"NewPoint")
	HX_STACK_LINE(823)
	return this->_point = NewPoint;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxExtendedSprite_obj,set_point,return )

bool FlxExtendedSprite_obj::get_mouseOver( ){
	HX_STACK_FRAME("flixel.addons.display.FlxExtendedSprite","get_mouseOver",0x8e50d5bd,"flixel.addons.display.FlxExtendedSprite.get_mouseOver","flixel/addons/display/FlxExtendedSprite.hx",830,0xe2826ec4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(831)
	int _g = ::Math_obj::floor((::flixel::FlxG_obj::mouse->screenX + (this->scrollFactor->x * ((::flixel::FlxG_obj::mouse->x - ::flixel::FlxG_obj::mouse->screenX)))));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(832)
	int _g1 = ::Math_obj::floor((::flixel::FlxG_obj::mouse->screenY + (this->scrollFactor->y * ((::flixel::FlxG_obj::mouse->y - ::flixel::FlxG_obj::mouse->screenY)))));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(833)
	int _g2 = ::Math_obj::floor(this->x);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(834)
	int _g3 = ::Math_obj::floor(this->y);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(835)
	Float _g4 = this->get_width();		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(835)
	int _g5 = ::Math_obj::floor(_g4);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(836)
	Float _g6 = this->get_height();		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(836)
	int _g7 = ::Math_obj::floor(_g6);		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(831)
	return ::flixel::util::FlxMath_obj::pointInCoordinates(_g,_g1,_g2,_g3,_g5,_g7);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxExtendedSprite_obj,get_mouseOver,return )

int FlxExtendedSprite_obj::get_mouseX( ){
	HX_STACK_FRAME("flixel.addons.display.FlxExtendedSprite","get_mouseX",0x1396d06f,"flixel.addons.display.FlxExtendedSprite.get_mouseX","flixel/addons/display/FlxExtendedSprite.hx",841,0xe2826ec4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(842)
	if ((this->get_mouseOver())){
		HX_STACK_LINE(844)
		return ::Math_obj::floor((::flixel::FlxG_obj::mouse->x - this->x));
	}
	HX_STACK_LINE(847)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxExtendedSprite_obj,get_mouseX,return )

int FlxExtendedSprite_obj::get_mouseY( ){
	HX_STACK_FRAME("flixel.addons.display.FlxExtendedSprite","get_mouseY",0x1396d070,"flixel.addons.display.FlxExtendedSprite.get_mouseY","flixel/addons/display/FlxExtendedSprite.hx",851,0xe2826ec4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(852)
	if ((this->get_mouseOver())){
		HX_STACK_LINE(854)
		return ::Math_obj::floor((::flixel::FlxG_obj::mouse->y - this->y));
	}
	HX_STACK_LINE(857)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxExtendedSprite_obj,get_mouseY,return )

::flixel::util::FlxRect FlxExtendedSprite_obj::get_rect( ){
	HX_STACK_FRAME("flixel.addons.display.FlxExtendedSprite","get_rect",0x95d76400,"flixel.addons.display.FlxExtendedSprite.get_rect","flixel/addons/display/FlxExtendedSprite.hx",862,0xe2826ec4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(863)
	this->_rect->x = this->x;
	HX_STACK_LINE(864)
	this->_rect->y = this->y;
	HX_STACK_LINE(865)
	Float _g = this->get_width();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(865)
	this->_rect->width = _g;
	HX_STACK_LINE(866)
	Float _g1 = this->get_height();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(866)
	this->_rect->height = _g1;
	HX_STACK_LINE(868)
	return this->_rect;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxExtendedSprite_obj,get_rect,return )


FlxExtendedSprite_obj::FlxExtendedSprite_obj()
{
}

void FlxExtendedSprite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxExtendedSprite);
	HX_MARK_MEMBER_NAME(priorityID,"priorityID");
	HX_MARK_MEMBER_NAME(isPressed,"isPressed");
	HX_MARK_MEMBER_NAME(clickable,"clickable");
	HX_MARK_MEMBER_NAME(throwable,"throwable");
	HX_MARK_MEMBER_NAME(boundsRect,"boundsRect");
	HX_MARK_MEMBER_NAME(boundsSprite,"boundsSprite");
	HX_MARK_MEMBER_NAME(hasGravity,"hasGravity");
	HX_MARK_MEMBER_NAME(gravityX,"gravityX");
	HX_MARK_MEMBER_NAME(gravityY,"gravityY");
	HX_MARK_MEMBER_NAME(frictionX,"frictionX");
	HX_MARK_MEMBER_NAME(frictionY,"frictionY");
	HX_MARK_MEMBER_NAME(toleranceX,"toleranceX");
	HX_MARK_MEMBER_NAME(toleranceY,"toleranceY");
	HX_MARK_MEMBER_NAME(isDragged,"isDragged");
	HX_MARK_MEMBER_NAME(draggable,"draggable");
	HX_MARK_MEMBER_NAME(springOnPressed,"springOnPressed");
	HX_MARK_MEMBER_NAME(springOffsetX,"springOffsetX");
	HX_MARK_MEMBER_NAME(springOffsetY,"springOffsetY");
	HX_MARK_MEMBER_NAME(mousePressedCallback,"mousePressedCallback");
	HX_MARK_MEMBER_NAME(mouseReleasedCallback,"mouseReleasedCallback");
	HX_MARK_MEMBER_NAME(mouseSpring,"mouseSpring");
	HX_MARK_MEMBER_NAME(mouseStartDragCallback,"mouseStartDragCallback");
	HX_MARK_MEMBER_NAME(mouseStopDragCallback,"mouseStopDragCallback");
	HX_MARK_MEMBER_NAME(hasMouseSpring,"hasMouseSpring");
	HX_MARK_MEMBER_NAME(_snapOnDrag,"_snapOnDrag");
	HX_MARK_MEMBER_NAME(_snapOnRelease,"_snapOnRelease");
	HX_MARK_MEMBER_NAME(_snapX,"_snapX");
	HX_MARK_MEMBER_NAME(_snapY,"_snapY");
	HX_MARK_MEMBER_NAME(_clickOnRelease,"_clickOnRelease");
	HX_MARK_MEMBER_NAME(_clickPixelPerfect,"_clickPixelPerfect");
	HX_MARK_MEMBER_NAME(_clickPixelPerfectAlpha,"_clickPixelPerfectAlpha");
	HX_MARK_MEMBER_NAME(_clickCounter,"_clickCounter");
	HX_MARK_MEMBER_NAME(_rect,"_rect");
	HX_MARK_MEMBER_NAME(_throwXFactor,"_throwXFactor");
	HX_MARK_MEMBER_NAME(_throwYFactor,"_throwYFactor");
	HX_MARK_MEMBER_NAME(_dragPixelPerfect,"_dragPixelPerfect");
	HX_MARK_MEMBER_NAME(_dragPixelPerfectAlpha,"_dragPixelPerfectAlpha");
	HX_MARK_MEMBER_NAME(_dragOffsetX,"_dragOffsetX");
	HX_MARK_MEMBER_NAME(_dragOffsetY,"_dragOffsetY");
	HX_MARK_MEMBER_NAME(_dragFromPoint,"_dragFromPoint");
	HX_MARK_MEMBER_NAME(_allowHorizontalDrag,"_allowHorizontalDrag");
	HX_MARK_MEMBER_NAME(_allowVerticalDrag,"_allowVerticalDrag");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxExtendedSprite_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(priorityID,"priorityID");
	HX_VISIT_MEMBER_NAME(isPressed,"isPressed");
	HX_VISIT_MEMBER_NAME(clickable,"clickable");
	HX_VISIT_MEMBER_NAME(throwable,"throwable");
	HX_VISIT_MEMBER_NAME(boundsRect,"boundsRect");
	HX_VISIT_MEMBER_NAME(boundsSprite,"boundsSprite");
	HX_VISIT_MEMBER_NAME(hasGravity,"hasGravity");
	HX_VISIT_MEMBER_NAME(gravityX,"gravityX");
	HX_VISIT_MEMBER_NAME(gravityY,"gravityY");
	HX_VISIT_MEMBER_NAME(frictionX,"frictionX");
	HX_VISIT_MEMBER_NAME(frictionY,"frictionY");
	HX_VISIT_MEMBER_NAME(toleranceX,"toleranceX");
	HX_VISIT_MEMBER_NAME(toleranceY,"toleranceY");
	HX_VISIT_MEMBER_NAME(isDragged,"isDragged");
	HX_VISIT_MEMBER_NAME(draggable,"draggable");
	HX_VISIT_MEMBER_NAME(springOnPressed,"springOnPressed");
	HX_VISIT_MEMBER_NAME(springOffsetX,"springOffsetX");
	HX_VISIT_MEMBER_NAME(springOffsetY,"springOffsetY");
	HX_VISIT_MEMBER_NAME(mousePressedCallback,"mousePressedCallback");
	HX_VISIT_MEMBER_NAME(mouseReleasedCallback,"mouseReleasedCallback");
	HX_VISIT_MEMBER_NAME(mouseSpring,"mouseSpring");
	HX_VISIT_MEMBER_NAME(mouseStartDragCallback,"mouseStartDragCallback");
	HX_VISIT_MEMBER_NAME(mouseStopDragCallback,"mouseStopDragCallback");
	HX_VISIT_MEMBER_NAME(hasMouseSpring,"hasMouseSpring");
	HX_VISIT_MEMBER_NAME(_snapOnDrag,"_snapOnDrag");
	HX_VISIT_MEMBER_NAME(_snapOnRelease,"_snapOnRelease");
	HX_VISIT_MEMBER_NAME(_snapX,"_snapX");
	HX_VISIT_MEMBER_NAME(_snapY,"_snapY");
	HX_VISIT_MEMBER_NAME(_clickOnRelease,"_clickOnRelease");
	HX_VISIT_MEMBER_NAME(_clickPixelPerfect,"_clickPixelPerfect");
	HX_VISIT_MEMBER_NAME(_clickPixelPerfectAlpha,"_clickPixelPerfectAlpha");
	HX_VISIT_MEMBER_NAME(_clickCounter,"_clickCounter");
	HX_VISIT_MEMBER_NAME(_rect,"_rect");
	HX_VISIT_MEMBER_NAME(_throwXFactor,"_throwXFactor");
	HX_VISIT_MEMBER_NAME(_throwYFactor,"_throwYFactor");
	HX_VISIT_MEMBER_NAME(_dragPixelPerfect,"_dragPixelPerfect");
	HX_VISIT_MEMBER_NAME(_dragPixelPerfectAlpha,"_dragPixelPerfectAlpha");
	HX_VISIT_MEMBER_NAME(_dragOffsetX,"_dragOffsetX");
	HX_VISIT_MEMBER_NAME(_dragOffsetY,"_dragOffsetY");
	HX_VISIT_MEMBER_NAME(_dragFromPoint,"_dragFromPoint");
	HX_VISIT_MEMBER_NAME(_allowHorizontalDrag,"_allowHorizontalDrag");
	HX_VISIT_MEMBER_NAME(_allowVerticalDrag,"_allowVerticalDrag");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxExtendedSprite_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { return get_rect(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"point") ) { return get_point(); }
		if (HX_FIELD_EQ(inName,"_rect") ) { return _rect; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"clicks") ) { return get_clicks(); }
		if (HX_FIELD_EQ(inName,"mouseX") ) { return get_mouseX(); }
		if (HX_FIELD_EQ(inName,"mouseY") ) { return get_mouseY(); }
		if (HX_FIELD_EQ(inName,"_snapX") ) { return _snapX; }
		if (HX_FIELD_EQ(inName,"_snapY") ) { return _snapY; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"springX") ) { return get_springX(); }
		if (HX_FIELD_EQ(inName,"springY") ) { return get_springY(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"gravityX") ) { return gravityX; }
		if (HX_FIELD_EQ(inName,"gravityY") ) { return gravityY; }
		if (HX_FIELD_EQ(inName,"stopDrag") ) { return stopDrag_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rect") ) { return get_rect_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isPressed") ) { return isPressed; }
		if (HX_FIELD_EQ(inName,"clickable") ) { return clickable; }
		if (HX_FIELD_EQ(inName,"throwable") ) { return throwable; }
		if (HX_FIELD_EQ(inName,"frictionX") ) { return frictionX; }
		if (HX_FIELD_EQ(inName,"frictionY") ) { return frictionY; }
		if (HX_FIELD_EQ(inName,"isDragged") ) { return isDragged; }
		if (HX_FIELD_EQ(inName,"draggable") ) { return draggable; }
		if (HX_FIELD_EQ(inName,"mouseOver") ) { return get_mouseOver(); }
		if (HX_FIELD_EQ(inName,"startDrag") ) { return startDrag_dyn(); }
		if (HX_FIELD_EQ(inName,"get_point") ) { return get_point_dyn(); }
		if (HX_FIELD_EQ(inName,"set_point") ) { return set_point_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"priorityID") ) { return priorityID; }
		if (HX_FIELD_EQ(inName,"boundsRect") ) { return boundsRect; }
		if (HX_FIELD_EQ(inName,"hasGravity") ) { return hasGravity; }
		if (HX_FIELD_EQ(inName,"toleranceX") ) { return toleranceX; }
		if (HX_FIELD_EQ(inName,"toleranceY") ) { return toleranceY; }
		if (HX_FIELD_EQ(inName,"updateDrag") ) { return updateDrag_dyn(); }
		if (HX_FIELD_EQ(inName,"setGravity") ) { return setGravity_dyn(); }
		if (HX_FIELD_EQ(inName,"get_clicks") ) { return get_clicks_dyn(); }
		if (HX_FIELD_EQ(inName,"set_clicks") ) { return set_clicks_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mouseX") ) { return get_mouseX_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mouseY") ) { return get_mouseY_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"mouseSpring") ) { return mouseSpring; }
		if (HX_FIELD_EQ(inName,"_snapOnDrag") ) { return _snapOnDrag; }
		if (HX_FIELD_EQ(inName,"setDragLock") ) { return setDragLock_dyn(); }
		if (HX_FIELD_EQ(inName,"flipGravity") ) { return flipGravity_dyn(); }
		if (HX_FIELD_EQ(inName,"get_springX") ) { return get_springX_dyn(); }
		if (HX_FIELD_EQ(inName,"get_springY") ) { return get_springY_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"boundsSprite") ) { return boundsSprite; }
		if (HX_FIELD_EQ(inName,"_dragOffsetX") ) { return _dragOffsetX; }
		if (HX_FIELD_EQ(inName,"_dragOffsetY") ) { return _dragOffsetY; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"springOffsetX") ) { return springOffsetX; }
		if (HX_FIELD_EQ(inName,"springOffsetY") ) { return springOffsetY; }
		if (HX_FIELD_EQ(inName,"_clickCounter") ) { return _clickCounter; }
		if (HX_FIELD_EQ(inName,"_throwXFactor") ) { return _throwXFactor; }
		if (HX_FIELD_EQ(inName,"_throwYFactor") ) { return _throwYFactor; }
		if (HX_FIELD_EQ(inName,"updateGravity") ) { return updateGravity_dyn(); }
		if (HX_FIELD_EQ(inName,"checkForClick") ) { return checkForClick_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mouseOver") ) { return get_mouseOver_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"hasMouseSpring") ) { return hasMouseSpring; }
		if (HX_FIELD_EQ(inName,"_snapOnRelease") ) { return _snapOnRelease; }
		if (HX_FIELD_EQ(inName,"_dragFromPoint") ) { return _dragFromPoint; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"springOnPressed") ) { return springOnPressed; }
		if (HX_FIELD_EQ(inName,"_clickOnRelease") ) { return _clickOnRelease; }
		if (HX_FIELD_EQ(inName,"enableMouseDrag") ) { return enableMouseDrag_dyn(); }
		if (HX_FIELD_EQ(inName,"enableMouseSnap") ) { return enableMouseSnap_dyn(); }
		if (HX_FIELD_EQ(inName,"checkBoundsRect") ) { return checkBoundsRect_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"disableMouseDrag") ) { return disableMouseDrag_dyn(); }
		if (HX_FIELD_EQ(inName,"enableMouseThrow") ) { return enableMouseThrow_dyn(); }
		if (HX_FIELD_EQ(inName,"disableMouseSnap") ) { return disableMouseSnap_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_dragPixelPerfect") ) { return _dragPixelPerfect; }
		if (HX_FIELD_EQ(inName,"enableMouseClicks") ) { return enableMouseClicks_dyn(); }
		if (HX_FIELD_EQ(inName,"disableMouseThrow") ) { return disableMouseThrow_dyn(); }
		if (HX_FIELD_EQ(inName,"enableMouseSpring") ) { return enableMouseSpring_dyn(); }
		if (HX_FIELD_EQ(inName,"checkBoundsSprite") ) { return checkBoundsSprite_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_clickPixelPerfect") ) { return _clickPixelPerfect; }
		if (HX_FIELD_EQ(inName,"_allowVerticalDrag") ) { return _allowVerticalDrag; }
		if (HX_FIELD_EQ(inName,"disableMouseClicks") ) { return disableMouseClicks_dyn(); }
		if (HX_FIELD_EQ(inName,"disableMouseSpring") ) { return disableMouseSpring_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"mousePressedHandler") ) { return mousePressedHandler_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"mousePressedCallback") ) { return mousePressedCallback; }
		if (HX_FIELD_EQ(inName,"_allowHorizontalDrag") ) { return _allowHorizontalDrag; }
		if (HX_FIELD_EQ(inName,"mouseReleasedHandler") ) { return mouseReleasedHandler_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"mouseReleasedCallback") ) { return mouseReleasedCallback; }
		if (HX_FIELD_EQ(inName,"mouseStopDragCallback") ) { return mouseStopDragCallback; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"mouseStartDragCallback") ) { return mouseStartDragCallback; }
		if (HX_FIELD_EQ(inName,"_dragPixelPerfectAlpha") ) { return _dragPixelPerfectAlpha; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_clickPixelPerfectAlpha") ) { return _clickPixelPerfectAlpha; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxExtendedSprite_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"point") ) { return set_point(inValue); }
		if (HX_FIELD_EQ(inName,"_rect") ) { _rect=inValue.Cast< ::flixel::util::FlxRect >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"clicks") ) { return set_clicks(inValue); }
		if (HX_FIELD_EQ(inName,"_snapX") ) { _snapX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_snapY") ) { _snapY=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"gravityX") ) { gravityX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gravityY") ) { gravityY=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isPressed") ) { isPressed=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"clickable") ) { clickable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"throwable") ) { throwable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frictionX") ) { frictionX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frictionY") ) { frictionY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isDragged") ) { isDragged=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"draggable") ) { draggable=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"priorityID") ) { priorityID=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"boundsRect") ) { boundsRect=inValue.Cast< ::flixel::util::FlxRect >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hasGravity") ) { hasGravity=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"toleranceX") ) { toleranceX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"toleranceY") ) { toleranceY=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"mouseSpring") ) { mouseSpring=inValue.Cast< ::flixel::addons::display::FlxMouseSpring >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_snapOnDrag") ) { _snapOnDrag=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"boundsSprite") ) { boundsSprite=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_dragOffsetX") ) { _dragOffsetX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_dragOffsetY") ) { _dragOffsetY=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"springOffsetX") ) { springOffsetX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"springOffsetY") ) { springOffsetY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_clickCounter") ) { _clickCounter=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_throwXFactor") ) { _throwXFactor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_throwYFactor") ) { _throwYFactor=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"hasMouseSpring") ) { hasMouseSpring=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_snapOnRelease") ) { _snapOnRelease=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_dragFromPoint") ) { _dragFromPoint=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"springOnPressed") ) { springOnPressed=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_clickOnRelease") ) { _clickOnRelease=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_dragPixelPerfect") ) { _dragPixelPerfect=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_clickPixelPerfect") ) { _clickPixelPerfect=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_allowVerticalDrag") ) { _allowVerticalDrag=inValue.Cast< bool >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"mousePressedCallback") ) { mousePressedCallback=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_allowHorizontalDrag") ) { _allowHorizontalDrag=inValue.Cast< bool >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"mouseReleasedCallback") ) { mouseReleasedCallback=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseStopDragCallback") ) { mouseStopDragCallback=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"mouseStartDragCallback") ) { mouseStartDragCallback=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_dragPixelPerfectAlpha") ) { _dragPixelPerfectAlpha=inValue.Cast< int >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_clickPixelPerfectAlpha") ) { _clickPixelPerfectAlpha=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxExtendedSprite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("priorityID"));
	outFields->push(HX_CSTRING("isPressed"));
	outFields->push(HX_CSTRING("clickable"));
	outFields->push(HX_CSTRING("throwable"));
	outFields->push(HX_CSTRING("boundsRect"));
	outFields->push(HX_CSTRING("boundsSprite"));
	outFields->push(HX_CSTRING("hasGravity"));
	outFields->push(HX_CSTRING("gravityX"));
	outFields->push(HX_CSTRING("gravityY"));
	outFields->push(HX_CSTRING("frictionX"));
	outFields->push(HX_CSTRING("frictionY"));
	outFields->push(HX_CSTRING("toleranceX"));
	outFields->push(HX_CSTRING("toleranceY"));
	outFields->push(HX_CSTRING("isDragged"));
	outFields->push(HX_CSTRING("draggable"));
	outFields->push(HX_CSTRING("springOnPressed"));
	outFields->push(HX_CSTRING("springOffsetX"));
	outFields->push(HX_CSTRING("springOffsetY"));
	outFields->push(HX_CSTRING("mouseSpring"));
	outFields->push(HX_CSTRING("hasMouseSpring"));
	outFields->push(HX_CSTRING("clicks"));
	outFields->push(HX_CSTRING("springX"));
	outFields->push(HX_CSTRING("springY"));
	outFields->push(HX_CSTRING("point"));
	outFields->push(HX_CSTRING("rect"));
	outFields->push(HX_CSTRING("mouseOver"));
	outFields->push(HX_CSTRING("mouseX"));
	outFields->push(HX_CSTRING("mouseY"));
	outFields->push(HX_CSTRING("_snapOnDrag"));
	outFields->push(HX_CSTRING("_snapOnRelease"));
	outFields->push(HX_CSTRING("_snapX"));
	outFields->push(HX_CSTRING("_snapY"));
	outFields->push(HX_CSTRING("_clickOnRelease"));
	outFields->push(HX_CSTRING("_clickPixelPerfect"));
	outFields->push(HX_CSTRING("_clickPixelPerfectAlpha"));
	outFields->push(HX_CSTRING("_clickCounter"));
	outFields->push(HX_CSTRING("_rect"));
	outFields->push(HX_CSTRING("_throwXFactor"));
	outFields->push(HX_CSTRING("_throwYFactor"));
	outFields->push(HX_CSTRING("_dragPixelPerfect"));
	outFields->push(HX_CSTRING("_dragPixelPerfectAlpha"));
	outFields->push(HX_CSTRING("_dragOffsetX"));
	outFields->push(HX_CSTRING("_dragOffsetY"));
	outFields->push(HX_CSTRING("_dragFromPoint"));
	outFields->push(HX_CSTRING("_allowHorizontalDrag"));
	outFields->push(HX_CSTRING("_allowVerticalDrag"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FlxExtendedSprite_obj,priorityID),HX_CSTRING("priorityID")},
	{hx::fsBool,(int)offsetof(FlxExtendedSprite_obj,isPressed),HX_CSTRING("isPressed")},
	{hx::fsBool,(int)offsetof(FlxExtendedSprite_obj,clickable),HX_CSTRING("clickable")},
	{hx::fsBool,(int)offsetof(FlxExtendedSprite_obj,throwable),HX_CSTRING("throwable")},
	{hx::fsObject /*::flixel::util::FlxRect*/ ,(int)offsetof(FlxExtendedSprite_obj,boundsRect),HX_CSTRING("boundsRect")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(FlxExtendedSprite_obj,boundsSprite),HX_CSTRING("boundsSprite")},
	{hx::fsBool,(int)offsetof(FlxExtendedSprite_obj,hasGravity),HX_CSTRING("hasGravity")},
	{hx::fsInt,(int)offsetof(FlxExtendedSprite_obj,gravityX),HX_CSTRING("gravityX")},
	{hx::fsInt,(int)offsetof(FlxExtendedSprite_obj,gravityY),HX_CSTRING("gravityY")},
	{hx::fsFloat,(int)offsetof(FlxExtendedSprite_obj,frictionX),HX_CSTRING("frictionX")},
	{hx::fsFloat,(int)offsetof(FlxExtendedSprite_obj,frictionY),HX_CSTRING("frictionY")},
	{hx::fsFloat,(int)offsetof(FlxExtendedSprite_obj,toleranceX),HX_CSTRING("toleranceX")},
	{hx::fsFloat,(int)offsetof(FlxExtendedSprite_obj,toleranceY),HX_CSTRING("toleranceY")},
	{hx::fsBool,(int)offsetof(FlxExtendedSprite_obj,isDragged),HX_CSTRING("isDragged")},
	{hx::fsBool,(int)offsetof(FlxExtendedSprite_obj,draggable),HX_CSTRING("draggable")},
	{hx::fsBool,(int)offsetof(FlxExtendedSprite_obj,springOnPressed),HX_CSTRING("springOnPressed")},
	{hx::fsInt,(int)offsetof(FlxExtendedSprite_obj,springOffsetX),HX_CSTRING("springOffsetX")},
	{hx::fsInt,(int)offsetof(FlxExtendedSprite_obj,springOffsetY),HX_CSTRING("springOffsetY")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxExtendedSprite_obj,mousePressedCallback),HX_CSTRING("mousePressedCallback")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxExtendedSprite_obj,mouseReleasedCallback),HX_CSTRING("mouseReleasedCallback")},
	{hx::fsObject /*::flixel::addons::display::FlxMouseSpring*/ ,(int)offsetof(FlxExtendedSprite_obj,mouseSpring),HX_CSTRING("mouseSpring")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxExtendedSprite_obj,mouseStartDragCallback),HX_CSTRING("mouseStartDragCallback")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxExtendedSprite_obj,mouseStopDragCallback),HX_CSTRING("mouseStopDragCallback")},
	{hx::fsBool,(int)offsetof(FlxExtendedSprite_obj,hasMouseSpring),HX_CSTRING("hasMouseSpring")},
	{hx::fsBool,(int)offsetof(FlxExtendedSprite_obj,_snapOnDrag),HX_CSTRING("_snapOnDrag")},
	{hx::fsBool,(int)offsetof(FlxExtendedSprite_obj,_snapOnRelease),HX_CSTRING("_snapOnRelease")},
	{hx::fsInt,(int)offsetof(FlxExtendedSprite_obj,_snapX),HX_CSTRING("_snapX")},
	{hx::fsInt,(int)offsetof(FlxExtendedSprite_obj,_snapY),HX_CSTRING("_snapY")},
	{hx::fsBool,(int)offsetof(FlxExtendedSprite_obj,_clickOnRelease),HX_CSTRING("_clickOnRelease")},
	{hx::fsBool,(int)offsetof(FlxExtendedSprite_obj,_clickPixelPerfect),HX_CSTRING("_clickPixelPerfect")},
	{hx::fsInt,(int)offsetof(FlxExtendedSprite_obj,_clickPixelPerfectAlpha),HX_CSTRING("_clickPixelPerfectAlpha")},
	{hx::fsInt,(int)offsetof(FlxExtendedSprite_obj,_clickCounter),HX_CSTRING("_clickCounter")},
	{hx::fsObject /*::flixel::util::FlxRect*/ ,(int)offsetof(FlxExtendedSprite_obj,_rect),HX_CSTRING("_rect")},
	{hx::fsInt,(int)offsetof(FlxExtendedSprite_obj,_throwXFactor),HX_CSTRING("_throwXFactor")},
	{hx::fsInt,(int)offsetof(FlxExtendedSprite_obj,_throwYFactor),HX_CSTRING("_throwYFactor")},
	{hx::fsBool,(int)offsetof(FlxExtendedSprite_obj,_dragPixelPerfect),HX_CSTRING("_dragPixelPerfect")},
	{hx::fsInt,(int)offsetof(FlxExtendedSprite_obj,_dragPixelPerfectAlpha),HX_CSTRING("_dragPixelPerfectAlpha")},
	{hx::fsInt,(int)offsetof(FlxExtendedSprite_obj,_dragOffsetX),HX_CSTRING("_dragOffsetX")},
	{hx::fsInt,(int)offsetof(FlxExtendedSprite_obj,_dragOffsetY),HX_CSTRING("_dragOffsetY")},
	{hx::fsBool,(int)offsetof(FlxExtendedSprite_obj,_dragFromPoint),HX_CSTRING("_dragFromPoint")},
	{hx::fsBool,(int)offsetof(FlxExtendedSprite_obj,_allowHorizontalDrag),HX_CSTRING("_allowHorizontalDrag")},
	{hx::fsBool,(int)offsetof(FlxExtendedSprite_obj,_allowVerticalDrag),HX_CSTRING("_allowVerticalDrag")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("priorityID"),
	HX_CSTRING("isPressed"),
	HX_CSTRING("clickable"),
	HX_CSTRING("throwable"),
	HX_CSTRING("boundsRect"),
	HX_CSTRING("boundsSprite"),
	HX_CSTRING("hasGravity"),
	HX_CSTRING("gravityX"),
	HX_CSTRING("gravityY"),
	HX_CSTRING("frictionX"),
	HX_CSTRING("frictionY"),
	HX_CSTRING("toleranceX"),
	HX_CSTRING("toleranceY"),
	HX_CSTRING("isDragged"),
	HX_CSTRING("draggable"),
	HX_CSTRING("springOnPressed"),
	HX_CSTRING("springOffsetX"),
	HX_CSTRING("springOffsetY"),
	HX_CSTRING("mousePressedCallback"),
	HX_CSTRING("mouseReleasedCallback"),
	HX_CSTRING("mouseSpring"),
	HX_CSTRING("mouseStartDragCallback"),
	HX_CSTRING("mouseStopDragCallback"),
	HX_CSTRING("hasMouseSpring"),
	HX_CSTRING("_snapOnDrag"),
	HX_CSTRING("_snapOnRelease"),
	HX_CSTRING("_snapX"),
	HX_CSTRING("_snapY"),
	HX_CSTRING("_clickOnRelease"),
	HX_CSTRING("_clickPixelPerfect"),
	HX_CSTRING("_clickPixelPerfectAlpha"),
	HX_CSTRING("_clickCounter"),
	HX_CSTRING("_rect"),
	HX_CSTRING("_throwXFactor"),
	HX_CSTRING("_throwYFactor"),
	HX_CSTRING("_dragPixelPerfect"),
	HX_CSTRING("_dragPixelPerfectAlpha"),
	HX_CSTRING("_dragOffsetX"),
	HX_CSTRING("_dragOffsetY"),
	HX_CSTRING("_dragFromPoint"),
	HX_CSTRING("_allowHorizontalDrag"),
	HX_CSTRING("_allowVerticalDrag"),
	HX_CSTRING("enableMouseClicks"),
	HX_CSTRING("disableMouseClicks"),
	HX_CSTRING("enableMouseDrag"),
	HX_CSTRING("disableMouseDrag"),
	HX_CSTRING("enableMouseThrow"),
	HX_CSTRING("disableMouseThrow"),
	HX_CSTRING("enableMouseSnap"),
	HX_CSTRING("disableMouseSnap"),
	HX_CSTRING("enableMouseSpring"),
	HX_CSTRING("disableMouseSpring"),
	HX_CSTRING("setDragLock"),
	HX_CSTRING("update"),
	HX_CSTRING("updateGravity"),
	HX_CSTRING("updateDrag"),
	HX_CSTRING("checkForClick"),
	HX_CSTRING("mousePressedHandler"),
	HX_CSTRING("mouseReleasedHandler"),
	HX_CSTRING("startDrag"),
	HX_CSTRING("checkBoundsRect"),
	HX_CSTRING("checkBoundsSprite"),
	HX_CSTRING("stopDrag"),
	HX_CSTRING("setGravity"),
	HX_CSTRING("flipGravity"),
	HX_CSTRING("get_clicks"),
	HX_CSTRING("set_clicks"),
	HX_CSTRING("get_springX"),
	HX_CSTRING("get_springY"),
	HX_CSTRING("get_point"),
	HX_CSTRING("set_point"),
	HX_CSTRING("get_mouseOver"),
	HX_CSTRING("get_mouseX"),
	HX_CSTRING("get_mouseY"),
	HX_CSTRING("get_rect"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxExtendedSprite_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxExtendedSprite_obj::__mClass,"__mClass");
};

#endif

Class FlxExtendedSprite_obj::__mClass;

void FlxExtendedSprite_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.addons.display.FlxExtendedSprite"), hx::TCanCast< FlxExtendedSprite_obj> ,sStaticFields,sMemberFields,
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

void FlxExtendedSprite_obj::__boot()
{
}

} // end namespace flixel
} // end namespace addons
} // end namespace display
