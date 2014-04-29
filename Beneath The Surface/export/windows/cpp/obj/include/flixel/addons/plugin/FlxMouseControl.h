#ifndef INCLUDED_flixel_addons_plugin_FlxMouseControl
#define INCLUDED_flixel_addons_plugin_FlxMouseControl

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/plugin/FlxPlugin.h>
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,addons,display,FlxExtendedSprite)
HX_DECLARE_CLASS3(flixel,addons,plugin,FlxMouseControl)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxPooled)
HX_DECLARE_CLASS2(flixel,plugin,FlxPlugin)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,FlxRect)
namespace flixel{
namespace addons{
namespace plugin{


class HXCPP_CLASS_ATTRIBUTES  FlxMouseControl_obj : public ::flixel::plugin::FlxPlugin_obj{
	public:
		typedef ::flixel::plugin::FlxPlugin_obj super;
		typedef FlxMouseControl_obj OBJ_;
		FlxMouseControl_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FlxMouseControl_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxMouseControl_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("FlxMouseControl"); }

		virtual Void update( );

		virtual Void releaseMouse( );
		Dynamic releaseMouse_dyn();

		virtual Void assignClickedSprite( );
		Dynamic assignClickedSprite_dyn();

		virtual int sortHandler( ::flixel::addons::display::FlxExtendedSprite Item1,::flixel::addons::display::FlxExtendedSprite Item2);
		Dynamic sortHandler_dyn();

		virtual Void destroy( );

		static int ASCENDING;
		static int DESCENDING;
		static ::String sortIndex;
		static int sortOrder;
		static bool isDragging;
		static ::flixel::addons::display::FlxExtendedSprite dragTarget;
		static ::flixel::addons::display::FlxExtendedSprite clickTarget;
		static int speedX;
		static int speedY;
		static ::flixel::util::FlxRect mouseZone;
		static bool linkToDeadZone;
		static Array< ::Dynamic > _clickStack;
		static ::flixel::util::FlxPoint _clickCoords;
		static bool _hasClickTarget;
		static int _oldX;
		static int _oldY;
		static Void addToStack( ::flixel::addons::display::FlxExtendedSprite Item);
		static Dynamic addToStack_dyn();

		static Void clear( );
		static Dynamic clear_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace plugin

#endif /* INCLUDED_flixel_addons_plugin_FlxMouseControl */ 
