Abstraction:
	Hiding some data in OOP's is called Abstraction:
	ex:
		Gear of vehicle
		Mobile phone
		ATM 
		
	- In C++ OOP's this concept is implement using Access modefier
		1. private:
			We can access private member from the parent class only.
			
		2. protected:
			We can access protected member from the parent class and there child class
			
		3. public:
			We can access public member from entire the code.
			
	
Inheritance:
	Deriving a new class by inheriting properties and methods of a old class is known 
	as Inheritance.
	
IS-A Relationship in Inheritance:
In object-oriented programming, the "IS-A" relationship is a way to describe inheritance. 	

Visibility mode in Inheritance:
	private inheritance:
	protected inheritance:
	public inheritance:
	
	class class_A{
		
	};	
	
	class class_B: access_modefier class_A{
		
	};
	
	class class_C: access_modefier class_B{
		
	};
	
	class class_D: access_modefier class_C{
		
	};
	
	--------|---------------|---------------|--------------          
        |   private     |   protected   |   public      
--------|---------------|---------------|--------------
class_A |   visible     |   visible     |   visible
--------|---------------|---------------|--------------
class_B |   not visible |   visible     |   visible
--------|---------------|---------------|-------------- 
class_C |   not visible |   visible     |   visible
--------|---------------|---------------|--------------
class_D |   not visible |   not visible |   visible
--------|---------------|---------------|--------------
        |               |               |
	- Base Class:
		A base class, also known as a superclass or parent class, is a 
		class from which other classes can inherit properties and behaviors.
		
	- Derived Class:
		A subclass, also known as a derived class or child class, is a class 
		that inherits properties and behaviors from its base class.
	
Types of Inheritance:
	1. Single Inheritance:
	2. Multi level Inheritance:
	3. Multiple Inheritance:
	4. Hierarchical Inheritance:
	5. Hybrid Inheritance:


Method Hiding:
	When child class and parent class having override method, then child class
	method hide the method of parent class then it is called method hiding.

			
			
			
			
			
			
			
			
