#ifndef INCLUDED_flixel_addons_display_FlxMouseSpring
#define INCLUDED_flixel_addons_display_FlxMouseSpring

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,addons,display,FlxExtendedSprite)
HX_DECLARE_CLASS3(flixel,addons,display,FlxMouseSpring)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
namespace flixel{
namespace addons{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  FlxMouseSpring_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxMouseSpring_obj OBJ_;
		FlxMouseSpring_obj();
		Void __construct(::flixel::addons::display::FlxExtendedSprite Sprite,hx::Null< bool >  __o_RetainVelocity,hx::Null< Float >  __o_Tension,hx::Null< Float >  __o_Friction,hx::Null< Float >  __o_Gravity);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FlxMouseSpring_obj > __new(::flixel::addons::display::FlxExtendedSprite Sprite,hx::Null< bool >  __o_RetainVelocity,hx::Null< Float >  __o_Tension,hx::Null< Float >  __o_Friction,hx::Null< Float >  __o_Gravity);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxMouseSpring_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxMouseSpring"); }

		::flixel::addons::display::FlxExtendedSprite sprite;
		Float tension;
		Float friction;
		Float gravity;
		bool _retainVelocity;
		Float _vx;
		Float _vy;
		Float _dx;
		Float _dy;
		Float _ax;
		Float _ay;
		virtual Void update( );
		Dynamic update_dyn();

		virtual Void reset( );
		Dynamic reset_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace display

#endif /* INCLUDED_flixel_addons_display_FlxMouseSpring */ 
