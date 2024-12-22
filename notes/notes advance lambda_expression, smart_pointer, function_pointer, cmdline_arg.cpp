Lambda Expression:
	C++ Lambda expression allows us to define anonymous function which can either be
	used inline or passed as an argument.
	
	- It was introduced in C++11.
	
	- The lambda function []() -> int {return a+b;} explicitly specifies the return
		type as int using ->int
		
	Syntax:
		
		[] () {
			
			// function body
			
		} ();


====================================================================================

Function Pointers:
	A function pointer in C or C++ is a way to point to a function, just like how a 
	regular pointer points to a memory address.

	
======================================================================================

CMD Line Argument:
	Sometimes we need to pass arguments from the command line to the program
	when it is invoked.
	
	- It is use to supply parameters to the program when it is invoked.
	
	
	# TO compile .cpp file using CMD we need to use following command:
		
	for compilation:
		g++ file_name -o name
		
	for run the code:
		name
		

=========================================================================================

Smart Pointers:
	A smart pointer in C++ like a special tool that takes care of the memory for you
	when create someting dynamically(using new).
	
	- We need to include <memory> header file
	
	They are of three type:
		1. std::unique_ptr
		2. std::shared_ptr
		3. std::weak_ptr
		
	1. std::unique_ptr		
		The object is destroyed when the std::unique_ptr goes out of scope.


	- move() function move the ownership of container
	- it reset the pointer by NULL and also free the memory previously poined by
		unique_ptr.


	2. std::shared_ptr
		It usefull for managing shred ownership of dyncamically allocated objects.
		
		- use_count() function is use to get the count value of shared pointer
		- reset(): use to delete memory allocated by dynamically
		
	
	3. std::weak_ptr:
		A weak_ptr is a container for a row pointer.
		
		- weak_ptr does not participate in reference count.
		- we need to use lock() function to print the value of weak_ptr.
		












