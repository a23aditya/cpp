#include<iostream>
using namespace std;

class A{
	protected:
	int x;

};

class B:private A
{
	public:
	void set(){
		x= 5;
	}
};

class C: public B
{
	public:
	void test()
	{
//		x=1; // err
	}
};


int main(){
	C o1;
};
