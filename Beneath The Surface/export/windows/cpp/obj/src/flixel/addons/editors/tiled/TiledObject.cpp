#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledMap
#include <flixel/addons/editors/tiled/TiledMap.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledObject
#include <flixel/addons/editors/tiled/TiledObject.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledObjectGroup
#include <flixel/addons/editors/tiled/TiledObjectGroup.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledPropertySet
#include <flixel/addons/editors/tiled/TiledPropertySet.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledTileSet
#include <flixel/addons/editors/tiled/TiledTileSet.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_FlxPoint
#include <flixel/util/FlxPool_flixel_util_FlxPoint.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_xml_Fast
#include <haxe/xml/Fast.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_AttribAccess
#include <haxe/xml/_Fast/AttribAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_HasAttribAccess
#include <haxe/xml/_Fast/HasAttribAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_HasNodeAccess
#include <haxe/xml/_Fast/HasNodeAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeAccess
#include <haxe/xml/_Fast/NodeAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeListAccess
#include <haxe/xml/_Fast/NodeListAccess.h>
#endif
namespace flixel{
namespace addons{
namespace editors{
namespace tiled{

Void TiledObject_obj::__construct(::haxe::xml::Fast Source,::flixel::addons::editors::tiled::TiledObjectGroup Parent)
{
HX_STACK_FRAME("flixel.addons.editors.tiled.TiledObject","new",0x3a8d437e,"flixel.addons.editors.tiled.TiledObject.new","flixel/addons/editors/tiled/TiledObject.hx",73,0x5c109e14)
HX_STACK_THIS(this)
HX_STACK_ARG(Source,"Source")
HX_STACK_ARG(Parent,"Parent")
{
	HX_STACK_LINE(74)
	this->xmlData = Source;
	HX_STACK_LINE(75)
	this->group = Parent;
	HX_STACK_LINE(76)
	::String _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(76)
	if ((Source->has->resolve(HX_CSTRING("name")))){
		HX_STACK_LINE(76)
		_g = Source->att->resolve(HX_CSTRING("name"));
	}
	else{
		HX_STACK_LINE(76)
		_g = HX_CSTRING("[object]");
	}
	HX_STACK_LINE(76)
	this->name = _g;
	HX_STACK_LINE(77)
	::String _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(77)
	if ((Source->has->resolve(HX_CSTRING("type")))){
		HX_STACK_LINE(77)
		_g1 = Source->att->resolve(HX_CSTRING("type"));
	}
	else{
		HX_STACK_LINE(77)
		_g1 = Parent->name;
	}
	HX_STACK_LINE(77)
	this->type = _g1;
	HX_STACK_LINE(78)
	::String _g2 = Source->att->resolve(HX_CSTRING("x"));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(78)
	Dynamic _g3 = ::Std_obj::parseInt(_g2);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(78)
	this->x = _g3;
	HX_STACK_LINE(79)
	::String _g4 = Source->att->resolve(HX_CSTRING("y"));		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(79)
	Dynamic _g5 = ::Std_obj::parseInt(_g4);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(79)
	this->y = _g5;
	HX_STACK_LINE(80)
	int _g7;		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(80)
	if ((Source->has->resolve(HX_CSTRING("width")))){
		HX_STACK_LINE(80)
		::String _g6 = Source->att->resolve(HX_CSTRING("width"));		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(80)
		_g7 = ::Std_obj::parseInt(_g6);
	}
	else{
		HX_STACK_LINE(80)
		_g7 = (int)0;
	}
	HX_STACK_LINE(80)
	this->width = _g7;
	HX_STACK_LINE(81)
	int _g9;		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(81)
	if ((Source->has->resolve(HX_CSTRING("height")))){
		HX_STACK_LINE(81)
		::String _g8 = Source->att->resolve(HX_CSTRING("height"));		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(81)
		_g9 = ::Std_obj::parseInt(_g8);
	}
	else{
		HX_STACK_LINE(81)
		_g9 = (int)0;
	}
	HX_STACK_LINE(81)
	this->height = _g9;
	HX_STACK_LINE(82)
	Float _g11;		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(82)
	if ((Source->has->resolve(HX_CSTRING("rotation")))){
		HX_STACK_LINE(82)
		::String _g10 = Source->att->resolve(HX_CSTRING("rotation"));		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(82)
		_g11 = ::Std_obj::parseFloat(_g10);
	}
	else{
		HX_STACK_LINE(82)
		_g11 = (int)0;
	}
	HX_STACK_LINE(82)
	this->angle = _g11;
	HX_STACK_LINE(84)
	this->objectType = (int)0;
	HX_STACK_LINE(87)
	this->shared = null();
	HX_STACK_LINE(88)
	this->gid = (int)-1;
	HX_STACK_LINE(91)
	if (((  ((Source->has->resolve(HX_CSTRING("gid")))) ? bool((Source->att->resolve(HX_CSTRING("gid")).length != (int)0)) : bool(false) ))){
		HX_STACK_LINE(93)
		::String _g12 = Source->att->resolve(HX_CSTRING("gid"));		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(93)
		Dynamic _g13 = ::Std_obj::parseInt(_g12);		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(93)
		this->gid = _g13;
		HX_STACK_LINE(94)
		::flixel::addons::editors::tiled::TiledTileSet set;		HX_STACK_VAR(set,"set");
		HX_STACK_LINE(96)
		for(::cpp::FastIterator_obj< ::flixel::addons::editors::tiled::TiledTileSet > *__it = ::cpp::CreateFastIterator< ::flixel::addons::editors::tiled::TiledTileSet >(this->group->map->tilesets->iterator());  __it->hasNext(); ){
			::flixel::addons::editors::tiled::TiledTileSet set1 = __it->next();
			{
				HX_STACK_LINE(98)
				::flixel::addons::editors::tiled::TiledPropertySet _g14 = set1->getPropertiesByGid(this->gid);		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(98)
				this->shared = _g14;
				HX_STACK_LINE(100)
				if (((this->shared != null()))){
					HX_STACK_LINE(102)
					break;
				}
			}
;
		}
		HX_STACK_LINE(106)
		this->objectType = (int)4;
	}
	HX_STACK_LINE(110)
	::Xml node;		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(111)
	::flixel::addons::editors::tiled::TiledPropertySet _g15 = ::flixel::addons::editors::tiled::TiledPropertySet_obj::__new();		HX_STACK_VAR(_g15,"_g15");
	HX_STACK_LINE(111)
	this->custom = _g15;
	HX_STACK_LINE(113)
	for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(Source->nodes->resolve(HX_CSTRING("properties"))->iterator());  __it->hasNext(); ){
		::haxe::xml::Fast node1 = __it->next();
		this->custom->extend(node1);
	}
	HX_STACK_LINE(119)
	if ((Source->hasNode->resolve(HX_CSTRING("ellipse")))){
		HX_STACK_LINE(120)
		this->objectType = (int)1;
	}
	else{
		HX_STACK_LINE(121)
		if ((Source->hasNode->resolve(HX_CSTRING("polygon")))){
			HX_STACK_LINE(122)
			this->objectType = (int)2;
			HX_STACK_LINE(123)
			::haxe::xml::Fast _g16 = Source->node->resolve(HX_CSTRING("polygon"));		HX_STACK_VAR(_g16,"_g16");
			HX_STACK_LINE(123)
			this->getPoints(_g16);
		}
		else{
			HX_STACK_LINE(124)
			if ((Source->hasNode->resolve(HX_CSTRING("polyline")))){
				HX_STACK_LINE(125)
				this->objectType = (int)3;
				HX_STACK_LINE(126)
				::haxe::xml::Fast _g17 = Source->node->resolve(HX_CSTRING("polyline"));		HX_STACK_VAR(_g17,"_g17");
				HX_STACK_LINE(126)
				this->getPoints(_g17);
			}
		}
	}
}
;
	return null();
}

//TiledObject_obj::~TiledObject_obj() { }

Dynamic TiledObject_obj::__CreateEmpty() { return  new TiledObject_obj; }
hx::ObjectPtr< TiledObject_obj > TiledObject_obj::__new(::haxe::xml::Fast Source,::flixel::addons::editors::tiled::TiledObjectGroup Parent)
{  hx::ObjectPtr< TiledObject_obj > result = new TiledObject_obj();
	result->__construct(Source,Parent);
	return result;}

Dynamic TiledObject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TiledObject_obj > result = new TiledObject_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void TiledObject_obj::getPoints( ::haxe::xml::Fast Node){
{
		HX_STACK_FRAME("flixel.addons.editors.tiled.TiledObject","getPoints",0xa25a38f7,"flixel.addons.editors.tiled.TiledObject.getPoints","flixel/addons/editors/tiled/TiledObject.hx",130,0x5c109e14)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Node,"Node")
		HX_STACK_LINE(131)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(131)
		this->points = _g;
		HX_STACK_LINE(133)
		Array< ::String > pointsStr = Node->att->resolve(HX_CSTRING("points")).split(HX_CSTRING(" "));		HX_STACK_VAR(pointsStr,"pointsStr");
		HX_STACK_LINE(134)
		Array< ::String > pair;		HX_STACK_VAR(pair,"pair");
		HX_STACK_LINE(135)
		{
			HX_STACK_LINE(135)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(135)
			while((true)){
				HX_STACK_LINE(135)
				if ((!(((_g1 < pointsStr->length))))){
					HX_STACK_LINE(135)
					break;
				}
				HX_STACK_LINE(135)
				::String p = pointsStr->__get(_g1);		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(135)
				++(_g1);
				HX_STACK_LINE(136)
				Array< ::String > _g11 = p.split(HX_CSTRING(","));		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(136)
				pair = _g11;
				HX_STACK_LINE(137)
				::flixel::util::FlxPoint _g2;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(137)
				{
					HX_STACK_LINE(137)
					Float X = ::Std_obj::parseFloat(pair->__get((int)0));		HX_STACK_VAR(X,"X");
					HX_STACK_LINE(137)
					Float Y = ::Std_obj::parseFloat(pair->__get((int)1));		HX_STACK_VAR(Y,"Y");
					HX_STACK_LINE(137)
					::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
					HX_STACK_LINE(137)
					point->_inPool = false;
					HX_STACK_LINE(137)
					_g2 = point;
				}
				HX_STACK_LINE(137)
				this->points->push(_g2);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TiledObject_obj,getPoints,(void))

bool TiledObject_obj::get_flippedHorizontally( ){
	HX_STACK_FRAME("flixel.addons.editors.tiled.TiledObject","get_flippedHorizontally",0x96c60c88,"flixel.addons.editors.tiled.TiledObject.get_flippedHorizontally","flixel/addons/editors/tiled/TiledObject.hx",146,0x5c109e14)
	HX_STACK_THIS(this)
	HX_STACK_LINE(146)
	return (int(this->gid) & int((int)-2147483648));
}


HX_DEFINE_DYNAMIC_FUNC0(TiledObject_obj,get_flippedHorizontally,return )

bool TiledObject_obj::get_flippedVertically( ){
	HX_STACK_FRAME("flixel.addons.editors.tiled.TiledObject","get_flippedVertically",0xd9ef50da,"flixel.addons.editors.tiled.TiledObject.get_flippedVertically","flixel/addons/editors/tiled/TiledObject.hx",151,0x5c109e14)
	HX_STACK_THIS(this)
	HX_STACK_LINE(151)
	return (int(this->gid) & int((int)1073741824));
}


HX_DEFINE_DYNAMIC_FUNC0(TiledObject_obj,get_flippedVertically,return )

int TiledObject_obj::FLIPPED_VERTICALLY_FLAG;

int TiledObject_obj::FLIPPED_HORIZONTALLY_FLAG;

int TiledObject_obj::RECTANGLE;

int TiledObject_obj::ELLIPSE;

int TiledObject_obj::POLYGON;

int TiledObject_obj::POLYLINE;

int TiledObject_obj::TILE;


TiledObject_obj::TiledObject_obj()
{
}

void TiledObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TiledObject);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(xmlData,"xmlData");
	HX_MARK_MEMBER_NAME(angle,"angle");
	HX_MARK_MEMBER_NAME(gid,"gid");
	HX_MARK_MEMBER_NAME(custom,"custom");
	HX_MARK_MEMBER_NAME(shared,"shared");
	HX_MARK_MEMBER_NAME(group,"group");
	HX_MARK_MEMBER_NAME(objectType,"objectType");
	HX_MARK_MEMBER_NAME(flippedHorizontally,"flippedHorizontally");
	HX_MARK_MEMBER_NAME(flippedVertically,"flippedVertically");
	HX_MARK_MEMBER_NAME(points,"points");
	HX_MARK_END_CLASS();
}

void TiledObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(xmlData,"xmlData");
	HX_VISIT_MEMBER_NAME(angle,"angle");
	HX_VISIT_MEMBER_NAME(gid,"gid");
	HX_VISIT_MEMBER_NAME(custom,"custom");
	HX_VISIT_MEMBER_NAME(shared,"shared");
	HX_VISIT_MEMBER_NAME(group,"group");
	HX_VISIT_MEMBER_NAME(objectType,"objectType");
	HX_VISIT_MEMBER_NAME(flippedHorizontally,"flippedHorizontally");
	HX_VISIT_MEMBER_NAME(flippedVertically,"flippedVertically");
	HX_VISIT_MEMBER_NAME(points,"points");
}

Dynamic TiledObject_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"gid") ) { return gid; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"angle") ) { return angle; }
		if (HX_FIELD_EQ(inName,"group") ) { return group; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"custom") ) { return custom; }
		if (HX_FIELD_EQ(inName,"shared") ) { return shared; }
		if (HX_FIELD_EQ(inName,"points") ) { return points; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"xmlData") ) { return xmlData; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getPoints") ) { return getPoints_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"objectType") ) { return objectType; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"flippedVertically") ) { return inCallProp ? get_flippedVertically() : flippedVertically; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"flippedHorizontally") ) { return inCallProp ? get_flippedHorizontally() : flippedHorizontally; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_flippedVertically") ) { return get_flippedVertically_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"get_flippedHorizontally") ) { return get_flippedHorizontally_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TiledObject_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< int >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"gid") ) { gid=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angle") ) { angle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"group") ) { group=inValue.Cast< ::flixel::addons::editors::tiled::TiledObjectGroup >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"custom") ) { custom=inValue.Cast< ::flixel::addons::editors::tiled::TiledPropertySet >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shared") ) { shared=inValue.Cast< ::flixel::addons::editors::tiled::TiledPropertySet >(); return inValue; }
		if (HX_FIELD_EQ(inName,"points") ) { points=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"xmlData") ) { xmlData=inValue.Cast< ::haxe::xml::Fast >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"objectType") ) { objectType=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"flippedVertically") ) { flippedVertically=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"flippedHorizontally") ) { flippedHorizontally=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TiledObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("type"));
	outFields->push(HX_CSTRING("xmlData"));
	outFields->push(HX_CSTRING("angle"));
	outFields->push(HX_CSTRING("gid"));
	outFields->push(HX_CSTRING("custom"));
	outFields->push(HX_CSTRING("shared"));
	outFields->push(HX_CSTRING("group"));
	outFields->push(HX_CSTRING("objectType"));
	outFields->push(HX_CSTRING("flippedHorizontally"));
	outFields->push(HX_CSTRING("flippedVertically"));
	outFields->push(HX_CSTRING("points"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("FLIPPED_VERTICALLY_FLAG"),
	HX_CSTRING("FLIPPED_HORIZONTALLY_FLAG"),
	HX_CSTRING("RECTANGLE"),
	HX_CSTRING("ELLIPSE"),
	HX_CSTRING("POLYGON"),
	HX_CSTRING("POLYLINE"),
	HX_CSTRING("TILE"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(TiledObject_obj,x),HX_CSTRING("x")},
	{hx::fsInt,(int)offsetof(TiledObject_obj,y),HX_CSTRING("y")},
	{hx::fsInt,(int)offsetof(TiledObject_obj,width),HX_CSTRING("width")},
	{hx::fsInt,(int)offsetof(TiledObject_obj,height),HX_CSTRING("height")},
	{hx::fsString,(int)offsetof(TiledObject_obj,name),HX_CSTRING("name")},
	{hx::fsString,(int)offsetof(TiledObject_obj,type),HX_CSTRING("type")},
	{hx::fsObject /*::haxe::xml::Fast*/ ,(int)offsetof(TiledObject_obj,xmlData),HX_CSTRING("xmlData")},
	{hx::fsFloat,(int)offsetof(TiledObject_obj,angle),HX_CSTRING("angle")},
	{hx::fsInt,(int)offsetof(TiledObject_obj,gid),HX_CSTRING("gid")},
	{hx::fsObject /*::flixel::addons::editors::tiled::TiledPropertySet*/ ,(int)offsetof(TiledObject_obj,custom),HX_CSTRING("custom")},
	{hx::fsObject /*::flixel::addons::editors::tiled::TiledPropertySet*/ ,(int)offsetof(TiledObject_obj,shared),HX_CSTRING("shared")},
	{hx::fsObject /*::flixel::addons::editors::tiled::TiledObjectGroup*/ ,(int)offsetof(TiledObject_obj,group),HX_CSTRING("group")},
	{hx::fsInt,(int)offsetof(TiledObject_obj,objectType),HX_CSTRING("objectType")},
	{hx::fsBool,(int)offsetof(TiledObject_obj,flippedHorizontally),HX_CSTRING("flippedHorizontally")},
	{hx::fsBool,(int)offsetof(TiledObject_obj,flippedVertically),HX_CSTRING("flippedVertically")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TiledObject_obj,points),HX_CSTRING("points")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	HX_CSTRING("width"),
	HX_CSTRING("height"),
	HX_CSTRING("name"),
	HX_CSTRING("type"),
	HX_CSTRING("xmlData"),
	HX_CSTRING("angle"),
	HX_CSTRING("gid"),
	HX_CSTRING("custom"),
	HX_CSTRING("shared"),
	HX_CSTRING("group"),
	HX_CSTRING("objectType"),
	HX_CSTRING("flippedHorizontally"),
	HX_CSTRING("flippedVertically"),
	HX_CSTRING("points"),
	HX_CSTRING("getPoints"),
	HX_CSTRING("get_flippedHorizontally"),
	HX_CSTRING("get_flippedVertically"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TiledObject_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TiledObject_obj::FLIPPED_VERTICALLY_FLAG,"FLIPPED_VERTICALLY_FLAG");
	HX_MARK_MEMBER_NAME(TiledObject_obj::FLIPPED_HORIZONTALLY_FLAG,"FLIPPED_HORIZONTALLY_FLAG");
	HX_MARK_MEMBER_NAME(TiledObject_obj::RECTANGLE,"RECTANGLE");
	HX_MARK_MEMBER_NAME(TiledObject_obj::ELLIPSE,"ELLIPSE");
	HX_MARK_MEMBER_NAME(TiledObject_obj::POLYGON,"POLYGON");
	HX_MARK_MEMBER_NAME(TiledObject_obj::POLYLINE,"POLYLINE");
	HX_MARK_MEMBER_NAME(TiledObject_obj::TILE,"TILE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TiledObject_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TiledObject_obj::FLIPPED_VERTICALLY_FLAG,"FLIPPED_VERTICALLY_FLAG");
	HX_VISIT_MEMBER_NAME(TiledObject_obj::FLIPPED_HORIZONTALLY_FLAG,"FLIPPED_HORIZONTALLY_FLAG");
	HX_VISIT_MEMBER_NAME(TiledObject_obj::RECTANGLE,"RECTANGLE");
	HX_VISIT_MEMBER_NAME(TiledObject_obj::ELLIPSE,"ELLIPSE");
	HX_VISIT_MEMBER_NAME(TiledObject_obj::POLYGON,"POLYGON");
	HX_VISIT_MEMBER_NAME(TiledObject_obj::POLYLINE,"POLYLINE");
	HX_VISIT_MEMBER_NAME(TiledObject_obj::TILE,"TILE");
};

#endif

Class TiledObject_obj::__mClass;

void TiledObject_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.addons.editors.tiled.TiledObject"), hx::TCanCast< TiledObject_obj> ,sStaticFields,sMemberFields,
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

void TiledObject_obj::__boot()
{
	FLIPPED_VERTICALLY_FLAG= (int)1073741824;
	FLIPPED_HORIZONTALLY_FLAG= (int)-2147483648;
	RECTANGLE= (int)0;
	ELLIPSE= (int)1;
	POLYGON= (int)2;
	POLYLINE= (int)3;
	TILE= (int)4;
}

} // end namespace flixel
} // end namespace addons
} // end namespace editors
} // end namespace tiled
