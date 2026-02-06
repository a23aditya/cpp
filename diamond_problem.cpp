#include<iostream>
using namespace std;

/*

    A
   / \
  B   C
   \ /
    D


*/

class A{
	public:
	int data;
	A()
	{
		data =1;
		cout<<"---a---"<<endl;
	}
};

class B : virtual public A
{
	public:
	B()
	{
		data = 2;
		cout<<"---b---"<<endl;
	}
};

class C : virtual public A
{
        public:
        C()
        {
		cout<<"---c---"<<endl;
                data = 3;
        }
};


class D: public B,public C
{
	public:
	D()
	{
		cout<<"data is"<<data;
	}	
};


int main(){	
	D o1;

};
