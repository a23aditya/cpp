#include<iostream>
using namespace std;

namespace raw
{
	void print()
	{
		cout<<"raw A"<<endl;
	}
}

namespace oos
{
        void print()
        {
                cout<<"oos B"<<endl;
        }
}


int main(){

	raw::print();

	oos::print();

	using namespace raw;

	print();

};
