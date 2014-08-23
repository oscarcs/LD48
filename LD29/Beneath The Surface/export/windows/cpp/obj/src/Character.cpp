#include <hxcpp.h>

#ifndef INCLUDED_Character
#include <Character.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
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
#ifndef INCLUDED_flixel_util_FlxRect
#include <flixel/util/FlxRect.h>
#endif
#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif

Void Character_obj::__construct(Float X,Float Y,::String JsonPath,Dynamic SimpleGraphic)
{
HX_STACK_FRAME("Character","new",0x74bf54fb,"Character.new","Character.hx",18,0xf073a2d5)
HX_STACK_THIS(this)
HX_STACK_ARG(X,"X")
HX_STACK_ARG(Y,"Y")
HX_STACK_ARG(JsonPath,"JsonPath")
HX_STACK_ARG(SimpleGraphic,"SimpleGraphic")
{
	HX_STACK_LINE(30)
	this->faith = (int)0;
	HX_STACK_LINE(29)
	this->rollTimer = (int)0;
	HX_STACK_LINE(28)
	this->rolling = false;
	HX_STACK_LINE(26)
	this->controllable = false;
	HX_STACK_LINE(39)
	super::__construct(this->x,this->y,SimpleGraphic);
	HX_STACK_LINE(40)
	this->parseJson(JsonPath);
	HX_STACK_LINE(42)
	this->set_facing((int)4096);
	HX_STACK_LINE(44)
	this->health = (int)10;
	HX_STACK_LINE(46)
	this->set_x(X);
	HX_STACK_LINE(47)
	this->set_y(Y);
	HX_STACK_LINE(49)
	this->set_solid(true);
	HX_STACK_LINE(51)
	this->drag->set_x((this->maxVelocity->x * (int)4));
	HX_STACK_LINE(52)
	this->drag->set_y((this->maxVelocity->y * (int)4));
	HX_STACK_LINE(54)
	::flixel::util::FlxPoint _g = ::flixel::util::FlxPoint_obj::__new((int)0,(int)0);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(54)
	this->pastPlayerPosition = _g;
	HX_STACK_LINE(55)
	::flixel::util::FlxPoint _g1 = ::flixel::util::FlxPoint_obj::__new((int)0,(int)0);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(55)
	this->currentPlayerPosition = _g1;
}
;
	return null();
}

//Character_obj::~Character_obj() { }

Dynamic Character_obj::__CreateEmpty() { return  new Character_obj; }
hx::ObjectPtr< Character_obj > Character_obj::__new(Float X,Float Y,::String JsonPath,Dynamic SimpleGraphic)
{  hx::ObjectPtr< Character_obj > result = new Character_obj();
	result->__construct(X,Y,JsonPath,SimpleGraphic);
	return result;}

Dynamic Character_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Character_obj > result = new Character_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Void Character_obj::update( ){
{
		HX_STACK_FRAME("Character","update",0x0e18944e,"Character.update","Character.hx",59,0xf073a2d5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(60)
		if (((this->rollTimer > 2.5))){
			HX_STACK_LINE(62)
			this->rolling = false;
			HX_STACK_LINE(63)
			this->rollTimer = (int)0;
		}
		HX_STACK_LINE(66)
		if (((this->rolling == true))){
			HX_STACK_LINE(69)
			hx::AddEq(this->rollTimer,::flixel::FlxG_obj::elapsed);
		}
		HX_STACK_LINE(72)
		if ((this->controllable)){
			HX_STACK_LINE(74)
			this->acceleration->set_x((int)0);
			HX_STACK_LINE(75)
			this->acceleration->set_y((int)0);
			HX_STACK_LINE(77)
			this->pastPlayerPosition->set_x(this->currentPlayerPosition->x);
			HX_STACK_LINE(78)
			this->pastPlayerPosition->set_y(this->pastPlayerPosition->y);
			HX_STACK_LINE(81)
			if ((::flixel::FlxG_obj::keys->checkKeyStatus(Array_obj< ::String >::__new().Add(HX_CSTRING("RIGHT")),(int)1))){
				HX_STACK_LINE(83)
				this->acceleration->set_x(this->drag->x);
				HX_STACK_LINE(84)
				this->set_facing((int)16);
				HX_STACK_LINE(85)
				if (((  ((::flixel::FlxG_obj::keys->checkKeyStatus(Array_obj< ::String >::__new().Add(HX_CSTRING("X")),(int)1))) ? bool((this->rolling == false)) : bool(false) ))){
					HX_STACK_LINE(87)
					this->rolling = true;
				}
			}
			else{
				HX_STACK_LINE(90)
				if ((::flixel::FlxG_obj::keys->checkKeyStatus(Array_obj< ::String >::__new().Add(HX_CSTRING("LEFT")),(int)1))){
					HX_STACK_LINE(92)
					this->acceleration->set_x(-(this->drag->x));
					HX_STACK_LINE(93)
					this->set_facing((int)1);
					HX_STACK_LINE(95)
					if (((  ((::flixel::FlxG_obj::keys->checkKeyStatus(Array_obj< ::String >::__new().Add(HX_CSTRING("X")),(int)1))) ? bool((this->rolling == false)) : bool(false) ))){
						HX_STACK_LINE(97)
						this->rolling = true;
					}
				}
			}
			HX_STACK_LINE(101)
			if ((::flixel::FlxG_obj::keys->checkKeyStatus(Array_obj< ::String >::__new().Add(HX_CSTRING("UP")),(int)1))){
				HX_STACK_LINE(103)
				this->acceleration->set_y(-(this->drag->y));
				HX_STACK_LINE(104)
				this->set_facing((int)256);
				HX_STACK_LINE(105)
				if (((  ((::flixel::FlxG_obj::keys->checkKeyStatus(Array_obj< ::String >::__new().Add(HX_CSTRING("X")),(int)1))) ? bool((this->rolling == false)) : bool(false) ))){
					HX_STACK_LINE(107)
					this->rolling = true;
				}
			}
			else{
				HX_STACK_LINE(110)
				if ((::flixel::FlxG_obj::keys->checkKeyStatus(Array_obj< ::String >::__new().Add(HX_CSTRING("DOWN")),(int)1))){
					HX_STACK_LINE(112)
					this->acceleration->set_y(this->drag->y);
					HX_STACK_LINE(113)
					this->set_facing((int)4096);
					HX_STACK_LINE(114)
					if (((  ((::flixel::FlxG_obj::keys->checkKeyStatus(Array_obj< ::String >::__new().Add(HX_CSTRING("X")),(int)1))) ? bool((this->rolling == false)) : bool(false) ))){
						HX_STACK_LINE(116)
						this->rolling = true;
					}
				}
			}
			HX_STACK_LINE(120)
			this->currentPlayerPosition->set_x(this->x);
			HX_STACK_LINE(121)
			this->currentPlayerPosition->set_y(this->y);
		}
		HX_STACK_LINE(124)
		this->checkBoundsMap();
		HX_STACK_LINE(125)
		this->doAnimation();
		HX_STACK_LINE(127)
		if (((this->health <= (int)0))){
			HX_STACK_LINE(129)
			::flixel::FlxState State = ::PlayState_obj::__new(null());		HX_STACK_VAR(State,"State");
			HX_STACK_LINE(129)
			::flixel::FlxG_obj::game->_requestedState = State;
		}
		HX_STACK_LINE(132)
		this->super::update();
	}
return null();
}


Void Character_obj::setBoundsMap( ::flixel::util::FlxRect boundsMap){
{
		HX_STACK_FRAME("Character","setBoundsMap",0x8795432a,"Character.setBoundsMap","Character.hx",137,0xf073a2d5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(boundsMap,"boundsMap")
		HX_STACK_LINE(137)
		this->maxBounds = boundsMap;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Character_obj,setBoundsMap,(void))

Void Character_obj::checkBoundsMap( ){
{
		HX_STACK_FRAME("Character","checkBoundsMap",0x31c43c84,"Character.checkBoundsMap","Character.hx",141,0xf073a2d5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(142)
		if (((this->maxBounds == null()))){
			HX_STACK_LINE(143)
			return null();
		}
		HX_STACK_LINE(146)
		if ((((this->x + this->collisionMap->x) < this->maxBounds->x))){
			HX_STACK_LINE(148)
			this->set_x((this->maxBounds->x - this->collisionMap->x));
			HX_STACK_LINE(149)
			this->acceleration->set_x((int)0);
		}
		else{
			HX_STACK_LINE(151)
			if (((((this->x + this->collisionMap->x) + this->collisionMap->width) > (this->maxBounds->x + this->maxBounds->width)))){
				HX_STACK_LINE(153)
				this->set_x((((this->maxBounds->x + this->maxBounds->width) - this->collisionMap->width) - this->collisionMap->x));
				HX_STACK_LINE(154)
				this->acceleration->set_x((int)0);
			}
		}
		HX_STACK_LINE(157)
		if ((((this->y + this->collisionMap->y) < this->maxBounds->y))){
			HX_STACK_LINE(159)
			this->set_y((this->maxBounds->y - this->collisionMap->y));
			HX_STACK_LINE(160)
			this->acceleration->set_y((int)0);
		}
		else{
			HX_STACK_LINE(162)
			if (((((this->y + this->collisionMap->y) + this->collisionMap->height) > (this->maxBounds->y + this->maxBounds->height)))){
				HX_STACK_LINE(164)
				this->set_y((((this->maxBounds->y + this->maxBounds->height) - this->collisionMap->height) - this->collisionMap->y));
				HX_STACK_LINE(165)
				this->acceleration->set_y((int)0);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Character_obj,checkBoundsMap,(void))

Void Character_obj::doAnimation( ){
{
		HX_STACK_FRAME("Character","doAnimation",0x2dedc594,"Character.doAnimation","Character.hx",171,0xf073a2d5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(173)
		this->anim = HX_CSTRING("idle_");
		HX_STACK_LINE(175)
		if (((bool((this->velocity->y != (int)0)) || bool((this->velocity->x != (int)0))))){
			HX_STACK_LINE(178)
			if (((this->rolling == true))){
				HX_STACK_LINE(180)
				this->anim = HX_CSTRING("rolling_");
			}
			HX_STACK_LINE(183)
			this->anim = HX_CSTRING("walking_");
			HX_STACK_LINE(186)
			if (((this->velocity->y > (int)0))){
				HX_STACK_LINE(188)
				this->set_facing((int)4096);
			}
			else{
				HX_STACK_LINE(190)
				if (((this->velocity->y < (int)0))){
					HX_STACK_LINE(192)
					this->set_facing((int)256);
				}
			}
			HX_STACK_LINE(195)
			if (((this->velocity->x > (int)0))){
				HX_STACK_LINE(197)
				this->set_facing((int)16);
			}
			else{
				HX_STACK_LINE(199)
				if (((this->velocity->x > (int)0))){
					HX_STACK_LINE(201)
					this->set_facing((int)1);
				}
			}
		}
		HX_STACK_LINE(204)
		{
			HX_STACK_LINE(204)
			int _g = this->facing;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(204)
			switch( (int)(_g)){
				case (int)256: {
					HX_STACK_LINE(207)
					hx::AddEq(this->anim,HX_CSTRING("up"));
				}
				;break;
				case (int)4096: {
					HX_STACK_LINE(210)
					hx::AddEq(this->anim,HX_CSTRING("down"));
				}
				;break;
				case (int)16: {
					HX_STACK_LINE(213)
					hx::AddEq(this->anim,HX_CSTRING("right"));
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(216)
					hx::AddEq(this->anim,HX_CSTRING("left"));
				}
				;break;
				default: {
					HX_STACK_LINE(219)
					hx::AddEq(this->anim,HX_CSTRING("right"));
				}
			}
		}
		HX_STACK_LINE(222)
		::String _g = this->animation->get_name();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(222)
		if (((_g != this->anim))){
			HX_STACK_LINE(224)
			this->animation->play(this->anim,null(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Character_obj,doAnimation,(void))

Void Character_obj::parseJson( ::String file){
{
		HX_STACK_FRAME("Character","parseJson",0x2373fed6,"Character.parseJson","Character.hx",230,0xf073a2d5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(file,"file")
		HX_STACK_LINE(236)
		::haxe::io::Path filePath = ::haxe::io::Path_obj::__new(file);		HX_STACK_VAR(filePath,"filePath");
		HX_STACK_LINE(237)
		::String fileString = ::openfl::Assets_obj::getText(file);		HX_STACK_VAR(fileString,"fileString");
		HX_STACK_LINE(238)
		if (((fileString == null()))){
			HX_STACK_LINE(240)
			HX_STACK_DO_THROW(((HX_CSTRING("JSON definition file {") + file) + HX_CSTRING("} not found")));
		}
		HX_STACK_LINE(244)
		Dynamic json = ::haxe::format::JsonParser_obj::__new(fileString)->parseRec();		HX_STACK_VAR(json,"json");
		HX_STACK_LINE(248)
		::String texture = ((filePath->dir + HX_CSTRING("/")) + json->__Field(HX_CSTRING("sprite"),true)->__Field(HX_CSTRING("texture"),true));		HX_STACK_VAR(texture,"texture");
		HX_STACK_LINE(249)
		int frameWidth = json->__Field(HX_CSTRING("sprite"),true)->__Field(HX_CSTRING("framewidth"),true);		HX_STACK_VAR(frameWidth,"frameWidth");
		HX_STACK_LINE(250)
		int frameHeight = json->__Field(HX_CSTRING("sprite"),true)->__Field(HX_CSTRING("frameheight"),true);		HX_STACK_VAR(frameHeight,"frameHeight");
		HX_STACK_LINE(252)
		this->loadGraphic(texture,true,frameWidth,frameHeight,null(),null());
		HX_STACK_LINE(256)
		int xmax = json->__Field(HX_CSTRING("velocity"),true)->__Field(HX_CSTRING("xmax"),true);		HX_STACK_VAR(xmax,"xmax");
		HX_STACK_LINE(257)
		int ymax = json->__Field(HX_CSTRING("velocity"),true)->__Field(HX_CSTRING("ymax"),true);		HX_STACK_VAR(ymax,"ymax");
		HX_STACK_LINE(258)
		this->maxVelocity->set_x(xmax);
		HX_STACK_LINE(259)
		this->maxVelocity->set_y(ymax);
		HX_STACK_LINE(263)
		int col_x = json->__Field(HX_CSTRING("collision"),true)->__Field(HX_CSTRING("x"),true);		HX_STACK_VAR(col_x,"col_x");
		HX_STACK_LINE(264)
		int col_y = json->__Field(HX_CSTRING("collision"),true)->__Field(HX_CSTRING("y"),true);		HX_STACK_VAR(col_y,"col_y");
		HX_STACK_LINE(265)
		int col_width = json->__Field(HX_CSTRING("collision"),true)->__Field(HX_CSTRING("width"),true);		HX_STACK_VAR(col_width,"col_width");
		HX_STACK_LINE(266)
		int col_height = json->__Field(HX_CSTRING("collision"),true)->__Field(HX_CSTRING("height"),true);		HX_STACK_VAR(col_height,"col_height");
		HX_STACK_LINE(267)
		::flixel::util::FlxRect _g = ::flixel::util::FlxRect_obj::__new(col_x,col_y,col_width,col_height);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(267)
		this->collisionMap = _g;
		HX_STACK_LINE(284)
		int vel_default = json->__Field(HX_CSTRING("animation"),true)->__Field(HX_CSTRING("framerate"),true)->__Field(HX_CSTRING("def"),true);		HX_STACK_VAR(vel_default,"vel_default");
		HX_STACK_LINE(285)
		int vel_idle = json->__Field(HX_CSTRING("animation"),true)->__Field(HX_CSTRING("framerate"),true)->__Field(HX_CSTRING("idle"),true);		HX_STACK_VAR(vel_idle,"vel_idle");
		HX_STACK_LINE(286)
		int vel_walking = json->__Field(HX_CSTRING("animation"),true)->__Field(HX_CSTRING("framerate"),true)->__Field(HX_CSTRING("walking"),true);		HX_STACK_VAR(vel_walking,"vel_walking");
		HX_STACK_LINE(287)
		int vel_rolling = json->__Field(HX_CSTRING("animation"),true)->__Field(HX_CSTRING("framerate"),true)->__Field(HX_CSTRING("rolling"),true);		HX_STACK_VAR(vel_rolling,"vel_rolling");
		HX_STACK_LINE(293)
		int tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(294)
		{
			HX_STACK_LINE(294)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(294)
			Array< ::String > _g11 = ::Reflect_obj::fields(json->__Field(HX_CSTRING("animation"),true)->__Field(HX_CSTRING("frames"),true));		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(294)
			while((true)){
				HX_STACK_LINE(294)
				if ((!(((_g1 < _g11->length))))){
					HX_STACK_LINE(294)
					break;
				}
				HX_STACK_LINE(294)
				::String dir = _g11->__get(_g1);		HX_STACK_VAR(dir,"dir");
				HX_STACK_LINE(294)
				++(_g1);
				HX_STACK_LINE(296)
				Dynamic d = ::Reflect_obj::field(json->__Field(HX_CSTRING("animation"),true)->__Field(HX_CSTRING("frames"),true),dir);		HX_STACK_VAR(d,"d");
				HX_STACK_LINE(297)
				{
					HX_STACK_LINE(297)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(297)
					Array< ::String > _g3 = ::Reflect_obj::fields(d);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(297)
					while((true)){
						HX_STACK_LINE(297)
						if ((!(((_g2 < _g3->length))))){
							HX_STACK_LINE(297)
							break;
						}
						HX_STACK_LINE(297)
						::String type = _g3->__get(_g2);		HX_STACK_VAR(type,"type");
						HX_STACK_LINE(297)
						++(_g2);
						HX_STACK_LINE(299)
						Array< int > t = ::Reflect_obj::field(d,type);		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(300)
						::String _switch_1 = (type);
						if (  ( _switch_1==HX_CSTRING("def"))){
							HX_STACK_LINE(303)
							tmp = vel_default;
						}
						else if (  ( _switch_1==HX_CSTRING("idle"))){
							HX_STACK_LINE(306)
							tmp = vel_idle;
						}
						else if (  ( _switch_1==HX_CSTRING("walking"))){
							HX_STACK_LINE(309)
							tmp = vel_walking;
						}
						else if (  ( _switch_1==HX_CSTRING("rolling"))){
							HX_STACK_LINE(312)
							tmp = vel_rolling;
						}
						else  {
							HX_STACK_LINE(315)
							tmp = vel_default;
						}
;
;
						HX_STACK_LINE(317)
						this->animation->add(((type + HX_CSTRING("_")) + dir),t,tmp,true);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Character_obj,parseJson,(void))

Void Character_obj::getMessage( ){
{
		HX_STACK_FRAME("Character","getMessage",0x4ccad096,"Character.getMessage","Character.hx",324,0xf073a2d5)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Character_obj,getMessage,(void))


Character_obj::Character_obj()
{
}

void Character_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Character);
	HX_MARK_MEMBER_NAME(direction,"direction");
	HX_MARK_MEMBER_NAME(collisionMap,"collisionMap");
	HX_MARK_MEMBER_NAME(maxBounds,"maxBounds");
	HX_MARK_MEMBER_NAME(controllable,"controllable");
	HX_MARK_MEMBER_NAME(anim,"anim");
	HX_MARK_MEMBER_NAME(rolling,"rolling");
	HX_MARK_MEMBER_NAME(rollTimer,"rollTimer");
	HX_MARK_MEMBER_NAME(faith,"faith");
	HX_MARK_MEMBER_NAME(pastPlayerPosition,"pastPlayerPosition");
	HX_MARK_MEMBER_NAME(currentPlayerPosition,"currentPlayerPosition");
	::flixel::addons::display::FlxExtendedSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Character_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(direction,"direction");
	HX_VISIT_MEMBER_NAME(collisionMap,"collisionMap");
	HX_VISIT_MEMBER_NAME(maxBounds,"maxBounds");
	HX_VISIT_MEMBER_NAME(controllable,"controllable");
	HX_VISIT_MEMBER_NAME(anim,"anim");
	HX_VISIT_MEMBER_NAME(rolling,"rolling");
	HX_VISIT_MEMBER_NAME(rollTimer,"rollTimer");
	HX_VISIT_MEMBER_NAME(faith,"faith");
	HX_VISIT_MEMBER_NAME(pastPlayerPosition,"pastPlayerPosition");
	HX_VISIT_MEMBER_NAME(currentPlayerPosition,"currentPlayerPosition");
	::flixel::addons::display::FlxExtendedSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Character_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"anim") ) { return anim; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"faith") ) { return faith; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"rolling") ) { return rolling; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"direction") ) { return direction; }
		if (HX_FIELD_EQ(inName,"maxBounds") ) { return maxBounds; }
		if (HX_FIELD_EQ(inName,"rollTimer") ) { return rollTimer; }
		if (HX_FIELD_EQ(inName,"parseJson") ) { return parseJson_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getMessage") ) { return getMessage_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"doAnimation") ) { return doAnimation_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"collisionMap") ) { return collisionMap; }
		if (HX_FIELD_EQ(inName,"controllable") ) { return controllable; }
		if (HX_FIELD_EQ(inName,"setBoundsMap") ) { return setBoundsMap_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"checkBoundsMap") ) { return checkBoundsMap_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"pastPlayerPosition") ) { return pastPlayerPosition; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"currentPlayerPosition") ) { return currentPlayerPosition; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Character_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"anim") ) { anim=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"faith") ) { faith=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"rolling") ) { rolling=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"direction") ) { direction=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxBounds") ) { maxBounds=inValue.Cast< ::flixel::util::FlxRect >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rollTimer") ) { rollTimer=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"collisionMap") ) { collisionMap=inValue.Cast< ::flixel::util::FlxRect >(); return inValue; }
		if (HX_FIELD_EQ(inName,"controllable") ) { controllable=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"pastPlayerPosition") ) { pastPlayerPosition=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"currentPlayerPosition") ) { currentPlayerPosition=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Character_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("direction"));
	outFields->push(HX_CSTRING("collisionMap"));
	outFields->push(HX_CSTRING("maxBounds"));
	outFields->push(HX_CSTRING("controllable"));
	outFields->push(HX_CSTRING("anim"));
	outFields->push(HX_CSTRING("rolling"));
	outFields->push(HX_CSTRING("rollTimer"));
	outFields->push(HX_CSTRING("faith"));
	outFields->push(HX_CSTRING("pastPlayerPosition"));
	outFields->push(HX_CSTRING("currentPlayerPosition"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Character_obj,direction),HX_CSTRING("direction")},
	{hx::fsObject /*::flixel::util::FlxRect*/ ,(int)offsetof(Character_obj,collisionMap),HX_CSTRING("collisionMap")},
	{hx::fsObject /*::flixel::util::FlxRect*/ ,(int)offsetof(Character_obj,maxBounds),HX_CSTRING("maxBounds")},
	{hx::fsBool,(int)offsetof(Character_obj,controllable),HX_CSTRING("controllable")},
	{hx::fsString,(int)offsetof(Character_obj,anim),HX_CSTRING("anim")},
	{hx::fsBool,(int)offsetof(Character_obj,rolling),HX_CSTRING("rolling")},
	{hx::fsFloat,(int)offsetof(Character_obj,rollTimer),HX_CSTRING("rollTimer")},
	{hx::fsFloat,(int)offsetof(Character_obj,faith),HX_CSTRING("faith")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(Character_obj,pastPlayerPosition),HX_CSTRING("pastPlayerPosition")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(Character_obj,currentPlayerPosition),HX_CSTRING("currentPlayerPosition")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("direction"),
	HX_CSTRING("collisionMap"),
	HX_CSTRING("maxBounds"),
	HX_CSTRING("controllable"),
	HX_CSTRING("anim"),
	HX_CSTRING("rolling"),
	HX_CSTRING("rollTimer"),
	HX_CSTRING("faith"),
	HX_CSTRING("pastPlayerPosition"),
	HX_CSTRING("currentPlayerPosition"),
	HX_CSTRING("update"),
	HX_CSTRING("setBoundsMap"),
	HX_CSTRING("checkBoundsMap"),
	HX_CSTRING("doAnimation"),
	HX_CSTRING("parseJson"),
	HX_CSTRING("getMessage"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Character_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Character_obj::__mClass,"__mClass");
};

#endif

Class Character_obj::__mClass;

void Character_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Character"), hx::TCanCast< Character_obj> ,sStaticFields,sMemberFields,
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

void Character_obj::__boot()
{
}

