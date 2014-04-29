#include <hxcpp.h>

#ifndef INCLUDED_Character
#include <Character.h>
#endif
#ifndef INCLUDED_Reg
#include <Reg.h>
#endif
#ifndef INCLUDED_TiledLevel
#include <TiledLevel.h>
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
#ifndef INCLUDED_flixel_addons_display_FlxExtendedSprite
#include <flixel/addons/display/FlxExtendedSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledMap
#include <flixel/addons/editors/tiled/TiledMap.h>
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
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif

Void Reg_obj::__construct()
{
	return null();
}

//Reg_obj::~Reg_obj() { }

Dynamic Reg_obj::__CreateEmpty() { return  new Reg_obj; }
hx::ObjectPtr< Reg_obj > Reg_obj::__new()
{  hx::ObjectPtr< Reg_obj > result = new Reg_obj();
	result->__construct();
	return result;}

Dynamic Reg_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Reg_obj > result = new Reg_obj();
	result->__construct();
	return result;}

::String Reg_obj::titleParts;

::Character Reg_obj::player;

Float Reg_obj::zoomLevel;

::flixel::group::FlxGroup Reg_obj::enemyGroup;

::TiledLevel Reg_obj::testmap;

::flixel::FlxSprite Reg_obj::exit;

Dynamic Reg_obj::levels;

int Reg_obj::level;

Dynamic Reg_obj::scores;

int Reg_obj::score;

Array< ::Dynamic > Reg_obj::saves;


Reg_obj::Reg_obj()
{
}

Dynamic Reg_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"exit") ) { return exit; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"level") ) { return level; }
		if (HX_FIELD_EQ(inName,"score") ) { return score; }
		if (HX_FIELD_EQ(inName,"saves") ) { return saves; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { return player; }
		if (HX_FIELD_EQ(inName,"levels") ) { return levels; }
		if (HX_FIELD_EQ(inName,"scores") ) { return scores; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"testmap") ) { return testmap; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zoomLevel") ) { return zoomLevel; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"enemyGroup") ) { return enemyGroup; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Reg_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"exit") ) { exit=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"level") ) { level=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"score") ) { score=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"saves") ) { saves=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { player=inValue.Cast< ::Character >(); return inValue; }
		if (HX_FIELD_EQ(inName,"levels") ) { levels=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scores") ) { scores=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"testmap") ) { testmap=inValue.Cast< ::TiledLevel >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zoomLevel") ) { zoomLevel=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"enemyGroup") ) { enemyGroup=inValue.Cast< ::flixel::group::FlxGroup >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Reg_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("titleParts"),
	HX_CSTRING("player"),
	HX_CSTRING("zoomLevel"),
	HX_CSTRING("enemyGroup"),
	HX_CSTRING("testmap"),
	HX_CSTRING("exit"),
	HX_CSTRING("levels"),
	HX_CSTRING("level"),
	HX_CSTRING("scores"),
	HX_CSTRING("score"),
	HX_CSTRING("saves"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Reg_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Reg_obj::titleParts,"titleParts");
	HX_MARK_MEMBER_NAME(Reg_obj::player,"player");
	HX_MARK_MEMBER_NAME(Reg_obj::zoomLevel,"zoomLevel");
	HX_MARK_MEMBER_NAME(Reg_obj::enemyGroup,"enemyGroup");
	HX_MARK_MEMBER_NAME(Reg_obj::testmap,"testmap");
	HX_MARK_MEMBER_NAME(Reg_obj::exit,"exit");
	HX_MARK_MEMBER_NAME(Reg_obj::levels,"levels");
	HX_MARK_MEMBER_NAME(Reg_obj::level,"level");
	HX_MARK_MEMBER_NAME(Reg_obj::scores,"scores");
	HX_MARK_MEMBER_NAME(Reg_obj::score,"score");
	HX_MARK_MEMBER_NAME(Reg_obj::saves,"saves");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Reg_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Reg_obj::titleParts,"titleParts");
	HX_VISIT_MEMBER_NAME(Reg_obj::player,"player");
	HX_VISIT_MEMBER_NAME(Reg_obj::zoomLevel,"zoomLevel");
	HX_VISIT_MEMBER_NAME(Reg_obj::enemyGroup,"enemyGroup");
	HX_VISIT_MEMBER_NAME(Reg_obj::testmap,"testmap");
	HX_VISIT_MEMBER_NAME(Reg_obj::exit,"exit");
	HX_VISIT_MEMBER_NAME(Reg_obj::levels,"levels");
	HX_VISIT_MEMBER_NAME(Reg_obj::level,"level");
	HX_VISIT_MEMBER_NAME(Reg_obj::scores,"scores");
	HX_VISIT_MEMBER_NAME(Reg_obj::score,"score");
	HX_VISIT_MEMBER_NAME(Reg_obj::saves,"saves");
};

#endif

Class Reg_obj::__mClass;

void Reg_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Reg"), hx::TCanCast< Reg_obj> ,sStaticFields,sMemberFields,
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

void Reg_obj::__boot()
{
	titleParts= HX_CSTRING("assets/images/titleParts.png");
	zoomLevel= (int)2;
	levels= Dynamic( Array_obj<Dynamic>::__new());
	level= (int)0;
	scores= Dynamic( Array_obj<Dynamic>::__new());
	score= (int)0;
	saves= Array_obj< ::Dynamic >::__new();
}

