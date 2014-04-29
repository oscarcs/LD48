#ifndef INCLUDED_flixel_addons_weapon_FlxWeapon
#define INCLUDED_flixel_addons_weapon_FlxWeapon

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,addons,weapon,FlxBullet)
HX_DECLARE_CLASS3(flixel,addons,weapon,FlxWeapon)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS3(flixel,input,touch,FlxTouch)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxPooled)
HX_DECLARE_CLASS2(flixel,system,FlxSound)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,FlxRect)
namespace flixel{
namespace addons{
namespace weapon{


class HXCPP_CLASS_ATTRIBUTES  FlxWeapon_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxWeapon_obj OBJ_;
		FlxWeapon_obj();
		Void __construct(::String Name,::flixel::FlxSprite ParentRef,::Class BulletType,Dynamic __o_BulletID);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FlxWeapon_obj > __new(::String Name,::flixel::FlxSprite ParentRef,::Class BulletType,Dynamic __o_BulletID);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxWeapon_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxWeapon"); }

		::String name;
		::flixel::group::FlxTypedGroup group;
		::Class bulletType;
		int bulletID;
		int nextFire;
		int fireRate;
		int bulletSpeed;
		::flixel::util::FlxRect bounds;
		::flixel::FlxSprite parent;
		int multiShot;
		Float bulletLifeSpan;
		Float bulletDamage;
		Float bulletElasticity;
		int rndFactorAngle;
		int rndFactorSpeed;
		Float rndFactorLifeSpan;
		::flixel::util::FlxPoint rndFactorPosition;
		::flixel::addons::weapon::FlxBullet currentBullet;
		Dynamic onPreFireCallback;
		Dynamic &onPreFireCallback_dyn() { return onPreFireCallback;}
		Dynamic onFireCallback;
		Dynamic &onFireCallback_dyn() { return onFireCallback;}
		Dynamic onPostFireCallback;
		Dynamic &onPostFireCallback_dyn() { return onPostFireCallback;}
		::flixel::system::FlxSound onPreFireSound;
		::flixel::system::FlxSound onFireSound;
		::flixel::system::FlxSound onPostFireSound;
		bool _rotateToAngle;
		::flixel::util::FlxPoint _velocity;
		bool _fireFromPosition;
		int _fireX;
		int _fireY;
		int _lastFired;
		::flixel::input::touch::FlxTouch _touchTarget;
		bool _fireFromParent;
		::flixel::util::FlxPoint _positionOffset;
		bool _directionFromParent;
		bool _angleFromParent;
		int _bulletsFired;
		int _currentMagazine;
		int _magazineCount;
		int _bulletsPerMagazine;
		int _magazineSwapDelay;
		bool _skipParentCollision;
		Dynamic _magazineSwapCallback;
		::flixel::system::FlxSound _magazineSwapSound;
		virtual Void makePixelBullet( int Quantity,hx::Null< int >  Width,hx::Null< int >  Height,hx::Null< int >  Color,hx::Null< int >  OffsetX,hx::Null< int >  OffsetY);
		Dynamic makePixelBullet_dyn();

		virtual Void makeImageBullet( int Quantity,Dynamic Image,hx::Null< int >  OffsetX,hx::Null< int >  OffsetY,hx::Null< bool >  AutoRotate,hx::Null< int >  Rotations,hx::Null< int >  Frame,hx::Null< bool >  AntiAliasing,hx::Null< bool >  AutoBuffer);
		Dynamic makeImageBullet_dyn();

		virtual Void makeAnimatedBullet( int Quantity,Dynamic ImageSequence,int FrameWidth,int FrameHeight,Array< int > Frames,int FrameRate,bool Looped,hx::Null< int >  OffsetX,hx::Null< int >  OffsetY);
		Dynamic makeAnimatedBullet_dyn();

		virtual bool runFire( int Method,hx::Null< int >  X,hx::Null< int >  Y,::flixel::FlxSprite Target,hx::Null< int >  Angle);
		Dynamic runFire_dyn();

		virtual bool fire( );
		Dynamic fire_dyn();

		virtual bool fireAtMouse( );
		Dynamic fireAtMouse_dyn();

		virtual bool fireAtTouch( ::flixel::input::touch::FlxTouch Touch);
		Dynamic fireAtTouch_dyn();

		virtual bool fireAtPosition( int X,int Y);
		Dynamic fireAtPosition_dyn();

		virtual bool fireAtTarget( ::flixel::FlxSprite Target);
		Dynamic fireAtTarget_dyn();

		virtual bool fireFromAngle( int Angle);
		Dynamic fireFromAngle_dyn();

		virtual bool fireFromParentAngle( );
		Dynamic fireFromParentAngle_dyn();

		virtual Void setParent( ::flixel::FlxSprite ParentRef,hx::Null< int >  OffsetX,hx::Null< int >  OffsetY,hx::Null< bool >  UseDirection);
		Dynamic setParent_dyn();

		virtual Void setFiringPosition( int X,int Y,hx::Null< int >  OffsetX,hx::Null< int >  OffsetY);
		Dynamic setFiringPosition_dyn();

		virtual Void setBulletSpeed( int Speed);
		Dynamic setBulletSpeed_dyn();

		virtual int getBulletSpeed( );
		Dynamic getBulletSpeed_dyn();

		virtual Void setFireRate( int Rate);
		Dynamic setFireRate_dyn();

		virtual Void setBulletBounds( ::flixel::util::FlxRect Bounds);
		Dynamic setBulletBounds_dyn();

		virtual Void setBulletDirection( int Angle,int Speed);
		Dynamic setBulletDirection_dyn();

		virtual Void setBulletGravity( int ForceX,int ForceY);
		Dynamic setBulletGravity_dyn();

		virtual Void setBulletAcceleration( int AccelerationX,int AccelerationY,int SpeedMaxX,int SpeedMaxY);
		Dynamic setBulletAcceleration_dyn();

		virtual Void setBulletOffset( Float OffsetX,Float OffsetY);
		Dynamic setBulletOffset_dyn();

		virtual Void setBulletRandomFactor( hx::Null< int >  RandomAngle,hx::Null< int >  RandomSpeed,::flixel::util::FlxPoint RandomPosition,hx::Null< Float >  RandomLifeSpan);
		Dynamic setBulletRandomFactor_dyn();

		virtual Void setBulletLifeSpan( Float Lifespan);
		Dynamic setBulletLifeSpan_dyn();

		virtual Void setBulletElasticity( Float Elasticity);
		Dynamic setBulletElasticity_dyn();

		virtual ::flixel::addons::weapon::FlxBullet getFreeBullet( );
		Dynamic getFreeBullet_dyn();

		virtual Void setPreFireCallback( Dynamic Callback,::flixel::system::FlxSound Sound);
		Dynamic setPreFireCallback_dyn();

		virtual Void setFireCallback( Dynamic Callback,::flixel::system::FlxSound Sound);
		Dynamic setFireCallback_dyn();

		virtual Void setPostFireCallback( Dynamic Callback,::flixel::system::FlxSound Sound);
		Dynamic setPostFireCallback_dyn();

		virtual Void bulletsOverlap( ::flixel::FlxBasic ObjectOrGroup,Dynamic NotifyCallBack,hx::Null< bool >  SkipParent);
		Dynamic bulletsOverlap_dyn();

		virtual bool shouldBulletHit( ::flixel::FlxObject Object,::flixel::FlxObject Bullet);
		Dynamic shouldBulletHit_dyn();

		virtual Void onBulletHit( ::flixel::FlxObject Object,::flixel::FlxObject Bullet);
		Dynamic onBulletHit_dyn();

		static int BULLET_UP;
		static int BULLET_DOWN;
		static int BULLET_LEFT;
		static int BULLET_RIGHT;
		static int BULLET_NORTH_EAST;
		static int BULLET_NORTH_WEST;
		static int BULLET_SOUTH_EAST;
		static int BULLET_SOUTH_WEST;
		static int FIRE;
		static int FIRE_AT_MOUSE;
		static int FIRE_AT_POSITION;
		static int FIRE_AT_TARGET;
		static int FIRE_FROM_ANGLE;
		static int FIRE_FROM_PARENT_ANGLE;
		static int FIRE_AT_TOUCH;
};

} // end namespace flixel
} // end namespace addons
} // end namespace weapon

#endif /* INCLUDED_flixel_addons_weapon_FlxWeapon */ 
