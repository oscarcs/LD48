#ifndef INCLUDED_flixel_addons_editors_tiled_TiledObjectGroup
#define INCLUDED_flixel_addons_editors_tiled_TiledObjectGroup

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledMap)
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledObject)
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledObjectGroup)
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledPropertySet)
HX_DECLARE_CLASS2(haxe,xml,Fast)
namespace flixel{
namespace addons{
namespace editors{
namespace tiled{


class HXCPP_CLASS_ATTRIBUTES  TiledObjectGroup_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TiledObjectGroup_obj OBJ_;
		TiledObjectGroup_obj();
		Void __construct(::haxe::xml::Fast Source,::flixel::addons::editors::tiled::TiledMap Parent);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< TiledObjectGroup_obj > __new(::haxe::xml::Fast Source,::flixel::addons::editors::tiled::TiledMap Parent);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TiledObjectGroup_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TiledObjectGroup"); }

		::flixel::addons::editors::tiled::TiledMap map;
		::String name;
		int color;
		Float opacity;
		bool visible;
		::flixel::addons::editors::tiled::TiledPropertySet properties;
		Array< ::Dynamic > objects;
};

} // end namespace flixel
} // end namespace addons
} // end namespace editors
} // end namespace tiled

#endif /* INCLUDED_flixel_addons_editors_tiled_TiledObjectGroup */ 
