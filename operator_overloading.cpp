#include<iostream>
using namespace std;

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
 
	
};

int main(){
	Num n1(5);
	Num n2(10);

	Num n3 = n1+n2;

	cout << n3.n;
};
