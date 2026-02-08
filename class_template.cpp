#include<iostream>
using namespace std;

template <typename T>
class ABC
{
	public:
		T arr[10];

		void fill(T value)
		{
			for(int i=0;i<10;i++)
			{
				arr[i] = value;
			}
		}
};

int main(){

	ABC<int> a1;
	a1.fill(10);

	for(auto it:a1.arr)
		cout<<it;

	cout<<endl;

	ABC<string> st;
	st.fill("ab");

	for(auto it:st.arr)
		cout<<it; 


};
