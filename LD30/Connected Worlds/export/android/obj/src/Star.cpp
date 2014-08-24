#include <hxcpp.h>

#ifndef INCLUDED_Connection
#include <Connection.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Star
#include <Star.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_effects_FlxFlicker
#include <flixel/effects/FlxFlicker.h>
#endif
#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseButton
#include <flixel/input/mouse/FlxMouseButton.h>
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
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSpriteUtil
#include <flixel/util/FlxSpriteUtil.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
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

Void Star_obj::__construct(Float x,Float y,int size,Dynamic id,::PlayState parent)
{
HX_STACK_FRAME("Star","new",0xee1c91e4,"Star.new","Star.hx",8,0x0237360c)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
HX_STACK_ARG(size,"size")
HX_STACK_ARG(id,"id")
HX_STACK_ARG(parent,"parent")
{
	HX_STACK_LINE(14)
	this->connections = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(13)
	this->connectedTo = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(22)
	super::__construct(x,y,null(),null());
	HX_STACK_LINE(24)
	this->ID = id;
	HX_STACK_LINE(25)
	this->size = size;
	HX_STACK_LINE(26)
	this->parent = parent;
	HX_STACK_LINE(28)
	::flixel::FlxSprite _g = ::flixel::FlxSprite_obj::__new(x,y,null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(28)
	this->starGraphic = _g;
	HX_STACK_LINE(29)
	this->starGraphic->makeGraphic(size,size,(int)-65281,null(),null());
	HX_STACK_LINE(30)
	::flixel::util::FlxSpriteUtil_obj::drawCircle(this->starGraphic,(int)-1,(int)-1,(int)-1,(int)-1,null(),null(),null());
	HX_STACK_LINE(32)
	::flixel::util::FlxPoint _g1 = this->starGraphic->getGraphicMidpoint(null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(32)
	this->mid = _g1;
	HX_STACK_LINE(34)
	::flixel::text::FlxText _g2 = ::flixel::text::FlxText_obj::__new((x - (int)16),(y - (int)16),(int)0,HX_CSTRING("0"),(int)16,null());		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(34)
	this->starText = _g2;
	HX_STACK_LINE(35)
	this->starText->set_font(HX_CSTRING("assets/data/dos437.ttf"));
	HX_STACK_LINE(36)
	::flixel::FlxG_obj::game->_state->add(this->starText);
	HX_STACK_LINE(37)
	this->starText->set_visible(false);
	HX_STACK_LINE(40)
	Float _g3 = ::Math_obj::random();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(40)
	if (((  (((_g3 > 0.9))) ? bool((size < (int)4)) : bool(false) ))){
		HX_STACK_LINE(40)
		::flixel::FlxObject Object = this->starGraphic;		HX_STACK_VAR(Object,"Object");
		HX_STACK_LINE(40)
		bool ForceRestart = true;		HX_STACK_VAR(ForceRestart,"ForceRestart");
		HX_STACK_LINE(40)
		::flixel::effects::FlxFlicker_obj::flicker(Object,(int)0,0.5,true,ForceRestart,null(),null());
		HX_STACK_LINE(40)
		Object;
	}
	HX_STACK_LINE(41)
	::flixel::FlxG_obj::game->_state->add(this->starGraphic);
}
;
	return null();
}

//Star_obj::~Star_obj() { }

Dynamic Star_obj::__CreateEmpty() { return  new Star_obj; }
hx::ObjectPtr< Star_obj > Star_obj::__new(Float x,Float y,int size,Dynamic id,::PlayState parent)
{  hx::ObjectPtr< Star_obj > result = new Star_obj();
	result->__construct(x,y,size,id,parent);
	return result;}

Dynamic Star_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Star_obj > result = new Star_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}

Void Star_obj::update( ){
{
		HX_STACK_FRAME("Star","update",0x4fab8f05,"Star.update","Star.hx",45,0x0237360c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(46)
		this->super::update();
		HX_STACK_LINE(47)
		this->starGraphic->set_color((int)-1);
		HX_STACK_LINE(48)
		this->starText->set_visible(false);
		HX_STACK_LINE(49)
		this->starText->set_text((this->connections->length + HX_CSTRING("")));
		HX_STACK_LINE(51)
		Float xx = ::flixel::FlxG_obj::mouse->x;		HX_STACK_VAR(xx,"xx");
		HX_STACK_LINE(52)
		Float yy = ::flixel::FlxG_obj::mouse->y;		HX_STACK_VAR(yy,"yy");
		HX_STACK_LINE(54)
		if ((this->optimizedCheckDist(::flixel::FlxG_obj::mouse->x,::flixel::FlxG_obj::mouse->y))){
			HX_STACK_LINE(56)
			this->starGraphic->set_color((int)-16776961);
			HX_STACK_LINE(57)
			this->parent->highlighted = hx::ObjectPtr<OBJ_>(this);
			HX_STACK_LINE(58)
			this->starText->set_visible(true);
			struct _Function_2_1{
				inline static bool Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Star.hx",60,0x0237360c)
					{
						HX_STACK_LINE(60)
						::flixel::input::mouse::FlxMouseButton _this = ::flixel::FlxG_obj::mouse->_leftButton;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(60)
						return (bool((_this->current == (int)-1)) || bool((_this->current == (int)-2)));
					}
					return null();
				}
			};
			HX_STACK_LINE(60)
			if (((bool(_Function_2_1::Block()) && bool(!(this->parent->drawingLine))))){
				HX_STACK_LINE(62)
				this->parent->drawingLine = true;
				HX_STACK_LINE(63)
				this->parent->drawingFrom = hx::ObjectPtr<OBJ_>(this);
			}
			else{
				struct _Function_3_1{
					inline static bool Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Star.hx",67,0x0237360c)
						{
							HX_STACK_LINE(67)
							::flixel::input::mouse::FlxMouseButton _this = ::flixel::FlxG_obj::mouse->_leftButton;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(67)
							return (bool((_this->current == (int)-1)) || bool((_this->current == (int)-2)));
						}
						return null();
					}
				};
				HX_STACK_LINE(67)
				if (((bool(_Function_3_1::Block()) && bool(this->parent->drawingLine)))){
					HX_STACK_LINE(69)
					this->parent->drawingLine = false;
					HX_STACK_LINE(70)
					::Connection x = ::Connection_obj::__new(hx::ObjectPtr<OBJ_>(this),this->parent->drawingFrom);		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(71)
					::flixel::FlxG_obj::game->_state->add(x);
					HX_STACK_LINE(72)
					this->parent->connectionsUpdated = true;
				}
			}
		}
	}
return null();
}


Void Star_obj::destroy( ){
{
		HX_STACK_FRAME("Star","destroy",0xed28007e,"Star.destroy","Star.hx",78,0x0237360c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(79)
		this->starGraphic->destroy();
		HX_STACK_LINE(80)
		this->super::destroy();
	}
return null();
}


bool Star_obj::checkDistance( Float chkX,Float chkY,Float dist){
	HX_STACK_FRAME("Star","checkDistance",0x6da73ea1,"Star.checkDistance","Star.hx",84,0x0237360c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(chkX,"chkX")
	HX_STACK_ARG(chkY,"chkY")
	HX_STACK_ARG(dist,"dist")
	HX_STACK_LINE(86)
	if (((bool(((this->mid->x - dist) < chkX)) && bool(((this->mid->x + dist) > chkX))))){
		HX_STACK_LINE(88)
		if (((bool(((this->mid->y - dist) < chkY)) && bool(((this->mid->y + dist) > chkY))))){
			HX_STACK_LINE(90)
			return true;
		}
	}
	HX_STACK_LINE(93)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC3(Star_obj,checkDistance,return )

bool Star_obj::optimizedCheckDist( Float xx,Float yy){
	HX_STACK_FRAME("Star","optimizedCheckDist",0x7a029963,"Star.optimizedCheckDist","Star.hx",97,0x0237360c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(xx,"xx")
	HX_STACK_ARG(yy,"yy")
	HX_STACK_LINE(98)
	if ((this->checkDistance(xx,yy,(int)400))){
		HX_STACK_LINE(100)
		if ((this->checkDistance(xx,yy,(int)100))){
			HX_STACK_LINE(102)
			if ((this->checkDistance(xx,yy,(int)10))){
				HX_STACK_LINE(106)
				return true;
			}
			else{
				HX_STACK_LINE(111)
				return false;
			}
		}
		else{
			HX_STACK_LINE(117)
			return false;
		}
	}
	HX_STACK_LINE(120)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(Star_obj,optimizedCheckDist,return )


Star_obj::Star_obj()
{
}

void Star_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Star);
	HX_MARK_MEMBER_NAME(mid,"mid");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(connectedTo,"connectedTo");
	HX_MARK_MEMBER_NAME(connections,"connections");
	HX_MARK_MEMBER_NAME(starGraphic,"starGraphic");
	HX_MARK_MEMBER_NAME(starText,"starText");
	::flixel::FlxObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Star_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mid,"mid");
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(connectedTo,"connectedTo");
	HX_VISIT_MEMBER_NAME(connections,"connections");
	HX_VISIT_MEMBER_NAME(starGraphic,"starGraphic");
	HX_VISIT_MEMBER_NAME(starText,"starText");
	::flixel::FlxObject_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Star_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"mid") ) { return mid; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { return size; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { return parent; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"starText") ) { return starText; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"connectedTo") ) { return connectedTo; }
		if (HX_FIELD_EQ(inName,"connections") ) { return connections; }
		if (HX_FIELD_EQ(inName,"starGraphic") ) { return starGraphic; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"checkDistance") ) { return checkDistance_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"optimizedCheckDist") ) { return optimizedCheckDist_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Star_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"mid") ) { mid=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { size=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::PlayState >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"starText") ) { starText=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"connectedTo") ) { connectedTo=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"connections") ) { connections=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"starGraphic") ) { starGraphic=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Star_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("mid"));
	outFields->push(HX_CSTRING("size"));
	outFields->push(HX_CSTRING("parent"));
	outFields->push(HX_CSTRING("connectedTo"));
	outFields->push(HX_CSTRING("connections"));
	outFields->push(HX_CSTRING("starGraphic"));
	outFields->push(HX_CSTRING("starText"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(Star_obj,mid),HX_CSTRING("mid")},
	{hx::fsInt,(int)offsetof(Star_obj,size),HX_CSTRING("size")},
	{hx::fsObject /*::PlayState*/ ,(int)offsetof(Star_obj,parent),HX_CSTRING("parent")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Star_obj,connectedTo),HX_CSTRING("connectedTo")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Star_obj,connections),HX_CSTRING("connections")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(Star_obj,starGraphic),HX_CSTRING("starGraphic")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(Star_obj,starText),HX_CSTRING("starText")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("mid"),
	HX_CSTRING("size"),
	HX_CSTRING("parent"),
	HX_CSTRING("connectedTo"),
	HX_CSTRING("connections"),
	HX_CSTRING("starGraphic"),
	HX_CSTRING("starText"),
	HX_CSTRING("update"),
	HX_CSTRING("destroy"),
	HX_CSTRING("checkDistance"),
	HX_CSTRING("optimizedCheckDist"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Star_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Star_obj::__mClass,"__mClass");
};

#endif

Class Star_obj::__mClass;

void Star_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Star"), hx::TCanCast< Star_obj> ,sStaticFields,sMemberFields,
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

void Star_obj::__boot()
{
}

