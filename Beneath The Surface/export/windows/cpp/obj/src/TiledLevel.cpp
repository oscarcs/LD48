#include <hxcpp.h>

#ifndef INCLUDED_Character
#include <Character.h>
#endif
#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Mound
#include <Mound.h>
#endif
#ifndef INCLUDED_Pillar
#include <Pillar.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Reg
#include <Reg.h>
#endif
#ifndef INCLUDED_Shrine
#include <Shrine.h>
#endif
#ifndef INCLUDED_Shrub
#include <Shrub.h>
#endif
#ifndef INCLUDED_TiledLevel
#include <TiledLevel.h>
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
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_display_FlxExtendedSprite
#include <flixel/addons/display/FlxExtendedSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledLayer
#include <flixel/addons/editors/tiled/TiledLayer.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledMap
#include <flixel/addons/editors/tiled/TiledMap.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledObject
#include <flixel/addons/editors/tiled/TiledObject.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledObjectGroup
#include <flixel/addons/editors/tiled/TiledObjectGroup.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledPropertySet
#include <flixel/addons/editors/tiled/TiledPropertySet.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledTileSet
#include <flixel/addons/editors/tiled/TiledTileSet.h>
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
#ifndef INCLUDED_flixel_tile_FlxTilemap
#include <flixel/tile/FlxTilemap.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif

Void TiledLevel_obj::__construct(Dynamic tiledLevel)
{
HX_STACK_FRAME("TiledLevel","new",0x39f0e040,"TiledLevel.new","TiledLevel.hx",34,0x7c3de730)
HX_STACK_THIS(this)
HX_STACK_ARG(tiledLevel,"tiledLevel")
{
	HX_STACK_LINE(35)
	super::__construct(tiledLevel);
	HX_STACK_LINE(37)
	::flixel::group::FlxGroup _g = ::flixel::group::FlxGroup_obj::__new(null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(37)
	this->foregroundTiles = _g;
	HX_STACK_LINE(38)
	::flixel::group::FlxGroup _g1 = ::flixel::group::FlxGroup_obj::__new(null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(38)
	this->backgroundTiles = _g1;
	HX_STACK_LINE(44)
	{
		HX_STACK_LINE(44)
		int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(44)
		Array< ::Dynamic > _g11 = this->layers;		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(44)
		while((true)){
			HX_STACK_LINE(44)
			if ((!(((_g2 < _g11->length))))){
				HX_STACK_LINE(44)
				break;
			}
			HX_STACK_LINE(44)
			::flixel::addons::editors::tiled::TiledLayer tileLayer = _g11->__get(_g2).StaticCast< ::flixel::addons::editors::tiled::TiledLayer >();		HX_STACK_VAR(tileLayer,"tileLayer");
			HX_STACK_LINE(44)
			++(_g2);
			HX_STACK_LINE(46)
			::String tileSheetName = tileLayer->properties->keys->get(HX_CSTRING("tileset"));		HX_STACK_VAR(tileSheetName,"tileSheetName");
			HX_STACK_LINE(48)
			if (((tileSheetName == null()))){
				HX_STACK_LINE(50)
				::haxe::Log_obj::trace(((HX_CSTRING("'tileset' property not defined for the '") + tileLayer->name) + HX_CSTRING("' layer.")),hx::SourceInfo(HX_CSTRING("TiledLevel.hx"),50,HX_CSTRING("TiledLevel"),HX_CSTRING("new")));
			}
			HX_STACK_LINE(53)
			::flixel::addons::editors::tiled::TiledTileSet tileSet = null();		HX_STACK_VAR(tileSet,"tileSet");
			HX_STACK_LINE(54)
			for(::cpp::FastIterator_obj< ::flixel::addons::editors::tiled::TiledTileSet > *__it = ::cpp::CreateFastIterator< ::flixel::addons::editors::tiled::TiledTileSet >(this->tilesets->iterator());  __it->hasNext(); ){
				::flixel::addons::editors::tiled::TiledTileSet ts = __it->next();
				if (((ts->name == tileSheetName))){
					HX_STACK_LINE(58)
					tileSet = ts;
					HX_STACK_LINE(59)
					break;
				}
;
			}
			HX_STACK_LINE(63)
			if (((tileSet == null()))){
				HX_STACK_LINE(65)
				::haxe::Log_obj::trace((((HX_CSTRING("Tileset '") + tileSheetName) + HX_CSTRING(" not found. Check ")) + tileLayer->name),hx::SourceInfo(HX_CSTRING("TiledLevel.hx"),65,HX_CSTRING("TiledLevel"),HX_CSTRING("new")));
			}
			HX_STACK_LINE(68)
			::haxe::io::Path imagePath = ::haxe::io::Path_obj::__new(tileSet->imageSource);		HX_STACK_VAR(imagePath,"imagePath");
			HX_STACK_LINE(69)
			::String processedPath = (((HX_CSTRING("assets/data/") + imagePath->file) + HX_CSTRING(".")) + imagePath->ext);		HX_STACK_VAR(processedPath,"processedPath");
			HX_STACK_LINE(71)
			::flixel::tile::FlxTilemap tilemap = ::flixel::tile::FlxTilemap_obj::__new();		HX_STACK_VAR(tilemap,"tilemap");
			HX_STACK_LINE(72)
			tilemap->widthInTiles = this->width;
			HX_STACK_LINE(73)
			tilemap->heightInTiles = this->height;
			HX_STACK_LINE(74)
			Array< int > _g21 = tileLayer->get_tileArray();		HX_STACK_VAR(_g21,"_g21");
			HX_STACK_LINE(74)
			tilemap->loadMap(_g21,processedPath,tileSet->tileWidth,tileSet->tileHeight,(int)0,(int)1,(int)1,(int)1);
			HX_STACK_LINE(76)
			if ((tileLayer->properties->keys->exists(HX_CSTRING("nocollide")))){
				HX_STACK_LINE(78)
				this->backgroundTiles->add(tilemap);
			}
			else{
				HX_STACK_LINE(82)
				if (((this->collidableTileLayers == null()))){
					HX_STACK_LINE(83)
					Array< ::Dynamic > _g3 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(83)
					this->collidableTileLayers = _g3;
				}
				HX_STACK_LINE(85)
				this->enemyCollision = tilemap;
				HX_STACK_LINE(87)
				this->foregroundTiles->add(tilemap);
				HX_STACK_LINE(88)
				this->collidableTileLayers->push(tilemap);
			}
		}
	}
}
;
	return null();
}

//TiledLevel_obj::~TiledLevel_obj() { }

Dynamic TiledLevel_obj::__CreateEmpty() { return  new TiledLevel_obj; }
hx::ObjectPtr< TiledLevel_obj > TiledLevel_obj::__new(Dynamic tiledLevel)
{  hx::ObjectPtr< TiledLevel_obj > result = new TiledLevel_obj();
	result->__construct(tiledLevel);
	return result;}

Dynamic TiledLevel_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TiledLevel_obj > result = new TiledLevel_obj();
	result->__construct(inArgs[0]);
	return result;}

Void TiledLevel_obj::loadObjects( ::PlayState state){
{
		HX_STACK_FRAME("TiledLevel","loadObjects",0xa9ed172e,"TiledLevel.loadObjects","TiledLevel.hx",96,0x7c3de730)
		HX_STACK_THIS(this)
		HX_STACK_ARG(state,"state")
		HX_STACK_LINE(96)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(96)
		Array< ::Dynamic > _g1 = this->objectGroups;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(96)
		while((true)){
			HX_STACK_LINE(96)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(96)
				break;
			}
			HX_STACK_LINE(96)
			::flixel::addons::editors::tiled::TiledObjectGroup group = _g1->__get(_g).StaticCast< ::flixel::addons::editors::tiled::TiledObjectGroup >();		HX_STACK_VAR(group,"group");
			HX_STACK_LINE(96)
			++(_g);
			HX_STACK_LINE(98)
			{
				HX_STACK_LINE(98)
				int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(98)
				Array< ::Dynamic > _g3 = group->objects;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(98)
				while((true)){
					HX_STACK_LINE(98)
					if ((!(((_g2 < _g3->length))))){
						HX_STACK_LINE(98)
						break;
					}
					HX_STACK_LINE(98)
					::flixel::addons::editors::tiled::TiledObject o = _g3->__get(_g2).StaticCast< ::flixel::addons::editors::tiled::TiledObject >();		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(98)
					++(_g2);
					HX_STACK_LINE(100)
					this->loadObject(o,group,state);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TiledLevel_obj,loadObjects,(void))

Void TiledLevel_obj::loadObject( ::flixel::addons::editors::tiled::TiledObject o,::flixel::addons::editors::tiled::TiledObjectGroup g,::PlayState state){
{
		HX_STACK_FRAME("TiledLevel","loadObject",0xaf4159a5,"TiledLevel.loadObject","TiledLevel.hx",110,0x7c3de730)
		HX_STACK_THIS(this)
		HX_STACK_ARG(o,"o")
		HX_STACK_ARG(g,"g")
		HX_STACK_ARG(state,"state")
		HX_STACK_LINE(111)
		int x = o->x;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(112)
		int y = o->y;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(115)
		if (((o->gid != (int)-1))){
			HX_STACK_LINE(116)
			hx::SubEq(y,g->map->getGidOwner(o->gid)->tileHeight);
		}
		HX_STACK_LINE(118)
		{
			HX_STACK_LINE(118)
			::String _g = o->type.toLowerCase();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(118)
			::String _switch_1 = (_g);
			if (  ( _switch_1==HX_CSTRING("playerstart"))){
				HX_STACK_LINE(121)
				::Character player = ::Character_obj::__new(o->x,o->y,HX_CSTRING("assets/data/testplayer.json"),null());		HX_STACK_VAR(player,"player");
				HX_STACK_LINE(122)
				::Reg_obj::player = player;
				HX_STACK_LINE(123)
				state->add(::Reg_obj::player);
				HX_STACK_LINE(124)
				::flixel::FlxG_obj::camera->follow(::Reg_obj::player,null(),null(),null());
			}
			else if (  ( _switch_1==HX_CSTRING("floor"))){
				HX_STACK_LINE(129)
				::flixel::FlxObject floor = ::flixel::FlxObject_obj::__new(x,y,o->width,o->height);		HX_STACK_VAR(floor,"floor");
				HX_STACK_LINE(130)
				state->floor = floor;
			}
			else if (  ( _switch_1==HX_CSTRING("shrine"))){
				HX_STACK_LINE(135)
				::Shrine shrine = ::Shrine_obj::__new(x,y);		HX_STACK_VAR(shrine,"shrine");
				HX_STACK_LINE(136)
				shrine->set_solid(true);
				HX_STACK_LINE(137)
				shrine->set_immovable(true);
				HX_STACK_LINE(138)
				state->shrines->add(shrine);
			}
			else if (  ( _switch_1==HX_CSTRING("mound"))){
				HX_STACK_LINE(143)
				::Mound mound = ::Mound_obj::__new(x,y);		HX_STACK_VAR(mound,"mound");
				HX_STACK_LINE(144)
				mound->set_solid(false);
				HX_STACK_LINE(145)
				mound->set_immovable(true);
				HX_STACK_LINE(146)
				state->mounds->add(mound);
			}
			else if (  ( _switch_1==HX_CSTRING("pillar"))){
				HX_STACK_LINE(151)
				::Pillar pillar = ::Pillar_obj::__new(x,y);		HX_STACK_VAR(pillar,"pillar");
				HX_STACK_LINE(152)
				pillar->set_solid(true);
				HX_STACK_LINE(153)
				pillar->set_immovable(true);
				HX_STACK_LINE(154)
				state->pillars->add(pillar);
			}
			else if (  ( _switch_1==HX_CSTRING("shrub"))){
				HX_STACK_LINE(159)
				::Shrub shrub = ::Shrub_obj::__new(x,y);		HX_STACK_VAR(shrub,"shrub");
				HX_STACK_LINE(160)
				shrub->set_solid(false);
				HX_STACK_LINE(161)
				shrub->set_immovable(true);
				HX_STACK_LINE(162)
				state->shrubs->add(shrub);
			}
			else if (  ( _switch_1==HX_CSTRING("exit"))){
				HX_STACK_LINE(166)
				::flixel::FlxSprite exit = ::flixel::FlxSprite_obj::__new(x,y,null());		HX_STACK_VAR(exit,"exit");
				HX_STACK_LINE(167)
				::Reg_obj::exit = exit;
				HX_STACK_LINE(168)
				::Reg_obj::exit->loadGraphic(HX_CSTRING("assets/images/exit.png"),false,(int)16,(int)16,null(),null());
				HX_STACK_LINE(169)
				state->add(::Reg_obj::exit);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(TiledLevel_obj,loadObject,(void))

bool TiledLevel_obj::collideWithLevel( ::flixel::FlxObject obj,Dynamic notifyCallback,Dynamic processCallback){
	HX_STACK_FRAME("TiledLevel","collideWithLevel",0xbac74e60,"TiledLevel.collideWithLevel","TiledLevel.hx",174,0x7c3de730)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_ARG(notifyCallback,"notifyCallback")
	HX_STACK_ARG(processCallback,"processCallback")
	HX_STACK_LINE(175)
	if (((this->collidableTileLayers != null()))){
		HX_STACK_LINE(177)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(177)
		Array< ::Dynamic > _g1 = this->collidableTileLayers;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(177)
		while((true)){
			HX_STACK_LINE(177)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(177)
				break;
			}
			HX_STACK_LINE(177)
			::flixel::tile::FlxTilemap map = _g1->__get(_g).StaticCast< ::flixel::tile::FlxTilemap >();		HX_STACK_VAR(map,"map");
			HX_STACK_LINE(177)
			++(_g);
			HX_STACK_LINE(181)
			return ::flixel::FlxG_obj::overlap(map,obj,notifyCallback,(  (((processCallback != null()))) ? Dynamic(processCallback) : Dynamic(::flixel::FlxObject_obj::separate_dyn()) ));
		}
	}
	HX_STACK_LINE(184)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC3(TiledLevel_obj,collideWithLevel,return )

::String TiledLevel_obj::c_PATH_LEVEL_TILESHEETS;


TiledLevel_obj::TiledLevel_obj()
{
}

void TiledLevel_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TiledLevel);
	HX_MARK_MEMBER_NAME(foregroundTiles,"foregroundTiles");
	HX_MARK_MEMBER_NAME(backgroundTiles,"backgroundTiles");
	HX_MARK_MEMBER_NAME(enemyCollision,"enemyCollision");
	HX_MARK_MEMBER_NAME(collidableTileLayers,"collidableTileLayers");
	::flixel::addons::editors::tiled::TiledMap_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TiledLevel_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(foregroundTiles,"foregroundTiles");
	HX_VISIT_MEMBER_NAME(backgroundTiles,"backgroundTiles");
	HX_VISIT_MEMBER_NAME(enemyCollision,"enemyCollision");
	HX_VISIT_MEMBER_NAME(collidableTileLayers,"collidableTileLayers");
	::flixel::addons::editors::tiled::TiledMap_obj::__Visit(HX_VISIT_ARG);
}

Dynamic TiledLevel_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"loadObject") ) { return loadObject_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"loadObjects") ) { return loadObjects_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"enemyCollision") ) { return enemyCollision; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"foregroundTiles") ) { return foregroundTiles; }
		if (HX_FIELD_EQ(inName,"backgroundTiles") ) { return backgroundTiles; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"collideWithLevel") ) { return collideWithLevel_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"collidableTileLayers") ) { return collidableTileLayers; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TiledLevel_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"enemyCollision") ) { enemyCollision=inValue.Cast< ::flixel::tile::FlxTilemap >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"foregroundTiles") ) { foregroundTiles=inValue.Cast< ::flixel::group::FlxGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backgroundTiles") ) { backgroundTiles=inValue.Cast< ::flixel::group::FlxGroup >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"collidableTileLayers") ) { collidableTileLayers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TiledLevel_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("foregroundTiles"));
	outFields->push(HX_CSTRING("backgroundTiles"));
	outFields->push(HX_CSTRING("enemyCollision"));
	outFields->push(HX_CSTRING("collidableTileLayers"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("c_PATH_LEVEL_TILESHEETS"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::group::FlxGroup*/ ,(int)offsetof(TiledLevel_obj,foregroundTiles),HX_CSTRING("foregroundTiles")},
	{hx::fsObject /*::flixel::group::FlxGroup*/ ,(int)offsetof(TiledLevel_obj,backgroundTiles),HX_CSTRING("backgroundTiles")},
	{hx::fsObject /*::flixel::tile::FlxTilemap*/ ,(int)offsetof(TiledLevel_obj,enemyCollision),HX_CSTRING("enemyCollision")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TiledLevel_obj,collidableTileLayers),HX_CSTRING("collidableTileLayers")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("foregroundTiles"),
	HX_CSTRING("backgroundTiles"),
	HX_CSTRING("enemyCollision"),
	HX_CSTRING("collidableTileLayers"),
	HX_CSTRING("loadObjects"),
	HX_CSTRING("loadObject"),
	HX_CSTRING("collideWithLevel"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TiledLevel_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TiledLevel_obj::c_PATH_LEVEL_TILESHEETS,"c_PATH_LEVEL_TILESHEETS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TiledLevel_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TiledLevel_obj::c_PATH_LEVEL_TILESHEETS,"c_PATH_LEVEL_TILESHEETS");
};

#endif

Class TiledLevel_obj::__mClass;

void TiledLevel_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("TiledLevel"), hx::TCanCast< TiledLevel_obj> ,sStaticFields,sMemberFields,
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

void TiledLevel_obj::__boot()
{
	c_PATH_LEVEL_TILESHEETS= HX_CSTRING("assets/data/");
}

