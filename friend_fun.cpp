#include<iostream>
using namespace std;

class Costs;

class Revenue
{
	friend bool profit(Revenue rev,Costs cos);
	private:
	int revenue;
	public:
	Revenue(int rev):revenue(rev){}
};


class Costs
{
        friend bool profit(Revenue rev,Costs cos);
        private:
        int cost;
	public:
        Costs(int cos):cost(cos){}
};

bool profit(Revenue rev,Costs cos)
{
	if(rev.revenue > cos.cost)
	{
		cout<<"profit";
	}
	else
	{
		cout<<"loss";
	}
}

int main(){
	Revenue r(1000);
	Costs c(1200);

	profit(r,c);
};
