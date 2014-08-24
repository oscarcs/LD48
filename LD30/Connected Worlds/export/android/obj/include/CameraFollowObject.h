#ifndef INCLUDED_CameraFollowObject
#define INCLUDED_CameraFollowObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/FlxObject.h>
HX_DECLARE_CLASS0(CameraFollowObject)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)


class HXCPP_CLASS_ATTRIBUTES  CameraFollowObject_obj : public ::flixel::FlxObject_obj{
	public:
		typedef ::flixel::FlxObject_obj super;
		typedef CameraFollowObject_obj OBJ_;
		CameraFollowObject_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< CameraFollowObject_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CameraFollowObject_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("CameraFollowObject"); }

		int speed;
		::flixel::FlxObject upZone;
		::flixel::FlxObject downZone;
		::flixel::FlxObject leftZone;
		::flixel::FlxObject rightZone;
		virtual Void update( );

};


#endif /* INCLUDED_CameraFollowObject */ 
