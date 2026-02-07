#include<iostream>
using namespace std;
#include<array>
//-------------------
#include<algorithm>
//-------------------

int main(){
	
	array<int,15> arr = {3,4,43,5,4,3,4,3,4,32,45,4,4,3,2};

	sort(arr.begin(),arr.end(),greater<int>());

	for(auto it : arr)
	{
		cout<<it<<" ";
	}
	
	
};
