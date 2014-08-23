#ifndef INCLUDED_flixel_addons_editors_tiled_TiledObject
#define INCLUDED_flixel_addons_editors_tiled_TiledObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledObject)
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledObjectGroup)
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledPropertySet)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxPooled)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)
HX_DECLARE_CLASS2(haxe,xml,Fast)
namespace flixel{
namespace addons{
namespace editors{
namespace tiled{


class HXCPP_CLASS_ATTRIBUTES  TiledObject_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TiledObject_obj OBJ_;
		TiledObject_obj();
		Void __construct(::haxe::xml::Fast Source,::flixel::addons::editors::tiled::TiledObjectGroup Parent);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< TiledObject_obj > __new(::haxe::xml::Fast Source,::flixel::addons::editors::tiled::TiledObjectGroup Parent);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TiledObject_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TiledObject"); }

		int x;
		int y;
		int width;
		int height;
		::String name;
		::String type;
		::haxe::xml::Fast xmlData;
		Float angle;
		int gid;
		::flixel::addons::editors::tiled::TiledPropertySet custom;
		::flixel::addons::editors::tiled::TiledPropertySet shared;
		::flixel::addons::editors::tiled::TiledObjectGroup group;
		int objectType;
		bool flippedHorizontally;
		bool flippedVertically;
		Array< ::Dynamic > points;
		virtual Void getPoints( ::haxe::xml::Fast Node);
		Dynamic getPoints_dyn();

		virtual bool get_flippedHorizontally( );
		Dynamic get_flippedHorizontally_dyn();

		virtual bool get_flippedVertically( );
		Dynamic get_flippedVertically_dyn();

		static int FLIPPED_VERTICALLY_FLAG;
		static int FLIPPED_HORIZONTALLY_FLAG;
		static int RECTANGLE;
		static int ELLIPSE;
		static int POLYGON;
		static int POLYLINE;
		static int TILE;
};

} // end namespace flixel
} // end namespace addons
} // end namespace editors
} // end namespace tiled

#endif /* INCLUDED_flixel_addons_editors_tiled_TiledObject */ 
