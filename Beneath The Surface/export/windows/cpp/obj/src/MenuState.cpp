#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_MenuState
#include <MenuState.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flash_Lib
#include <flash/Lib.h>
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
#ifndef INCLUDED_flash_net_URLRequest
#include <flash/net/URLRequest.h>
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
#ifndef INCLUDED_flixel_effects_particles_FlxEmitter
#include <flixel/effects/particles/FlxEmitter.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_FlxTypedEmitter
#include <flixel/effects/particles/FlxTypedEmitter.h>
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
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxButton
#include <flixel/ui/FlxButton.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton
#include <flixel/ui/FlxTypedButton.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif

Void MenuState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("MenuState","new",0xe563b1c4,"MenuState.new","MenuState.hx",13,0xdfbcb22c)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(13)
	super::__construct(MaxSize);
}
;
	return null();
}

//MenuState_obj::~MenuState_obj() { }

Dynamic MenuState_obj::__CreateEmpty() { return  new MenuState_obj; }
hx::ObjectPtr< MenuState_obj > MenuState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< MenuState_obj > result = new MenuState_obj();
	result->__construct(MaxSize);
	return result;}

Dynamic MenuState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MenuState_obj > result = new MenuState_obj();
	result->__construct(inArgs[0]);
	return result;}

Void MenuState_obj::create( ){
{
		HX_STACK_FRAME("MenuState","create",0xe57b7c18,"MenuState.create","MenuState.hx",23,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(24)
		int alignX = ::Std_obj::_int((Float(::flixel::FlxG_obj::width) / Float((int)2)));		HX_STACK_VAR(alignX,"alignX");
		HX_STACK_LINE(29)
		::flixel::FlxSprite _g = ::flixel::FlxSprite_obj::__new((int)0,(int)0,HX_CSTRING("assets/images/splash.png"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(29)
		this->splashBackground = _g;
		HX_STACK_LINE(30)
		this->add(this->splashBackground);
		HX_STACK_LINE(34)
		::flixel::text::FlxText _g1 = ::flixel::text::FlxText_obj::__new(alignX,(int)50,(int)0,HX_CSTRING("SUPER ROBO GARDEN ARENA"),(int)30,null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(34)
		this->titleText = _g1;
		HX_STACK_LINE(35)
		Float _g2 = this->titleText->get_width();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(35)
		Float _g3 = (Float(_g2) / Float((int)2));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(35)
		Float _g4 = (alignX - _g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(35)
		this->titleText->set_x(_g4);
		HX_STACK_LINE(36)
		this->titleText->set_alignment(HX_CSTRING("center"));
		HX_STACK_LINE(37)
		this->titleText->set_color((int)-12764621);
		HX_STACK_LINE(38)
		this->add(this->titleText);
		HX_STACK_LINE(41)
		::flixel::effects::particles::FlxEmitter _g5 = ::flixel::effects::particles::FlxEmitter_obj::__new(alignX,((Float(::flixel::FlxG_obj::height) / Float((int)2)) - (int)10),null());		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(41)
		this->parts = _g5;
		HX_STACK_LINE(42)
		Float _g6 = this->parts->get_width();		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(42)
		Float _g7 = (Float(_g6) / Float((int)2));		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(42)
		Float _g8 = (alignX - _g7);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(42)
		this->parts->set_x(_g8);
		HX_STACK_LINE(43)
		this->parts->setSize((int)100,(int)30);
		HX_STACK_LINE(44)
		this->parts->setYSpeed((int)-200,(int)-20);
		HX_STACK_LINE(45)
		this->parts->setRotation((int)-720,(int)720);
		HX_STACK_LINE(46)
		this->parts->set_gravity((int)100);
		HX_STACK_LINE(48)
		this->add(this->parts);
		HX_STACK_LINE(51)
		::flixel::text::FlxText _g9 = ::flixel::text::FlxText_obj::__new((int)1,(this->titleText->x + (int)360),(int)0,HX_CSTRING("C: Shoot, Z:Pray\nMade for Ludum Dare 29 by nxT"),(int)15,null());		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(51)
		this->playText = _g9;
		HX_STACK_LINE(52)
		Float _g10 = this->playText->get_width();		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(52)
		Float _g11 = (Float(_g10) / Float((int)2));		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(52)
		Float _g12 = (alignX - _g11);		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(52)
		this->playText->set_x(_g12);
		HX_STACK_LINE(53)
		this->playText->set_color((int)-12764621);
		HX_STACK_LINE(54)
		this->playText->set_alignment(HX_CSTRING("centre"));
		HX_STACK_LINE(55)
		this->add(this->playText);
		HX_STACK_LINE(58)
		::flixel::ui::FlxButton _g13 = ::flixel::ui::FlxButton_obj::__new((int)1,(this->titleText->x + (int)100),HX_CSTRING(""),this->onPlay_dyn());		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(58)
		this->playButton = _g13;
		HX_STACK_LINE(59)
		this->playButton->loadGraphic(HX_CSTRING("assets/images/play.png"),true,(int)100,(int)50,null(),null());
		HX_STACK_LINE(60)
		this->playButton->set_width((int)100);
		HX_STACK_LINE(61)
		this->playButton->set_height((int)50);
		HX_STACK_LINE(62)
		this->playButton->scale->set_x((int)2);
		HX_STACK_LINE(63)
		this->playButton->scale->set_y((int)2);
		HX_STACK_LINE(64)
		Float _g14 = this->playButton->get_width();		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(64)
		Float _g15 = (Float(_g14) / Float((int)2));		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(64)
		Float _g16 = (alignX - _g15);		HX_STACK_VAR(_g16,"_g16");
		HX_STACK_LINE(64)
		this->playButton->set_x(_g16);
		HX_STACK_LINE(68)
		this->add(this->playButton);
		HX_STACK_LINE(70)
		::flixel::ui::FlxButton _g17 = ::flixel::ui::FlxButton_obj::__new((::flixel::FlxG_obj::width - (int)100),(::flixel::FlxG_obj::height - (int)75),HX_CSTRING(""),this->onTwitter_dyn());		HX_STACK_VAR(_g17,"_g17");
		HX_STACK_LINE(70)
		this->twitterButton = _g17;
		HX_STACK_LINE(71)
		this->twitterButton->loadGraphic(HX_CSTRING("assets/images/twitter.png"),true,(int)100,(int)50,null(),null());
		HX_STACK_LINE(74)
		this->twitterButton->scale->set_x((int)2);
		HX_STACK_LINE(75)
		this->twitterButton->scale->set_y((int)2);
		HX_STACK_LINE(81)
		this->add(this->twitterButton);
		HX_STACK_LINE(85)
		this->super::create();
	}
return null();
}


Void MenuState_obj::destroy( ){
{
		HX_STACK_FRAME("MenuState","destroy",0xf9ac905e,"MenuState.destroy","MenuState.hx",89,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(90)
		this->super::destroy();
		HX_STACK_LINE(91)
		this->parts = null();
		HX_STACK_LINE(92)
		this->titleText = null();
		HX_STACK_LINE(93)
		this->playButton = null();
		HX_STACK_LINE(94)
		this->playText = null();
	}
return null();
}


Void MenuState_obj::update( ){
{
		HX_STACK_FRAME("MenuState","update",0xf0719b25,"MenuState.update","MenuState.hx",99,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(99)
		this->super::update();
	}
return null();
}


Void MenuState_obj::onPlay( ){
{
		HX_STACK_FRAME("MenuState","onPlay",0x56504bcf,"MenuState.onPlay","MenuState.hx",106,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(106)
		this->fadeOut();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MenuState_obj,onPlay,(void))

Void MenuState_obj::onTwitter( ){
{
		HX_STACK_FRAME("MenuState","onTwitter",0x3c058378,"MenuState.onTwitter","MenuState.hx",113,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(113)
		::String prefix = HX_CSTRING("");		HX_STACK_VAR(prefix,"prefix");
		HX_STACK_LINE(113)
		if ((!(::EReg_obj::__new(HX_CSTRING("^https?://"),HX_CSTRING(""))->match(HX_CSTRING("http://twitter.com/ocsims"))))){
			HX_STACK_LINE(113)
			prefix = HX_CSTRING("http://");
		}
		HX_STACK_LINE(113)
		::flash::net::URLRequest _g = ::flash::net::URLRequest_obj::__new((prefix + HX_CSTRING("http://twitter.com/ocsims")));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(113)
		::flash::Lib_obj::getURL(_g,HX_CSTRING("_blank"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MenuState_obj,onTwitter,(void))

Void MenuState_obj::fadeOut( ){
{
		HX_STACK_FRAME("MenuState","fadeOut",0x06629bd6,"MenuState.fadeOut","MenuState.hx",120,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(120)
		::flixel::FlxG_obj::camera->fade((int)-16777216,(int)3,false,this->changeState_dyn(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MenuState_obj,fadeOut,(void))

Void MenuState_obj::changeState( ){
{
		HX_STACK_FRAME("MenuState","changeState",0x497703e5,"MenuState.changeState","MenuState.hx",126,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(126)
		::flixel::FlxState State = ::PlayState_obj::__new(null());		HX_STACK_VAR(State,"State");
		HX_STACK_LINE(126)
		::flixel::FlxG_obj::game->_requestedState = State;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MenuState_obj,changeState,(void))


MenuState_obj::MenuState_obj()
{
}

void MenuState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MenuState);
	HX_MARK_MEMBER_NAME(titleText,"titleText");
	HX_MARK_MEMBER_NAME(parts,"parts");
	HX_MARK_MEMBER_NAME(playButton,"playButton");
	HX_MARK_MEMBER_NAME(playText,"playText");
	HX_MARK_MEMBER_NAME(twitterButton,"twitterButton");
	HX_MARK_MEMBER_NAME(splashBackground,"splashBackground");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MenuState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(titleText,"titleText");
	HX_VISIT_MEMBER_NAME(parts,"parts");
	HX_VISIT_MEMBER_NAME(playButton,"playButton");
	HX_VISIT_MEMBER_NAME(playText,"playText");
	HX_VISIT_MEMBER_NAME(twitterButton,"twitterButton");
	HX_VISIT_MEMBER_NAME(splashBackground,"splashBackground");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic MenuState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"parts") ) { return parts; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"onPlay") ) { return onPlay_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"fadeOut") ) { return fadeOut_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"playText") ) { return playText; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"titleText") ) { return titleText; }
		if (HX_FIELD_EQ(inName,"onTwitter") ) { return onTwitter_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"playButton") ) { return playButton; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"changeState") ) { return changeState_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"twitterButton") ) { return twitterButton; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"splashBackground") ) { return splashBackground; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MenuState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"parts") ) { parts=inValue.Cast< ::flixel::effects::particles::FlxEmitter >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"playText") ) { playText=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"titleText") ) { titleText=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"playButton") ) { playButton=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"twitterButton") ) { twitterButton=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"splashBackground") ) { splashBackground=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MenuState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("titleText"));
	outFields->push(HX_CSTRING("parts"));
	outFields->push(HX_CSTRING("playButton"));
	outFields->push(HX_CSTRING("playText"));
	outFields->push(HX_CSTRING("twitterButton"));
	outFields->push(HX_CSTRING("splashBackground"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(MenuState_obj,titleText),HX_CSTRING("titleText")},
	{hx::fsObject /*::flixel::effects::particles::FlxEmitter*/ ,(int)offsetof(MenuState_obj,parts),HX_CSTRING("parts")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(MenuState_obj,playButton),HX_CSTRING("playButton")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(MenuState_obj,playText),HX_CSTRING("playText")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(MenuState_obj,twitterButton),HX_CSTRING("twitterButton")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(MenuState_obj,splashBackground),HX_CSTRING("splashBackground")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("titleText"),
	HX_CSTRING("parts"),
	HX_CSTRING("playButton"),
	HX_CSTRING("playText"),
	HX_CSTRING("twitterButton"),
	HX_CSTRING("splashBackground"),
	HX_CSTRING("create"),
	HX_CSTRING("destroy"),
	HX_CSTRING("update"),
	HX_CSTRING("onPlay"),
	HX_CSTRING("onTwitter"),
	HX_CSTRING("fadeOut"),
	HX_CSTRING("changeState"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MenuState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MenuState_obj::__mClass,"__mClass");
};

#endif

Class MenuState_obj::__mClass;

void MenuState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("MenuState"), hx::TCanCast< MenuState_obj> ,sStaticFields,sMemberFields,
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

void MenuState_obj::__boot()
{
}

