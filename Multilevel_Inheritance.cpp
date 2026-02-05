#include<iostream>
using namespace std;

class A{
	public:
	int data;

	A(){
		cout<<"----A-----"<<endl;
		data = 1;
		cout<<"----------"<<endl;
	}

	void show()
	{
		cout<< data<<endl;
	}
	~A()
	{
		cout<<"'++++++ A"<<endl;
	}
};


class B : public A
{
	public:

	B()
	{
		cout<<"--B---"<<endl;
		data = 2;
		cout<<"------"<<endl;
	}
	~B()
	{
		cout<<"'++++++ B"<<endl;
	}
};

class C : public B
{
	public:
	C(int tdata)
	{
		cout<< "----C----"<<endl;
		data = tdata;
		cout<<data;	
		cout<<"---------"<<endl;
	}
	~C()
	{
		cout<<"'++++++ C"<<endl;
	}
};

int main(){
	
	C o1(3);
	
//	o1.show();	
	
};
