#include<iostream>
using namespace std;

//----------------------------------------------------------------------------------------------------------
/*
	Static member functions do not have a this pointer, so they cannot access non-static members directly.
	They can only access static members or non-static members through an explicit object reference.
*/
//----------------------------------------------------------------------------------------------------------



class Sq{
	
	public:
		static int total_square;	
		int data;
/*
	static void showdata(){
		++data;			// Not Allow 
		cout<<data;
	}
*/

	Sq(){
		++total_square;
	}

};

int Sq::total_square = 0;


int main(){
//	Sq::showdata();

	Sq s[2];

	cout<<endl<<"total :"<<Sq::total_square;
};
