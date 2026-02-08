#include<iostream>
using namespace std;

//template <typename T>
// or
template <class T>
T find_max(T a,T b)
{
	if(a>b)
		return a;
	return b;
}

template <typename T1 , typename T2>
int find_type(T1 a, T2 b)
{
	if(sizeof(a) > sizeof(b))
		return sizeof(a);

	return sizeof(b);
}


int main(){
	double n = find_type(2,'a');
	cout<<n;
};
