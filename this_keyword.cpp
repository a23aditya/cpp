#include<iostream>
using namespace std;



class Student{
	string name;
	int age;
	public:

	Student(int age, string name)
	{
		cout<<"address of this "<<this<<endl;

		this->name = name;
		this->age = age;
	}

	Student& set_age(int age)
	{
		this->age = age;
		return *this;
	}

	void print_data()
	{
		cout<<this->name<<endl<<this->age<<endl;
	}

	void greet();

};


void congrulation(Student *o1)
{
	cout<<"-----Greet-----"<<endl;
	o1->print_data();
}

void Student::greet()
{
    congrulation(this);
}

int main(){
	
	Student o1(2,"vi");
	cout<<"address of o1 : "<<&o1<<endl;

	o1.set_age(3);

	o1.print_data();

	o1.greet();

};
