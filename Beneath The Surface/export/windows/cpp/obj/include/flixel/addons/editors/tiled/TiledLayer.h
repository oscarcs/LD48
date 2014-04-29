#ifndef INCLUDED_flixel_addons_editors_tiled_TiledLayer
#define INCLUDED_flixel_addons_editors_tiled_TiledLayer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flash,utils,ByteArray)
HX_DECLARE_CLASS2(flash,utils,IDataInput)
HX_DECLARE_CLASS2(flash,utils,IDataOutput)
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledLayer)
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledMap)
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledPropertySet)
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledTile)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(haxe,xml,Fast)
HX_DECLARE_CLASS2(openfl,utils,IMemoryRange)
namespace flixel{
namespace addons{
namespace editors{
namespace tiled{


class HXCPP_CLASS_ATTRIBUTES  TiledLayer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TiledLayer_obj OBJ_;
		TiledLayer_obj();
		Void __construct(::haxe::xml::Fast Source,::flixel::addons::editors::tiled::TiledMap Parent);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< TiledLayer_obj > __new(::haxe::xml::Fast Source,::flixel::addons::editors::tiled::TiledMap Parent);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TiledLayer_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TiledLayer"); }

		::flixel::addons::editors::tiled::TiledMap map;
		::String name;
		int x;
		int y;
		int width;
		int height;
		Float opacity;
		bool visible;
		::flixel::addons::editors::tiled::TiledPropertySet properties;
		Array< ::Dynamic > tiles;
		::haxe::xml::Fast _xmlData;
		virtual ::flash::utils::ByteArray getByteArrayData( );
		Dynamic getByteArrayData_dyn();

		virtual int resolveTile( int GlobalTileID);
		Dynamic resolveTile_dyn();

		virtual ::String resolveCsvTiles( ::String csvData);
		Dynamic resolveCsvTiles_dyn();

		::String csvData;
		virtual ::String get_csvData( );
		Dynamic get_csvData_dyn();

		Array< int > tileArray;
		virtual Array< int > get_tileArray( );
		Dynamic get_tileArray_dyn();

		static ::String BASE64_CHARS;
		static ::flash::utils::ByteArray base64ToByteArray( ::String data);
		static Dynamic base64ToByteArray_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace editors
} // end namespace tiled

#endif /* INCLUDED_flixel_addons_editors_tiled_TiledLayer */ 
