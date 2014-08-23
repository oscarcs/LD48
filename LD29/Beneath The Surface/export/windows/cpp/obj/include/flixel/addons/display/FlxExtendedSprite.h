#ifndef INCLUDED_flixel_addons_display_FlxExtendedSprite
#define INCLUDED_flixel_addons_display_FlxExtendedSprite

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/FlxSprite.h>
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,addons,display,FlxExtendedSprite)
HX_DECLARE_CLASS3(flixel,addons,display,FlxMouseSpring)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxPooled)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,FlxRect)
namespace flixel{
namespace addons{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  FlxExtendedSprite_obj : public ::flixel::FlxSprite_obj{
	public:
		typedef ::flixel::FlxSprite_obj super;
		typedef FlxExtendedSprite_obj OBJ_;
		FlxExtendedSprite_obj();
		Void __construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Dynamic SimpleGraphic);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FlxExtendedSprite_obj > __new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Dynamic SimpleGraphic);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxExtendedSprite_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxExtendedSprite"); }

		int priorityID;
		bool isPressed;
		bool clickable;
		bool throwable;
		::flixel::util::FlxRect boundsRect;
		::flixel::FlxSprite boundsSprite;
		bool hasGravity;
		int gravityX;
		int gravityY;
		Float frictionX;
		Float frictionY;
		Float toleranceX;
		Float toleranceY;
		bool isDragged;
		bool draggable;
		bool springOnPressed;
		int springOffsetX;
		int springOffsetY;
		Dynamic mousePressedCallback;
		Dynamic &mousePressedCallback_dyn() { return mousePressedCallback;}
		Dynamic mouseReleasedCallback;
		Dynamic &mouseReleasedCallback_dyn() { return mouseReleasedCallback;}
		::flixel::addons::display::FlxMouseSpring mouseSpring;
		Dynamic mouseStartDragCallback;
		Dynamic &mouseStartDragCallback_dyn() { return mouseStartDragCallback;}
		Dynamic mouseStopDragCallback;
		Dynamic &mouseStopDragCallback_dyn() { return mouseStopDragCallback;}
		bool hasMouseSpring;
		bool _snapOnDrag;
		bool _snapOnRelease;
		int _snapX;
		int _snapY;
		bool _clickOnRelease;
		bool _clickPixelPerfect;
		int _clickPixelPerfectAlpha;
		int _clickCounter;
		::flixel::util::FlxRect _rect;
		int _throwXFactor;
		int _throwYFactor;
		bool _dragPixelPerfect;
		int _dragPixelPerfectAlpha;
		int _dragOffsetX;
		int _dragOffsetY;
		bool _dragFromPoint;
		bool _allowHorizontalDrag;
		bool _allowVerticalDrag;
		virtual Void enableMouseClicks( bool OnRelease,hx::Null< bool >  PixelPerfect,hx::Null< int >  AlphaThreshold);
		Dynamic enableMouseClicks_dyn();

		virtual Void disableMouseClicks( );
		Dynamic disableMouseClicks_dyn();

		virtual Void enableMouseDrag( hx::Null< bool >  LockCenter,hx::Null< bool >  PixelPerfect,hx::Null< int >  AlphaThreshold,::flixel::util::FlxRect BoundsRect,::flixel::FlxSprite BoundsSprite);
		Dynamic enableMouseDrag_dyn();

		virtual Void disableMouseDrag( );
		Dynamic disableMouseDrag_dyn();

		virtual Void enableMouseThrow( int FactorX,int FactorY);
		Dynamic enableMouseThrow_dyn();

		virtual Void disableMouseThrow( );
		Dynamic disableMouseThrow_dyn();

		virtual Void enableMouseSnap( int SnapX,int SnapY,hx::Null< bool >  OnDrag,hx::Null< bool >  OnRelease);
		Dynamic enableMouseSnap_dyn();

		virtual Void disableMouseSnap( );
		Dynamic disableMouseSnap_dyn();

		virtual ::flixel::addons::display::FlxMouseSpring enableMouseSpring( hx::Null< bool >  OnPressed,hx::Null< bool >  RetainVelocity,hx::Null< Float >  Tension,hx::Null< Float >  Friction,hx::Null< Float >  Gravity);
		Dynamic enableMouseSpring_dyn();

		virtual Void disableMouseSpring( );
		Dynamic disableMouseSpring_dyn();

		virtual Void setDragLock( hx::Null< bool >  AllowHorizontalDrag,hx::Null< bool >  AllowVerticalDrag);
		Dynamic setDragLock_dyn();

		virtual Void update( );

		virtual Void updateGravity( );
		Dynamic updateGravity_dyn();

		virtual Void updateDrag( );
		Dynamic updateDrag_dyn();

		virtual Void checkForClick( );
		Dynamic checkForClick_dyn();

		virtual Void mousePressedHandler( );
		Dynamic mousePressedHandler_dyn();

		virtual Void mouseReleasedHandler( );
		Dynamic mouseReleasedHandler_dyn();

		virtual Void startDrag( );
		Dynamic startDrag_dyn();

		virtual Void checkBoundsRect( );
		Dynamic checkBoundsRect_dyn();

		virtual Void checkBoundsSprite( );
		Dynamic checkBoundsSprite_dyn();

		virtual Void stopDrag( );
		Dynamic stopDrag_dyn();

		virtual Void setGravity( int GravityX,int GravityY,hx::Null< Float >  FrictionX,hx::Null< Float >  FrictionY,hx::Null< Float >  ToleranceX,hx::Null< Float >  ToleranceY);
		Dynamic setGravity_dyn();

		virtual Void flipGravity( );
		Dynamic flipGravity_dyn();

		virtual int get_clicks( );
		Dynamic get_clicks_dyn();

		virtual int set_clicks( int NewValue);
		Dynamic set_clicks_dyn();

		virtual int get_springX( );
		Dynamic get_springX_dyn();

		virtual int get_springY( );
		Dynamic get_springY_dyn();

		virtual ::flixel::util::FlxPoint get_point( );
		Dynamic get_point_dyn();

		virtual ::flixel::util::FlxPoint set_point( ::flixel::util::FlxPoint NewPoint);
		Dynamic set_point_dyn();

		virtual bool get_mouseOver( );
		Dynamic get_mouseOver_dyn();

		virtual int get_mouseX( );
		Dynamic get_mouseX_dyn();

		virtual int get_mouseY( );
		Dynamic get_mouseY_dyn();

		virtual ::flixel::util::FlxRect get_rect( );
		Dynamic get_rect_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace display

#endif /* INCLUDED_flixel_addons_display_FlxExtendedSprite */ 
