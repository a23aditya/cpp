#include<iostream>
using namespace std;


class Base{
	public:
	
	virtual	void area() = 0;  //pure virtual 

	virtual ~Base()=0;				// without virtual only base des invoked

};
//You MUST provide a definition
Base::~Base() {
	
	cout<<"base des"<<endl;

}


class Der : public Base
{
	public:

	void area()
	{
		cout<<"----Der 1------"<<endl;
	}

	~Der()
	{
		cout<<"------der1 des-----\n";
	}
};


int main(){

	Base *ptr = new Der;
	
	delete ptr;

			
};
