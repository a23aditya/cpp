#include<iostream>
using namespace std;

class Cat{
	public:
		string name;
		string colour;

		Cat(){
			name= "Unknown";
			colour = "Unknown";
		}

		Cat(string n)
		{
			name = n;
			colour = "uk";
		}

};

int main(){
	Cat c1;
		
	cout<< "name is "<< c1.name << " colour is "<< c1.colour;
	
	Cat c2("jj");
	cout<<endl;
	cout<< "name is "<< c2.name << " colour is "<< c2.colour;
};
