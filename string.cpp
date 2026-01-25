#include<iostream>
using namespace std;

int main(){
	string s1 = "aditya";
	s1+="singh";

	cout<<s1<<endl;

	cout<<s1.at(0)<<endl;

	//length of string

	cout<<s1.size()<<endl;

	cout<<s1.length()<<endl;

	//clear string
	s1.clear();

	//now check

	if(s1.empty())
		cout<<"s1 is empty"<<endl;


	string s2 = to_string(-10);
	cout<< s2<<endl;

	double no = stod(s2);		// string to double
	cout<<no<<endl;

	string name;
	cout<<"Enter name"<<endl;
	getline(cin,name);
	
	cout<<"Name is :"<<name<<endl;
	

}
