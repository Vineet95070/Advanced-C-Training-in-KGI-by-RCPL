Programming Paradigm:
	It is a style or way to writing computer program.
	
	- There are several way to write comuter program such like:
		1. Functional programming / Procedure programming:
			When computer program is devided into small functions then it is 
			called functional programming approch.
			Ex:	 C, C#, C++
			
		2. Object Oriented Programming:
			When some concept of program is related with object and class then
			it is called object oriented program.
			Ex:	C++, python, Java
			
		3. Pure Object Oriented Programming:
			When no other paradagm is use in a program except Object and class
			then it is called Pure object oriented.
			Ex:	 Ruby, Java
			
		4. Monolethic programming:
			It is out-dated programming, in this programming approch programmer
			code in 0's and 1's. 
	
Class:
	Class is a template or blueprint to creating an object.
	
Object:
	Object is a instance of class.
	
	#Class is template to creating objects and objects are instance of class.

Data member:
	Variables define inside class is called data members.
	
Member function / Methods:
	Function define inside class is called member function.
	
dot operator( . ):
	Dot operaotr is use to access data member of a class using object.
	
Arrow operator( -> ):
	Arrow operator is use to access data member of a class using dynamic object.
	
	
Constructor:
	Constructor are same as method or member function having same name as 
	class name.
	- We can not call constructor it invoke when object of a class is created.
	- Cosntructor did not have any return type.
	- We can overload constructor.
	- If we not define constructor then, compiler define it for us.
	
	Syntax:
			class_name() {
				
				
			}

	Constructor are of three type:
	1. Default constructor:
		Constructor having no parameter is called default constructor.
		- It was not compulsory to define default constructor, If we dont define
		compiler define it for us.
	
	2. Parameterised constructor:
		Constructor having some parameter is called parameterised constructor
		- We must have to define parameterised constructor for parameterised 
		object.
	
	3. Copy constructor:
		It create copy of an object.
		When we pass object as parameter of another object then it is called 
		copy constructor.
		
		- If we not define copy constructor then compiler define it for us.
		Syntax:
			class_name ( class_name& object_name){
				
				
			}
	
	
	Distructor:
		Distructor are methods define using '~' this sign.
		- having same name as class name.
		- It deallocate memory allocated by constructor.
		- It destroy objects.
		- We can not call distructor it was called by compiler when no need
			of object.
		- for dynamic object we have to deallocate memory manualy.
		Syntax:
			~class_name(){
				
				
			}
	
	
this keyword:
	this keyword contain address of respected object.
	- this keyword is a constant pointer.	
	
	
	
Dynamic Object:
	When memory allocation for objects are done during run-time then this type of
	object is called dynamic object.
	- Object define using new keyword is called dynamic object.
	Syntax:
		
		class_name* object_name = new class_name( paramter_if_any );
	
	
Arrow Operator ( -> ):
	Arrow Operator is use to access data member of a class using dynamic object.
	
Dot Operator ( . ):
	Dot operator is use to access data member of a class using non dynamic object.	
	
	
=======================================================================================	
	
	Padding:
		Padding is a concept in c++, which  add some extra byte of memory for better
		performance of your code.
		- This concept exist in c++ class and object and structure.
		- Padding done through pack of different bytes.
		- By default compiler create packing of multiple of bigger data type.
	
	
=====================================================================================

Static member function:
	When a function or method of a class is define using static keyword then 
	it is called static member function.
	- It also known as class method.
	- We can call class method without any object of a class.
	
	
=======================================================================================
	
	Template:
		In c++ template is a concept in which we can write a code which is independent
		of data type.
		- Generic program:
			Program in which we can code where no need to define any data type is called
			generic program.
			- such language linke python, Java script.
			
		- Generic program in C++ is implement using two ways:
			1. function template
			2. class template
	
	
================================================================================

Structure:
	Structure is a user define data type, It can store more than one type
	of data in contigious memory location.
	
Padding:
		Padding is a concept in c++, which  add some extra byte of memory for better
		performance of your code.
		- This concept exist in c++ class and object and structure.
		- Padding done through pack of different bytes.
		- By default compiler create packing of multiple of bigger data type.
		
		- By default data members of a class is private and by default data membres
		of a structure is public.
	
	
	
	
	
	
	
	
	
	
