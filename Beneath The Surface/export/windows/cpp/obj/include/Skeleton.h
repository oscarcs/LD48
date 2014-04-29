#ifndef INCLUDED_Skeleton
#define INCLUDED_Skeleton

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <Character.h>
HX_DECLARE_CLASS0(Character)
HX_DECLARE_CLASS0(Skeleton)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,addons,display,FlxExtendedSprite)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxPooled)
HX_DECLARE_CLASS2(flixel,util,FlxPath)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)


class HXCPP_CLASS_ATTRIBUTES  Skeleton_obj : public ::Character_obj{
	public:
		typedef ::Character_obj super;
		typedef Skeleton_obj OBJ_;
		Skeleton_obj();
		Void __construct(Float x,Float y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Skeleton_obj > __new(Float x,Float y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Skeleton_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Skeleton"); }

		::flixel::util::FlxPath path;
		bool doingPath;
		::flixel::util::FlxPoint currentFollowPosition;
		Float hurtCounter;
		virtual Void update( );

		virtual Void hurtPlayer( );
		Dynamic hurtPlayer_dyn();

};


#endif /* INCLUDED_Skeleton */ 
