#ifndef INCLUDED_PlayState
#define INCLUDED_PlayState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/FlxState.h>
HX_DECLARE_CLASS0(Character)
HX_DECLARE_CLASS0(PlayState)
HX_DECLARE_CLASS0(Skeleton)
HX_DECLARE_CLASS0(UI)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS3(flixel,addons,display,FlxExtendedSprite)
HX_DECLARE_CLASS3(flixel,addons,weapon,FlxBullet)
HX_DECLARE_CLASS3(flixel,addons,weapon,FlxWeapon)
HX_DECLARE_CLASS2(flixel,group,FlxGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxPooled)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,util,FlxRect)


class HXCPP_CLASS_ATTRIBUTES  PlayState_obj : public ::flixel::FlxState_obj{
	public:
		typedef ::flixel::FlxState_obj super;
		typedef PlayState_obj OBJ_;
		PlayState_obj();
		Void __construct(Dynamic MaxSize);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< PlayState_obj > __new(Dynamic MaxSize);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PlayState_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("PlayState"); }

		::flixel::group::FlxGroup shrines;
		::flixel::group::FlxGroup shrubs;
		::flixel::group::FlxGroup pillars;
		::flixel::group::FlxGroup mounds;
		::flixel::group::FlxGroup arrows;
		::flixel::group::FlxGroup faithBar;
		::flixel::FlxSprite faithMeter;
		::UI overlay;
		::flixel::FlxSprite healthMeter;
		::flixel::text::FlxText scoreText;
		::Character player;
		::flixel::FlxObject floor;
		::flixel::FlxSprite exit;
		::flixel::util::FlxRect world;
		::flixel::addons::weapon::FlxWeapon bow;
		::flixel::addons::weapon::FlxBullet bulletType;
		virtual Void create( );

		virtual Void destroy( );

		virtual Void update( );

		virtual Void collideStuff( );
		Dynamic collideStuff_dyn();

		virtual Void collideBullet( ::Skeleton enemy,::flixel::addons::weapon::FlxBullet bullet);
		Dynamic collideBullet_dyn();

		virtual Void bulletWall( Dynamic map,::flixel::addons::weapon::FlxBullet bullet);
		Dynamic bulletWall_dyn();

		virtual Void fadeOut( ::Character p,::flixel::FlxSprite e);
		Dynamic fadeOut_dyn();

		virtual Void fadeIn( );
		Dynamic fadeIn_dyn();

		virtual Void goToMenu( );
		Dynamic goToMenu_dyn();

};


#endif /* INCLUDED_PlayState */ 
