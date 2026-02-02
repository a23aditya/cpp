#include<iostream>
using namespace std;

class calc{
	int val;

	public:
		
	calc& add(int x)
	{
		val = val +x;
		return *this;
	}
	
	calc& sub(int x)
        {
                val = val - x;
                return *this;
        }
	
	void printval()
	{
		cout<<"val is now :"<<val;
	}


};
int main(){
	calc o1;
	
	o1.add(10).sub(2);

	o1.printval();
};
