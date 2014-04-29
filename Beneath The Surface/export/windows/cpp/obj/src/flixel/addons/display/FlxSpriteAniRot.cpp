#include <hxcpp.h>

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
#ifndef INCLUDED_flixel_addons_display_FlxSpriteAniRot
#include <flixel/addons/display/FlxSpriteAniRot.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_system_layer_frames_FlxFrame
#include <flixel/system/layer/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_system_layer_frames_FlxSpriteFrames
#include <flixel/system/layer/frames/FlxSpriteFrames.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_CachedGraphics
#include <flixel/util/loaders/CachedGraphics.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace flixel{
namespace addons{
namespace display{

Void FlxSpriteAniRot_obj::__construct(Dynamic AnimatedGraphic,int Rotations,hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y)
{
HX_STACK_FRAME("flixel.addons.display.FlxSpriteAniRot","new",0x2a8d0a8f,"flixel.addons.display.FlxSpriteAniRot.new","flixel/addons/display/FlxSpriteAniRot.hx",19,0x2c596a22)
HX_STACK_THIS(this)
HX_STACK_ARG(AnimatedGraphic,"AnimatedGraphic")
HX_STACK_ARG(Rotations,"Rotations")
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
{
	HX_STACK_LINE(24)
	this->angleIndex = (int)-1;
	HX_STACK_LINE(23)
	this->rotations = (int)0;
	HX_STACK_LINE(28)
	super::__construct(X,Y,null());
	HX_STACK_LINE(30)
	this->loadGraphic(AnimatedGraphic,true,null(),null(),null(),null());
	HX_STACK_LINE(32)
	this->rotations = (Float((int)360) / Float(Rotations));
	HX_STACK_LINE(33)
	this->cached = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(34)
	this->framesCache = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(37)
	{
		HX_STACK_LINE(37)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(37)
		int _g = this->frames;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(37)
		while((true)){
			HX_STACK_LINE(37)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(37)
				break;
			}
			HX_STACK_LINE(37)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(40)
			this->loadRotatedGraphic(AnimatedGraphic,Rotations,i,true,false,null());
			HX_STACK_LINE(41)
			this->cached->push(this->cachedGraphics);
			HX_STACK_LINE(42)
			this->framesCache->push(this->framesData);
		}
	}
	HX_STACK_LINE(44)
	this->bakedRotationAngle = (int)0;
}
;
	return null();
}

//FlxSpriteAniRot_obj::~FlxSpriteAniRot_obj() { }

Dynamic FlxSpriteAniRot_obj::__CreateEmpty() { return  new FlxSpriteAniRot_obj; }
hx::ObjectPtr< FlxSpriteAniRot_obj > FlxSpriteAniRot_obj::__new(Dynamic AnimatedGraphic,int Rotations,hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y)
{  hx::ObjectPtr< FlxSpriteAniRot_obj > result = new FlxSpriteAniRot_obj();
	result->__construct(AnimatedGraphic,Rotations,__o_X,__o_Y);
	return result;}

Dynamic FlxSpriteAniRot_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxSpriteAniRot_obj > result = new FlxSpriteAniRot_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Void FlxSpriteAniRot_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.addons.display.FlxSpriteAniRot","destroy",0xacb9aaa9,"flixel.addons.display.FlxSpriteAniRot.destroy","flixel/addons/display/FlxSpriteAniRot.hx",48,0x2c596a22)
		HX_STACK_THIS(this)
		HX_STACK_LINE(49)
		this->cached = null();
		HX_STACK_LINE(50)
		this->framesCache = null();
		HX_STACK_LINE(52)
		this->super::destroy();
	}
return null();
}


Void FlxSpriteAniRot_obj::update( ){
{
		HX_STACK_FRAME("flixel.addons.display.FlxSpriteAniRot","update",0x3bdd933a,"flixel.addons.display.FlxSpriteAniRot.update","flixel/addons/display/FlxSpriteAniRot.hx",56,0x2c596a22)
		HX_STACK_THIS(this)
		HX_STACK_LINE(57)
		this->super::update();
		HX_STACK_LINE(59)
		int oldIndex = this->angleIndex;		HX_STACK_VAR(oldIndex,"oldIndex");
		HX_STACK_LINE(60)
		int angleHelper = ::Math_obj::floor(hx::Mod(this->angle,(int)360));		HX_STACK_VAR(angleHelper,"angleHelper");
		HX_STACK_LINE(62)
		while((true)){
			HX_STACK_LINE(62)
			if ((!(((angleHelper < (int)0))))){
				HX_STACK_LINE(62)
				break;
			}
			HX_STACK_LINE(64)
			hx::AddEq(angleHelper,(int)360);
		}
		HX_STACK_LINE(67)
		int _g = ::Math_obj::floor(((Float(angleHelper) / Float(this->rotations)) + 0.5));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(67)
		this->angleIndex = _g;
		HX_STACK_LINE(68)
		int _g1 = ::Std_obj::_int(hx::Mod(this->angleIndex,this->frames));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(68)
		this->angleIndex = _g1;
		HX_STACK_LINE(70)
		if (((oldIndex != this->angleIndex))){
			HX_STACK_LINE(72)
			this->dirty = true;
		}
	}
return null();
}


Void FlxSpriteAniRot_obj::calcFrame( hx::Null< bool >  __o_RunOnCpp){
bool RunOnCpp = __o_RunOnCpp.Default(false);
	HX_STACK_FRAME("flixel.addons.display.FlxSpriteAniRot","calcFrame",0x93de1ac7,"flixel.addons.display.FlxSpriteAniRot.calcFrame","flixel/addons/display/FlxSpriteAniRot.hx",82,0x2c596a22)
	HX_STACK_THIS(this)
	HX_STACK_ARG(RunOnCpp,"RunOnCpp")
{
		HX_STACK_LINE(84)
		if ((!(RunOnCpp))){
			HX_STACK_LINE(86)
			return null();
		}
		HX_STACK_LINE(90)
		this->set_cachedGraphics(this->cached->__get(this->animation->frameIndex).StaticCast< ::flixel::util::loaders::CachedGraphics >());
		HX_STACK_LINE(91)
		this->set_frame(this->framesCache->__get(this->animation->frameIndex).StaticCast< ::flixel::system::layer::frames::FlxSpriteFrames >()->frames->__get(this->angleIndex).StaticCast< ::flixel::system::layer::frames::FlxFrame >());
		HX_STACK_LINE(92)
		this->super::calcFrame(null());
	}
return null();
}



FlxSpriteAniRot_obj::FlxSpriteAniRot_obj()
{
}

void FlxSpriteAniRot_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxSpriteAniRot);
	HX_MARK_MEMBER_NAME(cached,"cached");
	HX_MARK_MEMBER_NAME(framesCache,"framesCache");
	HX_MARK_MEMBER_NAME(rotations,"rotations");
	HX_MARK_MEMBER_NAME(angleIndex,"angleIndex");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxSpriteAniRot_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(cached,"cached");
	HX_VISIT_MEMBER_NAME(framesCache,"framesCache");
	HX_VISIT_MEMBER_NAME(rotations,"rotations");
	HX_VISIT_MEMBER_NAME(angleIndex,"angleIndex");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxSpriteAniRot_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"cached") ) { return cached; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"rotations") ) { return rotations; }
		if (HX_FIELD_EQ(inName,"calcFrame") ) { return calcFrame_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"angleIndex") ) { return angleIndex; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"framesCache") ) { return framesCache; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxSpriteAniRot_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"cached") ) { cached=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"rotations") ) { rotations=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"angleIndex") ) { angleIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"framesCache") ) { framesCache=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxSpriteAniRot_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("cached"));
	outFields->push(HX_CSTRING("framesCache"));
	outFields->push(HX_CSTRING("rotations"));
	outFields->push(HX_CSTRING("angleIndex"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxSpriteAniRot_obj,cached),HX_CSTRING("cached")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxSpriteAniRot_obj,framesCache),HX_CSTRING("framesCache")},
	{hx::fsFloat,(int)offsetof(FlxSpriteAniRot_obj,rotations),HX_CSTRING("rotations")},
	{hx::fsInt,(int)offsetof(FlxSpriteAniRot_obj,angleIndex),HX_CSTRING("angleIndex")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("cached"),
	HX_CSTRING("framesCache"),
	HX_CSTRING("rotations"),
	HX_CSTRING("angleIndex"),
	HX_CSTRING("destroy"),
	HX_CSTRING("update"),
	HX_CSTRING("calcFrame"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxSpriteAniRot_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxSpriteAniRot_obj::__mClass,"__mClass");
};

#endif

Class FlxSpriteAniRot_obj::__mClass;

void FlxSpriteAniRot_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.addons.display.FlxSpriteAniRot"), hx::TCanCast< FlxSpriteAniRot_obj> ,sStaticFields,sMemberFields,
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

void FlxSpriteAniRot_obj::__boot()
{
}

} // end namespace flixel
} // end namespace addons
} // end namespace display
