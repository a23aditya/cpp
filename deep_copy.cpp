#include<iostream>
using namespace std;

/*
A copy constructor performs member-wise copying by default.
If the class owns dynamically allocated memory, the default copy constructor 
results in a shallow copy.

	Copy Constructor
	----------------
	Used when a new object is being created from an existing object.
Syntax
	ClassName(const ClassName& other);

	ex : Heap h2 = h1;      // copy constructor

	Copy Assignment Operator
	------------------------
	Used when an existing object is assigned another existing object.
Syntax
	ClassName& operator=(const ClassName& other);

	h2 = h1;           // copy assignment


*/

class Heap{
	public:
	int *data;

	Heap(int x)
	{
		data = new int;
		*data = x;
	
	}

	//copy constructor
	Heap(const Heap &obj)
	{
		data = new int;
		*data = *(obj.data);
		
	}

	Heap &operator=(const Heap &obj)
	{
		data = new int;
		*data = *(obj.data);

		return *this;
	}

	void print(){
		cout<<*data<<endl;
	}

	void set(int val)
	{
		*data = val;
	}
	
	~Heap(){
		delete data;	
	}

};

int main(){

	Heap h1(5);
//using copy constructor	
	Heap h2 = h1;
	
	h1.print();

	h1.set(3);
	h1.print();
	h2.print();

//using copy assignment
	
	cout<<"----------"<<endl;
	Heap h3(2);
	Heap h4(4);
//using assignment
	h3=h4;	
	h3.print();	//4
	h3.set(5);	
	h3.print();	//5
	h4.print();	//4

	

};
