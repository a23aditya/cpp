#include<iostream>
using namespace std;

class BankAccount
{
	public:			// access specifier
		string name;
		int bal;		
	
	void withdraw(int amt){
		bal = bal -amt;
		cout<<bal;
	}
	
};	

int main(){
	BankAccount ac;
	ac.name = "aditya";
	ac.bal=100000;

	cout<<ac.name<<endl<<ac.bal;
	
	cout<<endl;
	ac.withdraw(10);
};
