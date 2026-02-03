#include<iostream>
using namespace std;

void fun(int &a)
{
	++a;
}

int main(){
	int a= 8;

	int &b = a;

	cout << "a is "<< a << "b is "<<b<<endl;
	
	fun(a);

	
	cout << "a is "<< a << "b is "<<b<<endl;
};
