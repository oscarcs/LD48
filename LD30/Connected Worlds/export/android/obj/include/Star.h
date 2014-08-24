#ifndef INCLUDED_Star
#define INCLUDED_Star

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/FlxObject.h>
HX_DECLARE_CLASS0(Connection)
HX_DECLARE_CLASS0(PlayState)
HX_DECLARE_CLASS0(Star)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,group,FlxGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxPooled)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)


class HXCPP_CLASS_ATTRIBUTES  Star_obj : public ::flixel::FlxObject_obj{
	public:
		typedef ::flixel::FlxObject_obj super;
		typedef Star_obj OBJ_;
		Star_obj();
		Void __construct(Float x,Float y,int size,Dynamic id,::PlayState parent);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Star_obj > __new(Float x,Float y,int size,Dynamic id,::PlayState parent);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Star_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Star"); }

		::flixel::util::FlxPoint mid;
		int size;
		::PlayState parent;
		Array< ::Dynamic > connectedTo;
		Array< ::Dynamic > connections;
		::flixel::FlxSprite starGraphic;
		::flixel::text::FlxText starText;
		virtual Void update( );

		virtual Void destroy( );

		virtual bool checkDistance( Float chkX,Float chkY,Float dist);
		Dynamic checkDistance_dyn();

		virtual bool optimizedCheckDist( Float xx,Float yy);
		Dynamic optimizedCheckDist_dyn();

};


#endif /* INCLUDED_Star */ 
