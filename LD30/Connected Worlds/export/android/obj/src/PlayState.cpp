#include <hxcpp.h>

#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Star
#include <Star.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_UI
#include <UI.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxInput
#include <flixel/interfaces/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSpriteUtil
#include <flixel/util/FlxSpriteUtil.h>
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

Void PlayState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("PlayState","new",0xf8bf96cf,"PlayState.new","PlayState.hx",8,0xb30d7781)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(27)
	this->drawingFrom = null();
	HX_STACK_LINE(24)
	this->connectionsUpdated = false;
	HX_STACK_LINE(23)
	this->drawingLine = false;
	HX_STACK_LINE(21)
	this->starArray = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(17)
	this->connections = Array_obj< ::Dynamic >::__new();
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","PlayState.hx",10,0xb30d7781)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(10)
	this->connection = _Function_1_1::Block();
	HX_STACK_LINE(8)
	super::__construct(MaxSize);
}
;
	return null();
}

//PlayState_obj::~PlayState_obj() { }

Dynamic PlayState_obj::__CreateEmpty() { return  new PlayState_obj; }
hx::ObjectPtr< PlayState_obj > PlayState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< PlayState_obj > result = new PlayState_obj();
	result->__construct(MaxSize);
	return result;}

Dynamic PlayState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PlayState_obj > result = new PlayState_obj();
	result->__construct(inArgs[0]);
	return result;}

Void PlayState_obj::create( ){
{
		HX_STACK_FRAME("PlayState","create",0x82220fed,"PlayState.create","PlayState.hx",31,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(32)
		this->super::create();
		HX_STACK_LINE(35)
		::flixel::FlxG_obj::camera->set_zoom((int)2);
		HX_STACK_LINE(38)
		::UI ui = ::UI_obj::__new();		HX_STACK_VAR(ui,"ui");
		HX_STACK_LINE(41)
		::flixel::FlxG_obj::camera->bgColor = (int)-16777216;
		HX_STACK_LINE(43)
		::flixel::FlxSprite _g = ::flixel::FlxSprite_obj::__new((int)0,(int)0,null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(43)
		this->skySurface = _g;
		HX_STACK_LINE(44)
		this->skySurface->makeGraphic(::flixel::FlxG_obj::width,::flixel::FlxG_obj::height,(int)0,null(),null());
		HX_STACK_LINE(46)
		::flixel::FlxSprite _g1 = ::flixel::FlxSprite_obj::__new((int)0,(int)0,null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(46)
		this->lineSurface = _g1;
		HX_STACK_LINE(47)
		this->lineSurface->makeGraphic(::flixel::FlxG_obj::width,::flixel::FlxG_obj::height,(int)0,null(),null());
		HX_STACK_LINE(48)
		this->add(this->lineSurface);
		HX_STACK_LINE(50)
		::flixel::FlxSprite _g2 = ::flixel::FlxSprite_obj::__new((int)0,(int)0,null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(50)
		this->connectionSurface = _g2;
		HX_STACK_LINE(51)
		this->connectionSurface->makeGraphic(::flixel::FlxG_obj::width,::flixel::FlxG_obj::height,(int)0,null(),null());
		HX_STACK_LINE(53)
		this->add(this->connectionSurface);
		HX_STACK_LINE(55)
		::flixel::FlxSprite star = ::flixel::FlxSprite_obj::__new((int)0,(int)0,null());		HX_STACK_VAR(star,"star");
		HX_STACK_LINE(56)
		star->makeGraphic((int)3,(int)3,(int)0,null(),null());
		HX_STACK_LINE(57)
		::flixel::util::FlxSpriteUtil_obj::drawCircle(star,(int)-1,(int)-1,(int)-1,(int)-1,null(),null(),null());
		HX_STACK_LINE(59)
		this->connection->__FieldRef(HX_CSTRING("color")) = (int)-1;
		HX_STACK_LINE(60)
		this->connection->__FieldRef(HX_CSTRING("thickness")) = (int)2;
		HX_STACK_LINE(88)
		this->add(this->skySurface);
		HX_STACK_LINE(90)
		{
			HX_STACK_LINE(90)
			int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(90)
			while((true)){
				HX_STACK_LINE(90)
				if ((!(((_g3 < (int)60))))){
					HX_STACK_LINE(90)
					break;
				}
				HX_STACK_LINE(90)
				int i = (_g3)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(92)
				int _g31 = ::Std_obj::random(::flixel::FlxG_obj::width);		HX_STACK_VAR(_g31,"_g31");
				HX_STACK_LINE(92)
				int _g4 = ::Std_obj::random(::flixel::FlxG_obj::height);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(92)
				int _g5 = ::Std_obj::random((int)4);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(92)
				int _g6 = (_g5 + (int)2);		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(92)
				::Star stTest = ::Star_obj::__new(_g31,_g4,_g6,i,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(stTest,"stTest");
				HX_STACK_LINE(94)
				this->add(stTest);
				HX_STACK_LINE(95)
				this->starArray->push(stTest);
			}
		}
	}
return null();
}


Void PlayState_obj::destroy( ){
{
		HX_STACK_FRAME("PlayState","destroy",0x6ec756e9,"PlayState.destroy","PlayState.hx",105,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(105)
		this->super::destroy();
	}
return null();
}


Void PlayState_obj::update( ){
{
		HX_STACK_FRAME("PlayState","update",0x8d182efa,"PlayState.update","PlayState.hx",109,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(110)
		this->super::update();
		HX_STACK_LINE(112)
		::flixel::util::FlxSpriteUtil_obj::fill(this->lineSurface,(int)0);
		HX_STACK_LINE(114)
		if ((this->drawingLine)){
			HX_STACK_LINE(116)
			::flixel::util::FlxSpriteUtil_obj::drawLine(this->lineSurface,this->drawingFrom->x,this->drawingFrom->y,::flixel::FlxG_obj::mouse->x,::flixel::FlxG_obj::mouse->y,this->connection,null());
		}
		HX_STACK_LINE(119)
		if ((::flixel::FlxG_obj::keys->checkKeyStatus(Array_obj< ::String >::__new().Add(HX_CSTRING("R")),(int)1))){
			HX_STACK_LINE(121)
			::flixel::FlxState State = ::PlayState_obj::__new(null());		HX_STACK_VAR(State,"State");
			HX_STACK_LINE(121)
			::flixel::FlxG_obj::game->_requestedState = State;
		}
	}
return null();
}



PlayState_obj::PlayState_obj()
{
}

void PlayState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayState);
	HX_MARK_MEMBER_NAME(connection,"connection");
	HX_MARK_MEMBER_NAME(skySurface,"skySurface");
	HX_MARK_MEMBER_NAME(lineSurface,"lineSurface");
	HX_MARK_MEMBER_NAME(connectionSurface,"connectionSurface");
	HX_MARK_MEMBER_NAME(connections,"connections");
	HX_MARK_MEMBER_NAME(starArray,"starArray");
	HX_MARK_MEMBER_NAME(drawingLine,"drawingLine");
	HX_MARK_MEMBER_NAME(connectionsUpdated,"connectionsUpdated");
	HX_MARK_MEMBER_NAME(drawingFrom,"drawingFrom");
	HX_MARK_MEMBER_NAME(highlighted,"highlighted");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlayState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(connection,"connection");
	HX_VISIT_MEMBER_NAME(skySurface,"skySurface");
	HX_VISIT_MEMBER_NAME(lineSurface,"lineSurface");
	HX_VISIT_MEMBER_NAME(connectionSurface,"connectionSurface");
	HX_VISIT_MEMBER_NAME(connections,"connections");
	HX_VISIT_MEMBER_NAME(starArray,"starArray");
	HX_VISIT_MEMBER_NAME(drawingLine,"drawingLine");
	HX_VISIT_MEMBER_NAME(connectionsUpdated,"connectionsUpdated");
	HX_VISIT_MEMBER_NAME(drawingFrom,"drawingFrom");
	HX_VISIT_MEMBER_NAME(highlighted,"highlighted");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PlayState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"starArray") ) { return starArray; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"connection") ) { return connection; }
		if (HX_FIELD_EQ(inName,"skySurface") ) { return skySurface; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"lineSurface") ) { return lineSurface; }
		if (HX_FIELD_EQ(inName,"connections") ) { return connections; }
		if (HX_FIELD_EQ(inName,"drawingLine") ) { return drawingLine; }
		if (HX_FIELD_EQ(inName,"drawingFrom") ) { return drawingFrom; }
		if (HX_FIELD_EQ(inName,"highlighted") ) { return highlighted; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"connectionSurface") ) { return connectionSurface; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"connectionsUpdated") ) { return connectionsUpdated; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PlayState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"starArray") ) { starArray=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"connection") ) { connection=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"skySurface") ) { skySurface=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"lineSurface") ) { lineSurface=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"connections") ) { connections=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"drawingLine") ) { drawingLine=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"drawingFrom") ) { drawingFrom=inValue.Cast< ::Star >(); return inValue; }
		if (HX_FIELD_EQ(inName,"highlighted") ) { highlighted=inValue.Cast< ::Star >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"connectionSurface") ) { connectionSurface=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"connectionsUpdated") ) { connectionsUpdated=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlayState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("connection"));
	outFields->push(HX_CSTRING("skySurface"));
	outFields->push(HX_CSTRING("lineSurface"));
	outFields->push(HX_CSTRING("connectionSurface"));
	outFields->push(HX_CSTRING("connections"));
	outFields->push(HX_CSTRING("starArray"));
	outFields->push(HX_CSTRING("drawingLine"));
	outFields->push(HX_CSTRING("connectionsUpdated"));
	outFields->push(HX_CSTRING("drawingFrom"));
	outFields->push(HX_CSTRING("highlighted"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(PlayState_obj,connection),HX_CSTRING("connection")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(PlayState_obj,skySurface),HX_CSTRING("skySurface")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(PlayState_obj,lineSurface),HX_CSTRING("lineSurface")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(PlayState_obj,connectionSurface),HX_CSTRING("connectionSurface")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(PlayState_obj,connections),HX_CSTRING("connections")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(PlayState_obj,starArray),HX_CSTRING("starArray")},
	{hx::fsBool,(int)offsetof(PlayState_obj,drawingLine),HX_CSTRING("drawingLine")},
	{hx::fsBool,(int)offsetof(PlayState_obj,connectionsUpdated),HX_CSTRING("connectionsUpdated")},
	{hx::fsObject /*::Star*/ ,(int)offsetof(PlayState_obj,drawingFrom),HX_CSTRING("drawingFrom")},
	{hx::fsObject /*::Star*/ ,(int)offsetof(PlayState_obj,highlighted),HX_CSTRING("highlighted")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("connection"),
	HX_CSTRING("skySurface"),
	HX_CSTRING("lineSurface"),
	HX_CSTRING("connectionSurface"),
	HX_CSTRING("connections"),
	HX_CSTRING("starArray"),
	HX_CSTRING("drawingLine"),
	HX_CSTRING("connectionsUpdated"),
	HX_CSTRING("drawingFrom"),
	HX_CSTRING("highlighted"),
	HX_CSTRING("create"),
	HX_CSTRING("destroy"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
};

#endif

Class PlayState_obj::__mClass;

void PlayState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("PlayState"), hx::TCanCast< PlayState_obj> ,sStaticFields,sMemberFields,
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

void PlayState_obj::__boot()
{
}

