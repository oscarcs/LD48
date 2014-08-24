#ifndef INCLUDED_flixel_system_debug_GraphicStats
#define INCLUDED_flixel_system_debug_GraphicStats

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/display/BitmapData.h>
HX_DECLARE_CLASS3(flixel,system,debug,GraphicStats)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
namespace flixel{
namespace system{
namespace debug{


class HXCPP_CLASS_ATTRIBUTES  GraphicStats_obj : public ::openfl::display::BitmapData_obj{
	public:
		typedef ::openfl::display::BitmapData_obj super;
		typedef GraphicStats_obj OBJ_;
		GraphicStats_obj();
		Void __construct(int width,int height,Dynamic __o_transparent,Dynamic __o_fillRGBA);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< GraphicStats_obj > __new(int width,int height,Dynamic __o_transparent,Dynamic __o_fillRGBA);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GraphicStats_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("GraphicStats"); }

		static ::String resourceName;
};

} // end namespace flixel
} // end namespace system
} // end namespace debug

#endif /* INCLUDED_flixel_system_debug_GraphicStats */ 
