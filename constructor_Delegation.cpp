#include<iostream>
using namespace std;

class ABC{
	

	public:
	int a,b,c,d;

	ABC(){
		a=1;
		b=1;
		c=0;
		d=0;
		cout<<"c==> 1"<<endl;
	}
	
	ABC(int a1)
	{
		a=7;
		b=0;
	}

	ABC(int a,int d1,int d2):ABC(a)
	{
		 c=d1;
		 d=d2;

	}
	
	void print(){
		cout<<a<<b<<c<<d<<endl;	
	}
};

int main(){
	ABC o1(1,5,6);
	o1.print();	
	
};
