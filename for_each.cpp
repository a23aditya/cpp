#include<iostream>
using namespace std;

#include<array>

int main(){
	
	array<int,15> arr={1,2,3,4,5,6,1,7,1,5,1,5};
	int cnt=0;
	for(auto it : arr)
	{
		if(it ==1)
		{
			++cnt;
		}
		
	}
	cout<<"cnt =  :"<<cnt;

};
