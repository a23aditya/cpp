#include<iostream>
using namespace std;

class Num{
	public:
		
	Num(){

		data = (int *)malloc(sizeof(int) *4);
		cout<<"constructor"<<endl;
	}
	
	void fill()
	{
		for(int i=0;i< 5;i++)
		{
			data[i] = i;
			cout<<data[i]<<endl;
		}
		
	}

	~Num(){
		free(data);
		cout<<"destructor"<<endl;
	}

	private:
		int *data;
};

int main(){
	Num n1;
	n1.fill();
};
