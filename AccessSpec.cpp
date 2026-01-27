#include<iostream>
using namespace std;

class Employee{
	public:
		string name;
	
	void set_salary(double sal)
	{
		salary = sal;
	}

	double get_salary()
	{
		return salary;
	}

	private:
		double salary;

	

};

int main(){
	Employee e1;
	
	e1.name= "aditya";

//	e1.salary =11111; //not allowed salary is private

	e1.set_salary(1000000);

	cout<<(int)e1.get_salary();

};
