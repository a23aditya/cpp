#include<iostream>
using namespace std;

class Food{
	
	public:
	string name;
	int calories;
	
	void print()
	{
		cout<< name << calories;
	}

};

class Drink : public Food
{
	int ounces;
};



int main(){
	
	Drink o1;
	
	o1.name = "vi";
	o1.calories=10;

	o1.print();

};
