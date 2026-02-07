#include<iostream>
using namespace std;

/*
	binding means which function call is linked to which function body.


*/

class A{
	public:

	virtual void show()
	{
		cout<<"--- A --- "<<endl;
	}
};

class B : public A
{
	public:

	virtual void show()
	{
		cout<<"--- B --- "<<endl;
	}

};

int main(){
	
	A *ptr = new B;
	
	ptr->show();		// without virtual A    -------> static polymorphism  
				// with virtual B	-------> dynamic polymorphism
};
