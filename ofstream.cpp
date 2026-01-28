#include<iostream>
using namespace std;

#include<fstream>

int main(){

	ofstream of;

	of.open("abc.txt");
	
	if(of.fail())
	{
		cout<<"fail to open file";
		return -1;
	}


	of<<"add1"<<endl<<"add3"<<endl;
	of<<"add2";

	of.close();	

}
