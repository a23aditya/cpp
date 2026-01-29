#include<iostream>
using namespace std;

//pass by ref
void fun(int &a)
{
	a=10;
}

int main(){

	int a =5;
	fun(a);

	cout<<"a is now "<<a;

};
