#ifndef INCLUDED_UI
#define INCLUDED_UI

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/group/FlxGroup.h>
HX_DECLARE_CLASS0(UI)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,group,FlxGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,text,FlxText)


class HXCPP_CLASS_ATTRIBUTES  UI_obj : public ::flixel::group::FlxGroup_obj{
	public:
		typedef ::flixel::group::FlxGroup_obj super;
		typedef UI_obj OBJ_;
		UI_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< UI_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UI_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("UI"); }

		::flixel::text::FlxText XText;
		::flixel::text::FlxText ZText;
		::flixel::text::FlxText CText;
};


#endif /* INCLUDED_UI */ 
