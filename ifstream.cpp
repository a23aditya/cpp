#include<iostream>
using namespace std;

//--------------------
#include<fstream>
//--------------------



int main(){

	ifstream inFile;
	inFile.open("abc.txt");

	string buff;

	while(std::getline(inFile,buff))
	{
		cout<<buff<<endl;
	}

	inFile.close();
};
