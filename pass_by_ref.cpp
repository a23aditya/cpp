#include<iostream>
using namespace std;

class ABC{

	public:
	int count;

	ABC(){
		count =0;
	}	

	void increment()
	{
		++count;
	}

	void print_count(){
		cout<<"count is now "<<count;
	}
};

void increment_3x(ABC &abc)
{
	abc.increment();
	abc.increment();
	abc.increment();
}


//pass by ref
void fun(int &a)
{
	a=10;
}

int main(){

	int a =5;
	fun(a);

	cout<<"a is now "<<a<<endl;

	ABC c;
	
	increment_3x(c);
	
	c.print_count();

};
