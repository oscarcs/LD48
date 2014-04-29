#ifndef INCLUDED_Shrine
#define INCLUDED_Shrine

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/addons/display/FlxExtendedSprite.h>
HX_DECLARE_CLASS0(PlayState)
HX_DECLARE_CLASS0(Shrine)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS3(flixel,addons,display,FlxExtendedSprite)
HX_DECLARE_CLASS2(flixel,group,FlxGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)


class HXCPP_CLASS_ATTRIBUTES  Shrine_obj : public ::flixel::addons::display::FlxExtendedSprite_obj{
	public:
		typedef ::flixel::addons::display::FlxExtendedSprite_obj super;
		typedef Shrine_obj OBJ_;
		Shrine_obj();
		Void __construct(Float x,Float y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Shrine_obj > __new(Float x,Float y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Shrine_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Shrine"); }

		bool isActivated;
		Float deactivateCounter;
		virtual Void update( );

		virtual Void checkActivation( ::flixel::FlxObject object,::PlayState state);
		Dynamic checkActivation_dyn();

		virtual Void activate( );
		Dynamic activate_dyn();

		virtual Void deactivate( );
		Dynamic deactivate_dyn();

};


#endif /* INCLUDED_Shrine */ 
