#include<iostream>
using namespace std;

int fun(int &a)
{
	++a;
	return a;
}

int (&plusOne)(int&) = fun;

int main(){
	int a= 8;

	int &b = a;

	cout << "a is "<< a << "b is "<<b<<endl;
	
	fun(a);

	
	cout << "a is "<< a << "b is "<<b<<endl;

	plusOne(a);
	cout<<"------"<<endl;
	cout<<b<<endl;
};
