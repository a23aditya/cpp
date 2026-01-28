#include<iostream>
using namespace std;

#include<fstream>

int main(){

	ofstream of;

	of.open("abc.txt");

	of<<"add1"<<endl<<"add3"<<endl;
	of<<"add2";

	of.close();	

}
