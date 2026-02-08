#include<iostream>
using namespace std;

/*
The following operators can never be overloaded:

	.    ::    ?:    sizeof    typeid    alignof

*/

class Num{
	public:
	int n;
	Num(int val)
	{
		n=val;
	}

	Num operator+ (const Num &obj)
	{
		return Num(this->n + obj.n);
	}

	bool operator ==(const Num &obj)
	{
		if(this->n == obj.n)
			return true;
		return false;
	} 
	
};

int main(){
	Num n1(5);
	Num n2(10);

	Num n3 = n1+n2;

	cout << n3.n;

	Num n4(15);


	if(n4 == n3)
		cout<<"equal";

	

};
