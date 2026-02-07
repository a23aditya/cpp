#include<iostream>
using namespace std;

class ABC{
	public:
	double data;

	ABC()
	{
		data = 100;
	}

	operator double()
	{
		return data;
	}
	
	operator char()	
	{
		if(data > 95)
			return 'A';
		else
			return 'B';
	}
};

int main(){
	ABC o1;
	
	double val = o1;

	cout<<val;

	char grade = o1;

	cout<<grade;

};
