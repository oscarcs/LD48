#ifndef INCLUDED_TiledLevel
#define INCLUDED_TiledLevel

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/addons/editors/tiled/TiledMap.h>
HX_DECLARE_CLASS0(PlayState)
HX_DECLARE_CLASS0(TiledLevel)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledMap)
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledObject)
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledObjectGroup)
HX_DECLARE_CLASS2(flixel,group,FlxGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,tile,FlxTilemap)


class HXCPP_CLASS_ATTRIBUTES  TiledLevel_obj : public ::flixel::addons::editors::tiled::TiledMap_obj{
	public:
		typedef ::flixel::addons::editors::tiled::TiledMap_obj super;
		typedef TiledLevel_obj OBJ_;
		TiledLevel_obj();
		Void __construct(Dynamic tiledLevel);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< TiledLevel_obj > __new(Dynamic tiledLevel);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TiledLevel_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TiledLevel"); }

		::flixel::group::FlxGroup foregroundTiles;
		::flixel::group::FlxGroup backgroundTiles;
		::flixel::tile::FlxTilemap enemyCollision;
		Array< ::Dynamic > collidableTileLayers;
		virtual Void loadObjects( ::PlayState state);
		Dynamic loadObjects_dyn();

		virtual Void loadObject( ::flixel::addons::editors::tiled::TiledObject o,::flixel::addons::editors::tiled::TiledObjectGroup g,::PlayState state);
		Dynamic loadObject_dyn();

		virtual bool collideWithLevel( ::flixel::FlxObject obj,Dynamic notifyCallback,Dynamic processCallback);
		Dynamic collideWithLevel_dyn();

		static ::String c_PATH_LEVEL_TILESHEETS;
};


#endif /* INCLUDED_TiledLevel */ 
