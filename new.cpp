#include<iostream>
using namespace std;
#include <cstring>

int main(){

//variable
	int *ptr =new int(5);

	cout<<*ptr<<endl;

	delete ptr;

//array
	int *arr = new int[4];

	memset(arr,0,sizeof(arr));
	
	for (int i = 0; i < 4; ++i)
	    cout << arr[i] << " ";

	delete[] arr;
};
