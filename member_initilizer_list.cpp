#include<iostream>
using namespace std;

/*
//-----------------------
//  Err case 
//-----------------------
class Student{
	public:
	string name;
	int start_yr;

	Student(string name, int start_yr)
	{
		name = name;
		start_yr = start_yr;

	}
};

int main(){
	Student o1("virat",2222);
	cout<<"name is "<<o1.name<<endl<<"start yr "<<o1.start_yr; 
};

result :
name is 
start yr 0

*/

class Student{
        public:
        string name;
        int start_yr;

        Student(string name, int start_yr):name(name),start_yr(start_yr)
        {
		cout<<"---Done---"<<endl;
        }
};

int main(){
        Student o1("virat",2222);
        cout<<"name is "<<o1.name<<endl<<"start yr "<<o1.start_yr; 
};





