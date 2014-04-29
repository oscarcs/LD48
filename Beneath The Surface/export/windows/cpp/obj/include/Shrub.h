#ifndef INCLUDED_Shrub
#define INCLUDED_Shrub

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/addons/display/FlxExtendedSprite.h>
HX_DECLARE_CLASS0(Shrub)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,addons,display,FlxExtendedSprite)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)


class HXCPP_CLASS_ATTRIBUTES  Shrub_obj : public ::flixel::addons::display::FlxExtendedSprite_obj{
	public:
		typedef ::flixel::addons::display::FlxExtendedSprite_obj super;
		typedef Shrub_obj OBJ_;
		Shrub_obj();
		Void __construct(Float x,Float y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Shrub_obj > __new(Float x,Float y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Shrub_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Shrub"); }

		virtual Void update( );

};


#endif /* INCLUDED_Shrub */ 
