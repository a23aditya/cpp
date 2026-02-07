#include<iostream>

//---------------
#include<utility>
//---------------

using namespace std;

int main(){

	int a=10,b=20;
	swap(a,b);
	cout<<a<<b<<endl;

	int a1[]={1,2,3,4,5};
	int a2[]={6,7,8,9,0};

	swap(a1,a2);
	
	for(auto it : a1)
	{
		cout<<it;
	}

};
