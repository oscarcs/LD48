#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_media_Sound
#include <flash/media/Sound.h>
#endif
#ifndef INCLUDED_flash_media_SoundTransform
#include <flash/media/SoundTransform.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
namespace flixel{
namespace system{
namespace frontEnds{

Void SoundFrontEnd_obj::__construct()
{
HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","new",0x71610699,"flixel.system.frontEnds.SoundFrontEnd.new","flixel/system/frontEnds/SoundFrontEnd.hx",14,0x9ba4fb18)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(61)
	this->volume = (int)1;
	HX_STACK_LINE(52)
	this->soundTrayEnabled = true;
	HX_STACK_LINE(23)
	this->muted = false;
	HX_STACK_LINE(260)
	this->volumeUpKeys = Array_obj< ::String >::__new().Add(HX_CSTRING("PLUS")).Add(HX_CSTRING("NUMPADPLUS"));
	HX_STACK_LINE(261)
	this->volumeDownKeys = Array_obj< ::String >::__new().Add(HX_CSTRING("MINUS")).Add(HX_CSTRING("NUMPADMINUS"));
	HX_STACK_LINE(262)
	this->muteKeys = Array_obj< ::String >::__new().Add(HX_CSTRING("ZERO")).Add(HX_CSTRING("NUMPADZERO"));
	HX_STACK_LINE(265)
	::flixel::group::FlxTypedGroup _g = ::flixel::group::FlxTypedGroup_obj::__new(null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(265)
	this->list = _g;
	HX_STACK_LINE(266)
	::haxe::ds::StringMap _g1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(266)
	this->_soundCache = _g1;
	HX_STACK_LINE(267)
	::flash::media::SoundTransform _g2 = ::flash::media::SoundTransform_obj::__new(null(),null());		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(267)
	this->_soundTransform = _g2;
}
;
	return null();
}

//SoundFrontEnd_obj::~SoundFrontEnd_obj() { }

Dynamic SoundFrontEnd_obj::__CreateEmpty() { return  new SoundFrontEnd_obj; }
hx::ObjectPtr< SoundFrontEnd_obj > SoundFrontEnd_obj::__new()
{  hx::ObjectPtr< SoundFrontEnd_obj > result = new SoundFrontEnd_obj();
	result->__construct();
	return result;}

Dynamic SoundFrontEnd_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SoundFrontEnd_obj > result = new SoundFrontEnd_obj();
	result->__construct();
	return result;}

Void SoundFrontEnd_obj::playMusic( Dynamic Music,hx::Null< Float >  __o_Volume,hx::Null< bool >  __o_Looped){
Float Volume = __o_Volume.Default(1);
bool Looped = __o_Looped.Default(true);
	HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","playMusic",0x3360250a,"flixel.system.frontEnds.SoundFrontEnd.playMusic","flixel/system/frontEnds/SoundFrontEnd.hx",74,0x9ba4fb18)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Music,"Music")
	HX_STACK_ARG(Volume,"Volume")
	HX_STACK_ARG(Looped,"Looped")
{
		HX_STACK_LINE(75)
		if (((this->music == null()))){
			HX_STACK_LINE(77)
			::flixel::system::FlxSound _g = ::flixel::system::FlxSound_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(77)
			this->music = _g;
		}
		else{
			HX_STACK_LINE(79)
			if ((this->music->active)){
				HX_STACK_LINE(81)
				::flixel::system::FlxSound _this = this->music;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(81)
				_this->cleanup(_this->autoDestroy,true,true);
				HX_STACK_LINE(81)
				_this;
			}
		}
		HX_STACK_LINE(84)
		this->music->loadEmbedded(Music,Looped,null(),null());
		HX_STACK_LINE(85)
		this->music->set_volume(Volume);
		HX_STACK_LINE(86)
		this->music->persist = true;
		HX_STACK_LINE(87)
		this->music->play(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(SoundFrontEnd_obj,playMusic,(void))

::flixel::system::FlxSound SoundFrontEnd_obj::load( Dynamic EmbeddedSound,hx::Null< Float >  __o_Volume,hx::Null< bool >  __o_Looped,hx::Null< bool >  __o_AutoDestroy,hx::Null< bool >  __o_AutoPlay,::String URL,Dynamic OnComplete){
Float Volume = __o_Volume.Default(1);
bool Looped = __o_Looped.Default(false);
bool AutoDestroy = __o_AutoDestroy.Default(false);
bool AutoPlay = __o_AutoPlay.Default(false);
	HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","load",0xc239d5cd,"flixel.system.frontEnds.SoundFrontEnd.load","flixel/system/frontEnds/SoundFrontEnd.hx",102,0x9ba4fb18)
	HX_STACK_THIS(this)
	HX_STACK_ARG(EmbeddedSound,"EmbeddedSound")
	HX_STACK_ARG(Volume,"Volume")
	HX_STACK_ARG(Looped,"Looped")
	HX_STACK_ARG(AutoDestroy,"AutoDestroy")
	HX_STACK_ARG(AutoPlay,"AutoPlay")
	HX_STACK_ARG(URL,"URL")
	HX_STACK_ARG(OnComplete,"OnComplete")
{
		HX_STACK_LINE(103)
		if (((bool((EmbeddedSound == null())) && bool((URL == null()))))){
			HX_STACK_LINE(106)
			return null();
		}
		HX_STACK_LINE(109)
		::flixel::system::FlxSound sound = this->list->recycle(hx::ClassOf< ::flixel::system::FlxSound >(),null(),null(),null());		HX_STACK_VAR(sound,"sound");
		HX_STACK_LINE(111)
		if (((EmbeddedSound != null()))){
			HX_STACK_LINE(113)
			sound->loadEmbedded(EmbeddedSound,Looped,AutoDestroy,OnComplete);
		}
		else{
			HX_STACK_LINE(117)
			sound->loadStream(URL,Looped,AutoDestroy,OnComplete);
		}
		HX_STACK_LINE(120)
		sound->set_volume(Volume);
		HX_STACK_LINE(122)
		if ((AutoPlay)){
			HX_STACK_LINE(124)
			sound->play(null());
		}
		HX_STACK_LINE(127)
		return sound;
	}
}


HX_DEFINE_DYNAMIC_FUNC7(SoundFrontEnd_obj,load,return )

::flash::media::Sound SoundFrontEnd_obj::cache( ::String EmbeddedSound){
	HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","cache",0xf88690bb,"flixel.system.frontEnds.SoundFrontEnd.cache","flixel/system/frontEnds/SoundFrontEnd.hx",139,0x9ba4fb18)
	HX_STACK_THIS(this)
	HX_STACK_ARG(EmbeddedSound,"EmbeddedSound")
	HX_STACK_LINE(139)
	if ((this->_soundCache->exists(EmbeddedSound))){
		HX_STACK_LINE(141)
		return this->_soundCache->get(EmbeddedSound);
	}
	else{
		HX_STACK_LINE(145)
		::flash::media::Sound sound = ::openfl::Assets_obj::getSound(EmbeddedSound,null());		HX_STACK_VAR(sound,"sound");
		HX_STACK_LINE(146)
		this->_soundCache->set(EmbeddedSound,sound);
		HX_STACK_LINE(148)
		return sound;
	}
	HX_STACK_LINE(139)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SoundFrontEnd_obj,cache,return )

::flixel::system::FlxSound SoundFrontEnd_obj::play( ::String EmbeddedSound,hx::Null< Float >  __o_Volume,hx::Null< bool >  __o_Looped,hx::Null< bool >  __o_AutoDestroy,Dynamic OnComplete){
Float Volume = __o_Volume.Default(1);
bool Looped = __o_Looped.Default(false);
bool AutoDestroy = __o_AutoDestroy.Default(true);
	HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","play",0xc4dc699b,"flixel.system.frontEnds.SoundFrontEnd.play","flixel/system/frontEnds/SoundFrontEnd.hx",162,0x9ba4fb18)
	HX_STACK_THIS(this)
	HX_STACK_ARG(EmbeddedSound,"EmbeddedSound")
	HX_STACK_ARG(Volume,"Volume")
	HX_STACK_ARG(Looped,"Looped")
	HX_STACK_ARG(AutoDestroy,"AutoDestroy")
	HX_STACK_ARG(OnComplete,"OnComplete")
{
		HX_STACK_LINE(163)
		::flash::media::Sound sound = null();		HX_STACK_VAR(sound,"sound");
		HX_STACK_LINE(165)
		this->_soundTransform->volume = ((((  ((this->muted)) ? int((int)0) : int((int)1) )) * ::flixel::FlxG_obj::sound->volume) * Volume);
		HX_STACK_LINE(166)
		this->_soundTransform->pan = (int)0;
		HX_STACK_LINE(168)
		if ((this->_soundCache->exists(EmbeddedSound))){
			HX_STACK_LINE(170)
			::flash::media::Sound _g = this->_soundCache->get(EmbeddedSound);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(170)
			sound = _g;
		}
		else{
			HX_STACK_LINE(174)
			::flash::media::Sound _g1 = ::openfl::Assets_obj::getSound(EmbeddedSound,null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(174)
			sound = _g1;
			HX_STACK_LINE(175)
			this->_soundCache->set(EmbeddedSound,sound);
		}
		HX_STACK_LINE(177)
		::flixel::system::FlxSound flixelSound = this->list->recycle(hx::ClassOf< ::flixel::system::FlxSound >(),null(),null(),null())->__Field(HX_CSTRING("loadEmbedded"),true)(sound,Looped,AutoDestroy,OnComplete);		HX_STACK_VAR(flixelSound,"flixelSound");
		HX_STACK_LINE(178)
		return flixelSound->play(null());
	}
}


HX_DEFINE_DYNAMIC_FUNC5(SoundFrontEnd_obj,play,return )

::flixel::system::FlxSound SoundFrontEnd_obj::stream( ::String URL,hx::Null< Float >  __o_Volume,hx::Null< bool >  __o_Looped,hx::Null< bool >  __o_AutoDestroy,Dynamic OnComplete){
Float Volume = __o_Volume.Default(1);
bool Looped = __o_Looped.Default(false);
bool AutoDestroy = __o_AutoDestroy.Default(true);
	HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","stream",0xdd72c7e7,"flixel.system.frontEnds.SoundFrontEnd.stream","flixel/system/frontEnds/SoundFrontEnd.hx",193,0x9ba4fb18)
	HX_STACK_THIS(this)
	HX_STACK_ARG(URL,"URL")
	HX_STACK_ARG(Volume,"Volume")
	HX_STACK_ARG(Looped,"Looped")
	HX_STACK_ARG(AutoDestroy,"AutoDestroy")
	HX_STACK_ARG(OnComplete,"OnComplete")
{
		HX_STACK_LINE(193)
		return this->load(null(),Volume,Looped,AutoDestroy,true,URL,OnComplete);
	}
}


HX_DEFINE_DYNAMIC_FUNC5(SoundFrontEnd_obj,stream,return )

Void SoundFrontEnd_obj::pause( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","pause",0x74c9cd6f,"flixel.system.frontEnds.SoundFrontEnd.pause","flixel/system/frontEnds/SoundFrontEnd.hx",200,0x9ba4fb18)
		HX_STACK_THIS(this)
		HX_STACK_LINE(201)
		if (((bool((bool((this->music != null())) && bool(this->music->exists))) && bool(this->music->active)))){
			HX_STACK_LINE(203)
			this->music->pause();
		}
		HX_STACK_LINE(206)
		{
			HX_STACK_LINE(206)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(206)
			Array< ::Dynamic > _g1 = this->list->members;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(206)
			while((true)){
				HX_STACK_LINE(206)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(206)
					break;
				}
				HX_STACK_LINE(206)
				::flixel::system::FlxSound sound = _g1->__get(_g).StaticCast< ::flixel::system::FlxSound >();		HX_STACK_VAR(sound,"sound");
				HX_STACK_LINE(206)
				++(_g);
				HX_STACK_LINE(208)
				if (((bool((bool((sound != null())) && bool(sound->exists))) && bool(sound->active)))){
					HX_STACK_LINE(210)
					sound->pause();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundFrontEnd_obj,pause,(void))

Void SoundFrontEnd_obj::resume( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","resume",0xd4ca1d14,"flixel.system.frontEnds.SoundFrontEnd.resume","flixel/system/frontEnds/SoundFrontEnd.hx",219,0x9ba4fb18)
		HX_STACK_THIS(this)
		HX_STACK_LINE(220)
		if (((bool((this->music != null())) && bool(this->music->exists)))){
			HX_STACK_LINE(222)
			this->music->resume();
		}
		HX_STACK_LINE(225)
		{
			HX_STACK_LINE(225)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(225)
			Array< ::Dynamic > _g1 = this->list->members;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(225)
			while((true)){
				HX_STACK_LINE(225)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(225)
					break;
				}
				HX_STACK_LINE(225)
				::flixel::system::FlxSound sound = _g1->__get(_g).StaticCast< ::flixel::system::FlxSound >();		HX_STACK_VAR(sound,"sound");
				HX_STACK_LINE(225)
				++(_g);
				HX_STACK_LINE(227)
				if (((bool((sound != null())) && bool(sound->exists)))){
					HX_STACK_LINE(229)
					sound->resume();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundFrontEnd_obj,resume,(void))

Void SoundFrontEnd_obj::destroy( hx::Null< bool >  __o_ForceDestroy){
bool ForceDestroy = __o_ForceDestroy.Default(false);
	HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","destroy",0x153d73b3,"flixel.system.frontEnds.SoundFrontEnd.destroy","flixel/system/frontEnds/SoundFrontEnd.hx",240,0x9ba4fb18)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ForceDestroy,"ForceDestroy")
{
		HX_STACK_LINE(241)
		if (((bool((this->music != null())) && bool(((bool(ForceDestroy) || bool(!(this->music->persist)))))))){
			HX_STACK_LINE(243)
			this->music->destroy();
			HX_STACK_LINE(244)
			this->music = null();
		}
		HX_STACK_LINE(247)
		{
			HX_STACK_LINE(247)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(247)
			Array< ::Dynamic > _g1 = this->list->members;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(247)
			while((true)){
				HX_STACK_LINE(247)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(247)
					break;
				}
				HX_STACK_LINE(247)
				::flixel::system::FlxSound sound = _g1->__get(_g).StaticCast< ::flixel::system::FlxSound >();		HX_STACK_VAR(sound,"sound");
				HX_STACK_LINE(247)
				++(_g);
				HX_STACK_LINE(249)
				if (((bool((sound != null())) && bool(((bool(ForceDestroy) || bool(!(sound->persist)))))))){
					HX_STACK_LINE(251)
					sound->destroy();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SoundFrontEnd_obj,destroy,(void))

Void SoundFrontEnd_obj::update( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","update",0x534b3970,"flixel.system.frontEnds.SoundFrontEnd.update","flixel/system/frontEnds/SoundFrontEnd.hx",274,0x9ba4fb18)
		HX_STACK_THIS(this)
		HX_STACK_LINE(275)
		if (((bool((this->music != null())) && bool(this->music->active)))){
			HX_STACK_LINE(277)
			this->music->update();
		}
		HX_STACK_LINE(280)
		if (((bool((this->list != null())) && bool(this->list->active)))){
			HX_STACK_LINE(282)
			this->list->update();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundFrontEnd_obj,update,(void))

Void SoundFrontEnd_obj::onFocusLost( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","onFocusLost",0xeb797bf6,"flixel.system.frontEnds.SoundFrontEnd.onFocusLost","flixel/system/frontEnds/SoundFrontEnd.hx",287,0x9ba4fb18)
		HX_STACK_THIS(this)
		HX_STACK_LINE(288)
		if (((this->music != null()))){
			HX_STACK_LINE(290)
			this->music->onFocusLost();
		}
		HX_STACK_LINE(293)
		{
			HX_STACK_LINE(293)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(293)
			Array< ::Dynamic > _g1 = this->list->members;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(293)
			while((true)){
				HX_STACK_LINE(293)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(293)
					break;
				}
				HX_STACK_LINE(293)
				::flixel::system::FlxSound sound = _g1->__get(_g).StaticCast< ::flixel::system::FlxSound >();		HX_STACK_VAR(sound,"sound");
				HX_STACK_LINE(293)
				++(_g);
				HX_STACK_LINE(295)
				if (((sound != null()))){
					HX_STACK_LINE(297)
					sound->onFocusLost();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundFrontEnd_obj,onFocusLost,(void))

Void SoundFrontEnd_obj::onFocus( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","onFocus",0x8b7e44f2,"flixel.system.frontEnds.SoundFrontEnd.onFocus","flixel/system/frontEnds/SoundFrontEnd.hx",303,0x9ba4fb18)
		HX_STACK_THIS(this)
		HX_STACK_LINE(304)
		if (((this->music != null()))){
			HX_STACK_LINE(306)
			this->music->onFocus();
		}
		HX_STACK_LINE(309)
		{
			HX_STACK_LINE(309)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(309)
			Array< ::Dynamic > _g1 = this->list->members;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(309)
			while((true)){
				HX_STACK_LINE(309)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(309)
					break;
				}
				HX_STACK_LINE(309)
				::flixel::system::FlxSound sound = _g1->__get(_g).StaticCast< ::flixel::system::FlxSound >();		HX_STACK_VAR(sound,"sound");
				HX_STACK_LINE(309)
				++(_g);
				HX_STACK_LINE(311)
				if (((sound != null()))){
					HX_STACK_LINE(313)
					sound->onFocus();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundFrontEnd_obj,onFocus,(void))

Void SoundFrontEnd_obj::loadSavedPrefs( ){
{
		HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","loadSavedPrefs",0xc70de056,"flixel.system.frontEnds.SoundFrontEnd.loadSavedPrefs","flixel/system/frontEnds/SoundFrontEnd.hx",322,0x9ba4fb18)
		HX_STACK_THIS(this)
		HX_STACK_LINE(323)
		if (((::flixel::FlxG_obj::save->data->__Field(HX_CSTRING("volume"),true) != null()))){
			HX_STACK_LINE(325)
			this->set_volume(::flixel::FlxG_obj::save->data->__Field(HX_CSTRING("volume"),true));
		}
		else{
			HX_STACK_LINE(329)
			this->set_volume(0.5);
		}
		HX_STACK_LINE(332)
		if (((::flixel::FlxG_obj::save->data->__Field(HX_CSTRING("mute"),true) != null()))){
			HX_STACK_LINE(334)
			this->muted = ::flixel::FlxG_obj::save->data->__Field(HX_CSTRING("mute"),true);
		}
		else{
			HX_STACK_LINE(338)
			this->muted = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundFrontEnd_obj,loadSavedPrefs,(void))

Float SoundFrontEnd_obj::set_volume( Float Volume){
	HX_STACK_FRAME("flixel.system.frontEnds.SoundFrontEnd","set_volume",0x2e392afe,"flixel.system.frontEnds.SoundFrontEnd.set_volume","flixel/system/frontEnds/SoundFrontEnd.hx",343,0x9ba4fb18)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Volume,"Volume")
	HX_STACK_LINE(344)
	{
		HX_STACK_LINE(344)
		Float lowerBound;		HX_STACK_VAR(lowerBound,"lowerBound");
		HX_STACK_LINE(344)
		if (((Volume < (int)0))){
			HX_STACK_LINE(344)
			lowerBound = (int)0;
		}
		else{
			HX_STACK_LINE(344)
			lowerBound = Volume;
		}
		HX_STACK_LINE(344)
		if (((lowerBound > (int)1))){
			HX_STACK_LINE(344)
			Volume = (int)1;
		}
		else{
			HX_STACK_LINE(344)
			Volume = lowerBound;
		}
	}
	HX_STACK_LINE(346)
	if (((this->volumeHandler_dyn() != null()))){
		HX_STACK_LINE(348)
		Float param;		HX_STACK_VAR(param,"param");
		HX_STACK_LINE(348)
		if ((this->muted)){
			HX_STACK_LINE(348)
			param = (int)0;
		}
		else{
			HX_STACK_LINE(348)
			param = Volume;
		}
		HX_STACK_LINE(349)
		this->volumeHandler(param);
	}
	HX_STACK_LINE(351)
	return this->volume = Volume;
}


HX_DEFINE_DYNAMIC_FUNC1(SoundFrontEnd_obj,set_volume,return )


SoundFrontEnd_obj::SoundFrontEnd_obj()
{
}

void SoundFrontEnd_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SoundFrontEnd);
	HX_MARK_MEMBER_NAME(music,"music");
	HX_MARK_MEMBER_NAME(muted,"muted");
	HX_MARK_MEMBER_NAME(volumeHandler,"volumeHandler");
	HX_MARK_MEMBER_NAME(volumeUpKeys,"volumeUpKeys");
	HX_MARK_MEMBER_NAME(volumeDownKeys,"volumeDownKeys");
	HX_MARK_MEMBER_NAME(muteKeys,"muteKeys");
	HX_MARK_MEMBER_NAME(soundTrayEnabled,"soundTrayEnabled");
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_MEMBER_NAME(volume,"volume");
	HX_MARK_MEMBER_NAME(_soundCache,"_soundCache");
	HX_MARK_MEMBER_NAME(_soundTransform,"_soundTransform");
	HX_MARK_END_CLASS();
}

void SoundFrontEnd_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(music,"music");
	HX_VISIT_MEMBER_NAME(muted,"muted");
	HX_VISIT_MEMBER_NAME(volumeHandler,"volumeHandler");
	HX_VISIT_MEMBER_NAME(volumeUpKeys,"volumeUpKeys");
	HX_VISIT_MEMBER_NAME(volumeDownKeys,"volumeDownKeys");
	HX_VISIT_MEMBER_NAME(muteKeys,"muteKeys");
	HX_VISIT_MEMBER_NAME(soundTrayEnabled,"soundTrayEnabled");
	HX_VISIT_MEMBER_NAME(list,"list");
	HX_VISIT_MEMBER_NAME(volume,"volume");
	HX_VISIT_MEMBER_NAME(_soundCache,"_soundCache");
	HX_VISIT_MEMBER_NAME(_soundTransform,"_soundTransform");
}

Dynamic SoundFrontEnd_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return list; }
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"music") ) { return music; }
		if (HX_FIELD_EQ(inName,"muted") ) { return muted; }
		if (HX_FIELD_EQ(inName,"cache") ) { return cache_dyn(); }
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"volume") ) { return volume; }
		if (HX_FIELD_EQ(inName,"stream") ) { return stream_dyn(); }
		if (HX_FIELD_EQ(inName,"resume") ) { return resume_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"onFocus") ) { return onFocus_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"muteKeys") ) { return muteKeys; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"playMusic") ) { return playMusic_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_volume") ) { return set_volume_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_soundCache") ) { return _soundCache; }
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return onFocusLost_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"volumeUpKeys") ) { return volumeUpKeys; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"volumeHandler") ) { return volumeHandler; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"volumeDownKeys") ) { return volumeDownKeys; }
		if (HX_FIELD_EQ(inName,"loadSavedPrefs") ) { return loadSavedPrefs_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_soundTransform") ) { return _soundTransform; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"soundTrayEnabled") ) { return soundTrayEnabled; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SoundFrontEnd_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast< ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"music") ) { music=inValue.Cast< ::flixel::system::FlxSound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"muted") ) { muted=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"volume") ) { if (inCallProp) return set_volume(inValue);volume=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"muteKeys") ) { muteKeys=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_soundCache") ) { _soundCache=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"volumeUpKeys") ) { volumeUpKeys=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"volumeHandler") ) { volumeHandler=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"volumeDownKeys") ) { volumeDownKeys=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_soundTransform") ) { _soundTransform=inValue.Cast< ::flash::media::SoundTransform >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"soundTrayEnabled") ) { soundTrayEnabled=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SoundFrontEnd_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("music"));
	outFields->push(HX_CSTRING("muted"));
	outFields->push(HX_CSTRING("volumeUpKeys"));
	outFields->push(HX_CSTRING("volumeDownKeys"));
	outFields->push(HX_CSTRING("muteKeys"));
	outFields->push(HX_CSTRING("soundTrayEnabled"));
	outFields->push(HX_CSTRING("list"));
	outFields->push(HX_CSTRING("volume"));
	outFields->push(HX_CSTRING("_soundCache"));
	outFields->push(HX_CSTRING("_soundTransform"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::system::FlxSound*/ ,(int)offsetof(SoundFrontEnd_obj,music),HX_CSTRING("music")},
	{hx::fsBool,(int)offsetof(SoundFrontEnd_obj,muted),HX_CSTRING("muted")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(SoundFrontEnd_obj,volumeHandler),HX_CSTRING("volumeHandler")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(SoundFrontEnd_obj,volumeUpKeys),HX_CSTRING("volumeUpKeys")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(SoundFrontEnd_obj,volumeDownKeys),HX_CSTRING("volumeDownKeys")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(SoundFrontEnd_obj,muteKeys),HX_CSTRING("muteKeys")},
	{hx::fsBool,(int)offsetof(SoundFrontEnd_obj,soundTrayEnabled),HX_CSTRING("soundTrayEnabled")},
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(SoundFrontEnd_obj,list),HX_CSTRING("list")},
	{hx::fsFloat,(int)offsetof(SoundFrontEnd_obj,volume),HX_CSTRING("volume")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(SoundFrontEnd_obj,_soundCache),HX_CSTRING("_soundCache")},
	{hx::fsObject /*::flash::media::SoundTransform*/ ,(int)offsetof(SoundFrontEnd_obj,_soundTransform),HX_CSTRING("_soundTransform")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("music"),
	HX_CSTRING("muted"),
	HX_CSTRING("volumeHandler"),
	HX_CSTRING("volumeUpKeys"),
	HX_CSTRING("volumeDownKeys"),
	HX_CSTRING("muteKeys"),
	HX_CSTRING("soundTrayEnabled"),
	HX_CSTRING("list"),
	HX_CSTRING("volume"),
	HX_CSTRING("_soundCache"),
	HX_CSTRING("_soundTransform"),
	HX_CSTRING("playMusic"),
	HX_CSTRING("load"),
	HX_CSTRING("cache"),
	HX_CSTRING("play"),
	HX_CSTRING("stream"),
	HX_CSTRING("pause"),
	HX_CSTRING("resume"),
	HX_CSTRING("destroy"),
	HX_CSTRING("update"),
	HX_CSTRING("onFocusLost"),
	HX_CSTRING("onFocus"),
	HX_CSTRING("loadSavedPrefs"),
	HX_CSTRING("set_volume"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SoundFrontEnd_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SoundFrontEnd_obj::__mClass,"__mClass");
};

#endif

Class SoundFrontEnd_obj::__mClass;

void SoundFrontEnd_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.frontEnds.SoundFrontEnd"), hx::TCanCast< SoundFrontEnd_obj> ,sStaticFields,sMemberFields,
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

void SoundFrontEnd_obj::__boot()
{
}

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds
