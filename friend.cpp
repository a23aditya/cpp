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
	friend ABC operator*(int n, const ABC &a);
	public:
	
	ABC(int y)
	{
		x= y;
	}	

	void show()
	{
		cout<< "x is now "<<x<<endl;
	}

	ABC operator* (const ABC &a)
	{
		int res = x * a.x;
		return ABC(res);		
	}
	

};

ABC operator*(int n, const ABC &a)
{
    return ABC(n * a.x);
}


void double_x(ABC &o)
{
	o.x= 2*o.x;
}

int main(){
	ABC a(5);
		
	double_x(a);	

	a.show();
				
				//a.operator*(ABC(20))		
	ABC o2 = a*20;		//20 → implicitly converted to ABC(20) 
	o2.show();
	
				// 20 * a --> not work
	ABC o3 = 5*a;		
	o3.show();
};
