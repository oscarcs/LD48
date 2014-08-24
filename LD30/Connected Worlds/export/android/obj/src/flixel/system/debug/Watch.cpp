#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_debug_Watch
#include <flixel/system/debug/Watch.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace flixel{
namespace system{
namespace debug{

Void Watch_obj::__construct(::String Title,::openfl::display::BitmapData Icon,Dynamic Width,Dynamic Height,Dynamic Resizable,::openfl::geom::Rectangle Bounds,Dynamic Closable)
{
HX_STACK_FRAME("flixel.system.debug.Watch","new",0x42e63119,"flixel.system.debug.Watch.new","flixel/system/debug/Watch.hx",18,0x3c078798)
HX_STACK_THIS(this)
HX_STACK_ARG(Title,"Title")
HX_STACK_ARG(Icon,"Icon")
HX_STACK_ARG(Width,"Width")
HX_STACK_ARG(Height,"Height")
HX_STACK_ARG(Resizable,"Resizable")
HX_STACK_ARG(Bounds,"Bounds")
HX_STACK_ARG(Closable,"Closable")
{
	HX_STACK_LINE(18)
	super::__construct(Title,Icon,Width,Height,Resizable,Bounds,Closable);
}
;
	return null();
}

//Watch_obj::~Watch_obj() { }

Dynamic Watch_obj::__CreateEmpty() { return  new Watch_obj; }
hx::ObjectPtr< Watch_obj > Watch_obj::__new(::String Title,::openfl::display::BitmapData Icon,Dynamic Width,Dynamic Height,Dynamic Resizable,::openfl::geom::Rectangle Bounds,Dynamic Closable)
{  hx::ObjectPtr< Watch_obj > result = new Watch_obj();
	result->__construct(Title,Icon,Width,Height,Resizable,Bounds,Closable);
	return result;}

Dynamic Watch_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Watch_obj > result = new Watch_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return result;}


Watch_obj::Watch_obj()
{
}

Dynamic Watch_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic Watch_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Watch_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Watch_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Watch_obj::__mClass,"__mClass");
};

#endif

Class Watch_obj::__mClass;

void Watch_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.debug.Watch"), hx::TCanCast< Watch_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void Watch_obj::__boot()
{
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
