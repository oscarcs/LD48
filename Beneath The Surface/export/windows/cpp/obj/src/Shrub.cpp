#include <hxcpp.h>

#ifndef INCLUDED_Shrub
#include <Shrub.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_display_FlxExtendedSprite
#include <flixel/addons/display/FlxExtendedSprite.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif

Void Shrub_obj::__construct(Float x,Float y)
{
HX_STACK_FRAME("Shrub","new",0x7913fb9c,"Shrub.new","Shrub.hx",12,0xa38e6b54)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
{
	HX_STACK_LINE(13)
	super::__construct(x,y,null());
	HX_STACK_LINE(14)
	this->loadGraphic(HX_CSTRING("assets/images/shrub.png"),true,(int)16,(int)16,null(),null());
	HX_STACK_LINE(15)
	this->animation->add(HX_CSTRING("wave"),Array_obj< int >::__new().Add((int)0).Add((int)1).Add((int)2),(int)1,true);
	HX_STACK_LINE(16)
	int _g = ::Std_obj::random((int)3);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(16)
	this->animation->play(HX_CSTRING("wave"),false,_g);
}
;
	return null();
}

//Shrub_obj::~Shrub_obj() { }

Dynamic Shrub_obj::__CreateEmpty() { return  new Shrub_obj; }
hx::ObjectPtr< Shrub_obj > Shrub_obj::__new(Float x,Float y)
{  hx::ObjectPtr< Shrub_obj > result = new Shrub_obj();
	result->__construct(x,y);
	return result;}

Dynamic Shrub_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Shrub_obj > result = new Shrub_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Shrub_obj::update( ){
{
		HX_STACK_FRAME("Shrub","update",0x9a1b084d,"Shrub.update","Shrub.hx",21,0xa38e6b54)
		HX_STACK_THIS(this)
		HX_STACK_LINE(21)
		this->super::update();
	}
return null();
}



Shrub_obj::Shrub_obj()
{
}

Dynamic Shrub_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Shrub_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Shrub_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Shrub_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Shrub_obj::__mClass,"__mClass");
};

#endif

Class Shrub_obj::__mClass;

void Shrub_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Shrub"), hx::TCanCast< Shrub_obj> ,sStaticFields,sMemberFields,
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

void Shrub_obj::__boot()
{
}

