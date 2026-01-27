#include<iostream>
using namespace std;

class Cat{
	public:
		string name;
		string colour;
		int id;
		Cat(){
			name= "Unknown";
			colour = "Unknown";
		}

		Cat(string n)
		{
			name = n;
			colour = "uk";
		}
		Cat(string n, string c,int i = 4);

};


Cat::Cat(string n, string c,int i)
{
	name= n;
	colour = c;
	id =i;
}

int main(){
	Cat c1;
		
	cout<< "name is "<< c1.name << " colour is "<< c1.colour;
	
	Cat c2("jj");
	cout<<endl;
	cout<< "name is "<< c2.name << " colour is "<< c2.colour;

	Cat c3("c3","green");
        cout<<endl;
        cout<< "name is "<< c3.name << " colour is "<< c3.colour<<"id is "<<c3.id;


};
