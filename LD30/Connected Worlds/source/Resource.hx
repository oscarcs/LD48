package ; 

class Resource
{	
	public var type:String = "";
	public var value:Float = 0;
	public var connected:Bool = false;
	
	public function new(type:String, value:Float)
	{
		this.type = type;
		this.value = value;
	}
}