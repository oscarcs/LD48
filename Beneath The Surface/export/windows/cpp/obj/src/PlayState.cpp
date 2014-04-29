#include <hxcpp.h>

#ifndef INCLUDED_Character
#include <Character.h>
#endif
#ifndef INCLUDED_MenuState
#include <MenuState.h>
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
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_TiledLevel
#include <TiledLevel.h>
#endif
#ifndef INCLUDED_UI
#include <UI.h>
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
#ifndef INCLUDED_flixel_addons_display_FlxExtendedSprite
#include <flixel/addons/display/FlxExtendedSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledMap
#include <flixel/addons/editors/tiled/TiledMap.h>
#endif
#ifndef INCLUDED_flixel_addons_weapon_FlxBullet
#include <flixel/addons/weapon/FlxBullet.h>
#endif
#ifndef INCLUDED_flixel_addons_weapon_FlxWeapon
#include <flixel/addons/weapon/FlxWeapon.h>
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
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemap
#include <flixel/tile/FlxTilemap.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRect
#include <flixel/util/FlxRect.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif

Void PlayState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("PlayState","new",0xf8bf96cf,"PlayState.new","PlayState.hx",18,0xb30d7781)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(50)
	this->world = ::flixel::util::FlxRect_obj::__new((int)0,(int)0,(int)1600,(int)1600);
	HX_STACK_LINE(18)
	super::__construct(MaxSize);
}
;
	return null();
}

//PlayState_obj::~PlayState_obj() { }

Dynamic PlayState_obj::__CreateEmpty() { return  new PlayState_obj; }
hx::ObjectPtr< PlayState_obj > PlayState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< PlayState_obj > result = new PlayState_obj();
	result->__construct(MaxSize);
	return result;}

Dynamic PlayState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PlayState_obj > result = new PlayState_obj();
	result->__construct(inArgs[0]);
	return result;}

Void PlayState_obj::create( ){
{
		HX_STACK_FRAME("PlayState","create",0x82220fed,"PlayState.create","PlayState.hx",58,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(59)
		this->super::create();
		HX_STACK_LINE(63)
		this->fadeIn();
		HX_STACK_LINE(65)
		::TiledLevel _g = ::TiledLevel_obj::__new(HX_CSTRING("assets/data/newlevel.tmx"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(65)
		::Reg_obj::testmap = _g;
		HX_STACK_LINE(66)
		this->add(::Reg_obj::testmap->backgroundTiles);
		HX_STACK_LINE(67)
		this->add(::Reg_obj::testmap->foregroundTiles);
		HX_STACK_LINE(69)
		::flixel::group::FlxGroup _g1 = ::flixel::group::FlxGroup_obj::__new(null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(69)
		this->shrines = _g1;
		HX_STACK_LINE(70)
		this->add(this->shrines);
		HX_STACK_LINE(72)
		::flixel::group::FlxGroup _g2 = ::flixel::group::FlxGroup_obj::__new(null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(72)
		this->shrubs = _g2;
		HX_STACK_LINE(73)
		this->add(this->shrubs);
		HX_STACK_LINE(75)
		::flixel::group::FlxGroup _g3 = ::flixel::group::FlxGroup_obj::__new(null());		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(75)
		this->pillars = _g3;
		HX_STACK_LINE(76)
		this->add(this->pillars);
		HX_STACK_LINE(78)
		::flixel::group::FlxGroup _g4 = ::flixel::group::FlxGroup_obj::__new(null());		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(78)
		this->mounds = _g4;
		HX_STACK_LINE(79)
		this->add(this->mounds);
		HX_STACK_LINE(81)
		::Reg_obj::testmap->loadObjects(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(85)
		::flixel::group::FlxGroup _g5 = ::flixel::group::FlxGroup_obj::__new(null());		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(85)
		::Reg_obj::enemyGroup = _g5;
		HX_STACK_LINE(87)
		::flixel::FlxG_obj::camera->set_zoom(::Reg_obj::zoomLevel);
		HX_STACK_LINE(88)
		int _g6 = ::Std_obj::_int((Float(::flixel::FlxG_obj::camera->width) / Float(::Reg_obj::zoomLevel)));		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(88)
		::flixel::FlxG_obj::camera->set_width(_g6);
		HX_STACK_LINE(89)
		int _g7 = ::Std_obj::_int((Float(::flixel::FlxG_obj::camera->height) / Float(::Reg_obj::zoomLevel)));		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(89)
		::flixel::FlxG_obj::camera->set_height(_g7);
		HX_STACK_LINE(90)
		::flixel::FlxG_obj::camera->follow(::Reg_obj::player,null(),null(),null());
		HX_STACK_LINE(97)
		::Reg_obj::player->controllable = true;
		HX_STACK_LINE(108)
		::flixel::addons::weapon::FlxWeapon _g8 = ::flixel::addons::weapon::FlxWeapon_obj::__new(HX_CSTRING("lazer"),::Reg_obj::player,null(),null());		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(108)
		this->bow = _g8;
		HX_STACK_LINE(110)
		this->bow->makeImageBullet((int)500,HX_CSTRING("assets/images/newArrow.png"),(int)0,(int)0,true,(int)360,null(),null(),null());
		HX_STACK_LINE(111)
		this->bow->setBulletDirection((int)-90,(int)200);
		HX_STACK_LINE(112)
		this->bow->setBulletRandomFactor((int)10,(int)20,null(),null());
		HX_STACK_LINE(113)
		this->bow->setBulletSpeed((int)200);
		HX_STACK_LINE(114)
		this->add(this->bow->group);
		HX_STACK_LINE(115)
		this->bow->setBulletBounds(this->world);
		HX_STACK_LINE(116)
		this->bow->setFireRate((int)10);
		HX_STACK_LINE(119)
		::Reg_obj::enemyGroup->set_maxSize((int)30);
		HX_STACK_LINE(121)
		this->add(::Reg_obj::enemyGroup);
		HX_STACK_LINE(123)
		::UI _g9 = ::UI_obj::__new();		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(123)
		this->overlay = _g9;
		HX_STACK_LINE(124)
		this->overlay->add(this->overlay->CText);
		HX_STACK_LINE(125)
		this->overlay->add(this->overlay->XText);
		HX_STACK_LINE(126)
		this->overlay->add(this->overlay->ZText);
		HX_STACK_LINE(130)
		::flixel::group::FlxGroup _g10 = ::flixel::group::FlxGroup_obj::__new(null());		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(130)
		this->faithBar = _g10;
		HX_STACK_LINE(132)
		::flixel::FlxSprite faithBG = ::flixel::FlxSprite_obj::__new((int)70,(int)30,null());		HX_STACK_VAR(faithBG,"faithBG");
		HX_STACK_LINE(133)
		faithBG->scrollFactor->set_x((int)0);
		HX_STACK_LINE(134)
		faithBG->scrollFactor->set_y((int)0);
		HX_STACK_LINE(135)
		faithBG->loadGraphic(HX_CSTRING("assets/images/faithbg.png"),false,null(),null(),null(),null());
		HX_STACK_LINE(137)
		this->faithBar->add(faithBG);
		HX_STACK_LINE(141)
		::flixel::FlxSprite _g11 = ::flixel::FlxSprite_obj::__new((int)155,(int)30,null());		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(141)
		this->faithMeter = _g11;
		HX_STACK_LINE(142)
		this->faithMeter->scrollFactor->set_x((int)0);
		HX_STACK_LINE(143)
		this->faithMeter->scrollFactor->set_y((int)0);
		HX_STACK_LINE(144)
		this->faithMeter->makeGraphic((int)1,(int)10,(int)-1,null(),null());
		HX_STACK_LINE(146)
		this->faithMeter->scale->set_x((int)180);
		HX_STACK_LINE(148)
		::flixel::FlxSprite _g12 = ::flixel::FlxSprite_obj::__new((int)160,(int)40,null());		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(148)
		this->healthMeter = _g12;
		HX_STACK_LINE(149)
		this->healthMeter->scrollFactor->set_x((int)0);
		HX_STACK_LINE(150)
		this->healthMeter->scrollFactor->set_y((int)0);
		HX_STACK_LINE(151)
		this->healthMeter->makeGraphic((int)1,(int)10,(int)-65536,null(),null());
		HX_STACK_LINE(153)
		this->healthMeter->scale->set_x((int)180);
		HX_STACK_LINE(155)
		::String _g13 = ::Std_obj::string(::Reg_obj::score);		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(155)
		::flixel::text::FlxText _g14 = ::flixel::text::FlxText_obj::__new((int)130,(int)10,(int)50,_g13,(int)16,null());		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(155)
		this->scoreText = _g14;
		HX_STACK_LINE(156)
		this->scoreText->set_alignment(HX_CSTRING("center"));
		HX_STACK_LINE(157)
		this->scoreText->scrollFactor->set_x((int)0);
		HX_STACK_LINE(158)
		this->scoreText->scrollFactor->set_y((int)0);
		HX_STACK_LINE(160)
		this->faithBar->add(this->scoreText);
		HX_STACK_LINE(161)
		this->faithBar->add(this->faithMeter);
		HX_STACK_LINE(162)
		this->faithBar->add(this->healthMeter);
		HX_STACK_LINE(163)
		this->add(this->faithBar);
		HX_STACK_LINE(172)
		{
			HX_STACK_LINE(172)
			::flixel::util::FlxRect _this = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(172)
			_this->x = (int)0;
			HX_STACK_LINE(172)
			_this->y = (int)0;
			HX_STACK_LINE(172)
			_this->width = (int)1600;
			HX_STACK_LINE(172)
			_this->height = (int)1600;
			HX_STACK_LINE(172)
			_this;
		}
	}
return null();
}


Void PlayState_obj::destroy( ){
{
		HX_STACK_FRAME("PlayState","destroy",0x6ec756e9,"PlayState.destroy","PlayState.hx",178,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(178)
		this->super::destroy();
	}
return null();
}


Void PlayState_obj::update( ){
{
		HX_STACK_FRAME("PlayState","update",0x8d182efa,"PlayState.update","PlayState.hx",182,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(183)
		if (((::Reg_obj::player->faith > (int)0))){
			HX_STACK_LINE(185)
			hx::SubEq(::Reg_obj::player->faith,0.02);
			HX_STACK_LINE(186)
			hx::AddEq(::Reg_obj::player->health,0.0011111111111111111);
		}
		HX_STACK_LINE(189)
		::String _g = ::Std_obj::string(::Reg_obj::score);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(189)
		this->scoreText->set_text(_g);
		HX_STACK_LINE(191)
		this->faithMeter->scale->set_x(::Reg_obj::player->faith);
		HX_STACK_LINE(192)
		this->healthMeter->scale->set_x((::Reg_obj::player->health * (int)18));
		HX_STACK_LINE(197)
		this->collideStuff();
		HX_STACK_LINE(201)
		this->shrines->callAll(HX_CSTRING("checkActivation"),Dynamic( Array_obj<Dynamic>::__new().Add(::Reg_obj::player).Add(hx::ObjectPtr<OBJ_>(this))),true);
		HX_STACK_LINE(202)
		this->pillars->callAll(HX_CSTRING("checkActivation"),Dynamic( Array_obj<Dynamic>::__new().Add(::Reg_obj::player).Add(hx::ObjectPtr<OBJ_>(this))),true);
		HX_STACK_LINE(205)
		this->mounds->callAll(HX_CSTRING("revealMound"),Dynamic( Array_obj<Dynamic>::__new().Add(::Reg_obj::player).Add(hx::ObjectPtr<OBJ_>(this))),true);
		HX_STACK_LINE(208)
		if ((::flixel::FlxG_obj::keys->checkKeyStatus(Array_obj< ::String >::__new().Add(HX_CSTRING("A")),(int)-1))){
			HX_STACK_LINE(210)
			::haxe::Log_obj::trace(::Reg_obj::player->health,hx::SourceInfo(HX_CSTRING("PlayState.hx"),210,HX_CSTRING("PlayState"),HX_CSTRING("update")));
		}
		HX_STACK_LINE(214)
		if (((  ((::flixel::FlxG_obj::keys->checkKeyStatus(Array_obj< ::String >::__new().Add(HX_CSTRING("C")),(int)1))) ? bool((::Reg_obj::player->faith > (int)1)) : bool(false) ))){
			HX_STACK_LINE(217)
			hx::SubEq(::Reg_obj::player->faith,0.2);
			HX_STACK_LINE(219)
			::flixel::FlxG_obj::sound->play(HX_CSTRING("assets/sound/fire.wav"),0.2,false,null(),null());
			HX_STACK_LINE(221)
			{
				HX_STACK_LINE(221)
				int _g1 = ::Reg_obj::player->facing;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(221)
				switch( (int)(_g1)){
					case (int)1: {
						HX_STACK_LINE(225)
						this->bow->runFire((int)4,(int)0,(int)0,null(),(int)180);
					}
					;break;
					case (int)16: {
						HX_STACK_LINE(230)
						this->bow->runFire((int)4,(int)0,(int)0,null(),(int)0);
					}
					;break;
					case (int)256: {
						HX_STACK_LINE(235)
						this->bow->runFire((int)4,(int)0,(int)0,null(),(int)-90);
					}
					;break;
					case (int)4096: {
						HX_STACK_LINE(239)
						this->bow->runFire((int)4,(int)0,(int)0,null(),(int)90);
					}
					;break;
				}
			}
			HX_STACK_LINE(245)
			::flixel::FlxG_obj::camera->shake(0.005,0.05,null(),null(),null());
		}
		HX_STACK_LINE(254)
		this->super::update();
	}
return null();
}


Void PlayState_obj::collideStuff( ){
{
		HX_STACK_FRAME("PlayState","collideStuff",0xb356e247,"PlayState.collideStuff","PlayState.hx",258,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(259)
		::flixel::FlxG_obj::overlap(::Reg_obj::enemyGroup,::Reg_obj::enemyGroup,::flixel::FlxObject_obj::separate_dyn(),::flixel::FlxObject_obj::separate_dyn());
		HX_STACK_LINE(260)
		::flixel::FlxG_obj::overlap(::Reg_obj::enemyGroup,this->bow->group,this->collideBullet_dyn(),null());
		HX_STACK_LINE(261)
		::flixel::FlxG_obj::overlap(::Reg_obj::player,::Reg_obj::exit,this->fadeOut_dyn(),null());
		HX_STACK_LINE(263)
		if (((::Reg_obj::testmap->collidableTileLayers != null()))){
			HX_STACK_LINE(265)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(265)
			Array< ::Dynamic > _g1 = ::Reg_obj::testmap->collidableTileLayers;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(265)
			while((true)){
				HX_STACK_LINE(265)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(265)
					break;
				}
				HX_STACK_LINE(265)
				::flixel::tile::FlxTilemap map = _g1->__get(_g).StaticCast< ::flixel::tile::FlxTilemap >();		HX_STACK_VAR(map,"map");
				HX_STACK_LINE(265)
				++(_g);
				HX_STACK_LINE(267)
				::flixel::FlxG_obj::overlap(map,::Reg_obj::player,::flixel::FlxObject_obj::separate_dyn(),null());
				HX_STACK_LINE(268)
				::flixel::FlxG_obj::overlap(map,::Reg_obj::enemyGroup,::flixel::FlxObject_obj::separate_dyn(),null());
				HX_STACK_LINE(269)
				::flixel::FlxG_obj::overlap(map,this->bow->group,this->bulletWall_dyn(),::flixel::FlxObject_obj::separate_dyn());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,collideStuff,(void))

Void PlayState_obj::collideBullet( ::Skeleton enemy,::flixel::addons::weapon::FlxBullet bullet){
{
		HX_STACK_FRAME("PlayState","collideBullet",0xfa162f8f,"PlayState.collideBullet","PlayState.hx",275,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_ARG(enemy,"enemy")
		HX_STACK_ARG(bullet,"bullet")
		HX_STACK_LINE(276)
		bullet->kill();
		HX_STACK_LINE(277)
		hx::SubEq(enemy->health,(int)1);
		HX_STACK_LINE(278)
		if (((enemy->health <= (int)0))){
			HX_STACK_LINE(280)
			enemy->kill();
			HX_STACK_LINE(281)
			hx::AddEq(::Reg_obj::score,(int)5);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PlayState_obj,collideBullet,(void))

Void PlayState_obj::bulletWall( Dynamic map,::flixel::addons::weapon::FlxBullet bullet){
{
		HX_STACK_FRAME("PlayState","bulletWall",0xa397d9dd,"PlayState.bulletWall","PlayState.hx",287,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_ARG(map,"map")
		HX_STACK_ARG(bullet,"bullet")
		HX_STACK_LINE(287)
		bullet->kill();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PlayState_obj,bulletWall,(void))

Void PlayState_obj::fadeOut( ::Character p,::flixel::FlxSprite e){
{
		HX_STACK_FRAME("PlayState","fadeOut",0x7b7d6261,"PlayState.fadeOut","PlayState.hx",292,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p,"p")
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(292)
		::flixel::FlxG_obj::camera->fade((int)-16777216,(int)3,false,this->goToMenu_dyn(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PlayState_obj,fadeOut,(void))

Void PlayState_obj::fadeIn( ){
{
		HX_STACK_FRAME("PlayState","fadeIn",0xeabdf572,"PlayState.fadeIn","PlayState.hx",297,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(297)
		::flixel::FlxG_obj::camera->fade((int)-16777216,(int)3,true,null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,fadeIn,(void))

Void PlayState_obj::goToMenu( ){
{
		HX_STACK_FRAME("PlayState","goToMenu",0x6c851433,"PlayState.goToMenu","PlayState.hx",302,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(302)
		::flixel::FlxState State = ::MenuState_obj::__new(null());		HX_STACK_VAR(State,"State");
		HX_STACK_LINE(302)
		::flixel::FlxG_obj::game->_requestedState = State;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,goToMenu,(void))


PlayState_obj::PlayState_obj()
{
}

void PlayState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayState);
	HX_MARK_MEMBER_NAME(shrines,"shrines");
	HX_MARK_MEMBER_NAME(shrubs,"shrubs");
	HX_MARK_MEMBER_NAME(pillars,"pillars");
	HX_MARK_MEMBER_NAME(mounds,"mounds");
	HX_MARK_MEMBER_NAME(arrows,"arrows");
	HX_MARK_MEMBER_NAME(faithBar,"faithBar");
	HX_MARK_MEMBER_NAME(faithMeter,"faithMeter");
	HX_MARK_MEMBER_NAME(overlay,"overlay");
	HX_MARK_MEMBER_NAME(healthMeter,"healthMeter");
	HX_MARK_MEMBER_NAME(scoreText,"scoreText");
	HX_MARK_MEMBER_NAME(player,"player");
	HX_MARK_MEMBER_NAME(floor,"floor");
	HX_MARK_MEMBER_NAME(exit,"exit");
	HX_MARK_MEMBER_NAME(world,"world");
	HX_MARK_MEMBER_NAME(bow,"bow");
	HX_MARK_MEMBER_NAME(bulletType,"bulletType");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlayState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shrines,"shrines");
	HX_VISIT_MEMBER_NAME(shrubs,"shrubs");
	HX_VISIT_MEMBER_NAME(pillars,"pillars");
	HX_VISIT_MEMBER_NAME(mounds,"mounds");
	HX_VISIT_MEMBER_NAME(arrows,"arrows");
	HX_VISIT_MEMBER_NAME(faithBar,"faithBar");
	HX_VISIT_MEMBER_NAME(faithMeter,"faithMeter");
	HX_VISIT_MEMBER_NAME(overlay,"overlay");
	HX_VISIT_MEMBER_NAME(healthMeter,"healthMeter");
	HX_VISIT_MEMBER_NAME(scoreText,"scoreText");
	HX_VISIT_MEMBER_NAME(player,"player");
	HX_VISIT_MEMBER_NAME(floor,"floor");
	HX_VISIT_MEMBER_NAME(exit,"exit");
	HX_VISIT_MEMBER_NAME(world,"world");
	HX_VISIT_MEMBER_NAME(bow,"bow");
	HX_VISIT_MEMBER_NAME(bulletType,"bulletType");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PlayState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"bow") ) { return bow; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"exit") ) { return exit; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"floor") ) { return floor; }
		if (HX_FIELD_EQ(inName,"world") ) { return world; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shrubs") ) { return shrubs; }
		if (HX_FIELD_EQ(inName,"mounds") ) { return mounds; }
		if (HX_FIELD_EQ(inName,"arrows") ) { return arrows; }
		if (HX_FIELD_EQ(inName,"player") ) { return player; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"fadeIn") ) { return fadeIn_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"shrines") ) { return shrines; }
		if (HX_FIELD_EQ(inName,"pillars") ) { return pillars; }
		if (HX_FIELD_EQ(inName,"overlay") ) { return overlay; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"fadeOut") ) { return fadeOut_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"faithBar") ) { return faithBar; }
		if (HX_FIELD_EQ(inName,"goToMenu") ) { return goToMenu_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"scoreText") ) { return scoreText; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"faithMeter") ) { return faithMeter; }
		if (HX_FIELD_EQ(inName,"bulletType") ) { return bulletType; }
		if (HX_FIELD_EQ(inName,"bulletWall") ) { return bulletWall_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"healthMeter") ) { return healthMeter; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"collideStuff") ) { return collideStuff_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"collideBullet") ) { return collideBullet_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PlayState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"bow") ) { bow=inValue.Cast< ::flixel::addons::weapon::FlxWeapon >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"exit") ) { exit=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"floor") ) { floor=inValue.Cast< ::flixel::FlxObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"world") ) { world=inValue.Cast< ::flixel::util::FlxRect >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shrubs") ) { shrubs=inValue.Cast< ::flixel::group::FlxGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mounds") ) { mounds=inValue.Cast< ::flixel::group::FlxGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"arrows") ) { arrows=inValue.Cast< ::flixel::group::FlxGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"player") ) { player=inValue.Cast< ::Character >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"shrines") ) { shrines=inValue.Cast< ::flixel::group::FlxGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pillars") ) { pillars=inValue.Cast< ::flixel::group::FlxGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"overlay") ) { overlay=inValue.Cast< ::UI >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"faithBar") ) { faithBar=inValue.Cast< ::flixel::group::FlxGroup >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"scoreText") ) { scoreText=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"faithMeter") ) { faithMeter=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bulletType") ) { bulletType=inValue.Cast< ::flixel::addons::weapon::FlxBullet >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"healthMeter") ) { healthMeter=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlayState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("shrines"));
	outFields->push(HX_CSTRING("shrubs"));
	outFields->push(HX_CSTRING("pillars"));
	outFields->push(HX_CSTRING("mounds"));
	outFields->push(HX_CSTRING("arrows"));
	outFields->push(HX_CSTRING("faithBar"));
	outFields->push(HX_CSTRING("faithMeter"));
	outFields->push(HX_CSTRING("overlay"));
	outFields->push(HX_CSTRING("healthMeter"));
	outFields->push(HX_CSTRING("scoreText"));
	outFields->push(HX_CSTRING("player"));
	outFields->push(HX_CSTRING("floor"));
	outFields->push(HX_CSTRING("exit"));
	outFields->push(HX_CSTRING("world"));
	outFields->push(HX_CSTRING("bow"));
	outFields->push(HX_CSTRING("bulletType"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::group::FlxGroup*/ ,(int)offsetof(PlayState_obj,shrines),HX_CSTRING("shrines")},
	{hx::fsObject /*::flixel::group::FlxGroup*/ ,(int)offsetof(PlayState_obj,shrubs),HX_CSTRING("shrubs")},
	{hx::fsObject /*::flixel::group::FlxGroup*/ ,(int)offsetof(PlayState_obj,pillars),HX_CSTRING("pillars")},
	{hx::fsObject /*::flixel::group::FlxGroup*/ ,(int)offsetof(PlayState_obj,mounds),HX_CSTRING("mounds")},
	{hx::fsObject /*::flixel::group::FlxGroup*/ ,(int)offsetof(PlayState_obj,arrows),HX_CSTRING("arrows")},
	{hx::fsObject /*::flixel::group::FlxGroup*/ ,(int)offsetof(PlayState_obj,faithBar),HX_CSTRING("faithBar")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(PlayState_obj,faithMeter),HX_CSTRING("faithMeter")},
	{hx::fsObject /*::UI*/ ,(int)offsetof(PlayState_obj,overlay),HX_CSTRING("overlay")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(PlayState_obj,healthMeter),HX_CSTRING("healthMeter")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(PlayState_obj,scoreText),HX_CSTRING("scoreText")},
	{hx::fsObject /*::Character*/ ,(int)offsetof(PlayState_obj,player),HX_CSTRING("player")},
	{hx::fsObject /*::flixel::FlxObject*/ ,(int)offsetof(PlayState_obj,floor),HX_CSTRING("floor")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(PlayState_obj,exit),HX_CSTRING("exit")},
	{hx::fsObject /*::flixel::util::FlxRect*/ ,(int)offsetof(PlayState_obj,world),HX_CSTRING("world")},
	{hx::fsObject /*::flixel::addons::weapon::FlxWeapon*/ ,(int)offsetof(PlayState_obj,bow),HX_CSTRING("bow")},
	{hx::fsObject /*::flixel::addons::weapon::FlxBullet*/ ,(int)offsetof(PlayState_obj,bulletType),HX_CSTRING("bulletType")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("shrines"),
	HX_CSTRING("shrubs"),
	HX_CSTRING("pillars"),
	HX_CSTRING("mounds"),
	HX_CSTRING("arrows"),
	HX_CSTRING("faithBar"),
	HX_CSTRING("faithMeter"),
	HX_CSTRING("overlay"),
	HX_CSTRING("healthMeter"),
	HX_CSTRING("scoreText"),
	HX_CSTRING("player"),
	HX_CSTRING("floor"),
	HX_CSTRING("exit"),
	HX_CSTRING("world"),
	HX_CSTRING("bow"),
	HX_CSTRING("bulletType"),
	HX_CSTRING("create"),
	HX_CSTRING("destroy"),
	HX_CSTRING("update"),
	HX_CSTRING("collideStuff"),
	HX_CSTRING("collideBullet"),
	HX_CSTRING("bulletWall"),
	HX_CSTRING("fadeOut"),
	HX_CSTRING("fadeIn"),
	HX_CSTRING("goToMenu"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
};

#endif

Class PlayState_obj::__mClass;

void PlayState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("PlayState"), hx::TCanCast< PlayState_obj> ,sStaticFields,sMemberFields,
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

void PlayState_obj::__boot()
{
}

