#include<iostream>
using namespace std;

/*
A friend function is a function that is not a member of a class, 
but it is allowed to access the private and protected members of that class.

	Friend function is not a class member
	Called like a normal function (not using object.method())
	Can access private and protected data
	Declared inside class, defined outside
	Friendship is not mutual
	Friendship is not inherited
*/

class ABC
{
	int x;

	friend void double_x(ABC &o);

	public:
	
	ABC()
	{
		x= 5;
	}	

	void show()
	{
		cout<< "x is now "<<x<<endl;
	}
};

void double_x(ABC &o)
{
	o.x= 2*o.x;
}

int main(){
	ABC a;
		
	double_x(a);	

	a.show();

};
