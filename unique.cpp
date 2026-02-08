#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

/*
std::unique removes only consecutive duplicates.
It does NOT remove all duplicates.

*/

int main(){

	vector<int> data ={1,1,1,2,3,3,4,5,5};
	
	auto new_end = unique(data.begin(),data.end());

	for(auto it = data.begin();it!=new_end;it++)
		cout<<*it;

	
};
