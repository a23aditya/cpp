#include<iostream>
using namespace std;

/*
Pure virtual function: defines an interface that derived classes must implement.
*/

class Base{
	public:
	
	virtual	void area() = 0;  //pure virtual 
/*
	virtual void area()
	{
		cout<<"------Base---"<<endl;
	}
*/
};

class Der : public Base
{
	public:

	void area()
	{
		cout<<"----Der 1------"<<endl;
	}
};


int main(){

	Base *ptr = new Der;
	
	ptr->area();	// without virtual ---> Base area invoke
			// using virtual --> run time binding or dynamic poly..
			
};
