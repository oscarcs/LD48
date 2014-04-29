#ifndef INCLUDED_Character
#define INCLUDED_Character

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/addons/display/FlxExtendedSprite.h>
HX_DECLARE_CLASS0(Character)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,addons,display,FlxExtendedSprite)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxPooled)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,FlxRect)


class HXCPP_CLASS_ATTRIBUTES  Character_obj : public ::flixel::addons::display::FlxExtendedSprite_obj{
	public:
		typedef ::flixel::addons::display::FlxExtendedSprite_obj super;
		typedef Character_obj OBJ_;
		Character_obj();
		Void __construct(Float X,Float Y,::String JsonPath,Dynamic SimpleGraphic);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Character_obj > __new(Float X,Float Y,::String JsonPath,Dynamic SimpleGraphic);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Character_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Character"); }

		int direction;
		::flixel::util::FlxRect collisionMap;
		::flixel::util::FlxRect maxBounds;
		bool controllable;
		::String anim;
		bool rolling;
		Float rollTimer;
		Float faith;
		::flixel::util::FlxPoint pastPlayerPosition;
		::flixel::util::FlxPoint currentPlayerPosition;
		virtual Void update( );

		virtual Void setBoundsMap( ::flixel::util::FlxRect boundsMap);
		Dynamic setBoundsMap_dyn();

		virtual Void checkBoundsMap( );
		Dynamic checkBoundsMap_dyn();

		virtual Void doAnimation( );
		Dynamic doAnimation_dyn();

		virtual Void parseJson( ::String file);
		Dynamic parseJson_dyn();

		virtual Void getMessage( );
		Dynamic getMessage_dyn();

};


#endif /* INCLUDED_Character */ 
