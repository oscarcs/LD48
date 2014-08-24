#ifndef INCLUDED_Connection
#define INCLUDED_Connection

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/FlxBasic.h>
HX_DECLARE_CLASS0(Connection)
HX_DECLARE_CLASS0(Star)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxPooled)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)


class HXCPP_CLASS_ATTRIBUTES  Connection_obj : public ::flixel::FlxBasic_obj{
	public:
		typedef ::flixel::FlxBasic_obj super;
		typedef Connection_obj OBJ_;
		Connection_obj();
		Void __construct(::Star star1,::Star star2);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Connection_obj > __new(::Star star1,::Star star2);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Connection_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Connection"); }

		::Star star1;
		::Star star2;
		::flixel::FlxSprite connectionGraphic;
		int screenWidth;
		int screenHeight;
		Dynamic ls;
		bool updated;
		::flixel::util::FlxPoint start;
		::flixel::util::FlxPoint end;
		virtual Void update( );

};


#endif /* INCLUDED_Connection */ 
