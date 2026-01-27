#include<iostream>
using namespace std;

class Rec{
	public:
		void set_dimension(int l,int b =10); // if b is not provided default is 10

		int para(){
			return 2*length*width;	
		}
	private:
		int length,width;
};


void Rec::set_dimension(int l,int b)
{
	length = l;
	width = b;
}

int main(){
	Rec r;
	r.set_dimension(2,5);
	cout<<r.para();
};
