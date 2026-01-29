#include<iostream>
using namespace std;

//-----------------------------------
// classic example of a shallow copy
//-----------------------------------

// Note : Default Copy Constructor use Shallow Copy

class Heap{
	public:
	int *data;

	Heap(int x)
	{
		data = new int;
		*data = x;
	
	}
	void print(){
		cout<<*data<<endl;
	}

	void set(int val)
	{
		*data = val;
	}
	
	~Heap(){
	//	delete data;	// here due to h2=h1 double free cause crash
	}

};

int main(){
	Heap h1(2);
	h1.print();

	Heap h2(3);

	h2 = h1;

	cout<<endl<<"==============="<<endl;
	h1.print();
	h2.print();

	cout<<endl<<"==== now change h2 data to 5 and print h1 =========="<<endl;

	h2.set(5);
	h2.print();
	cout<<"check h1 data"<<endl;
	h1.print();
	// Because both point to same memory location
	
};
