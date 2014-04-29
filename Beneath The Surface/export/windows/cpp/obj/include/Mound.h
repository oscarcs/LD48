#ifndef INCLUDED_Mound
#define INCLUDED_Mound

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/addons/display/FlxExtendedSprite.h>
HX_DECLARE_CLASS0(Character)
HX_DECLARE_CLASS0(Mound)
HX_DECLARE_CLASS0(PlayState)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS3(flixel,addons,display,FlxExtendedSprite)
HX_DECLARE_CLASS2(flixel,group,FlxGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)


class HXCPP_CLASS_ATTRIBUTES  Mound_obj : public ::flixel::addons::display::FlxExtendedSprite_obj{
	public:
		typedef ::flixel::addons::display::FlxExtendedSprite_obj super;
		typedef Mound_obj OBJ_;
		Mound_obj();
		Void __construct(Float x,Float y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Mound_obj > __new(Float x,Float y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Mound_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Mound"); }

		::Character moundType;
		::flixel::FlxSprite protoSkeleton;
		bool isActivated;
		virtual Void revealMound( ::flixel::FlxObject object,::PlayState state);
		Dynamic revealMound_dyn();

		virtual Void spawnMonster( );
		Dynamic spawnMonster_dyn();

};


#endif /* INCLUDED_Mound */ 
