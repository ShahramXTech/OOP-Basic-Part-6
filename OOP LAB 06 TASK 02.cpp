#include<iostream>
#include<string>
using namespace std;
class Shop
{
	public:
		virtual double CDIS(double RATE)=0;
};
class Dshop:public Shop
{
	public:
		double CDIS(double RATE)
		{
			if(RATE>=5000)
			{
				return RATE*0.2;
			}
			else if(RATE>=2000)
			{
				return RATE*0.15;
			}
			else if(RATE>=1000)
			{
				return RATE;
			}
		}
};
int main()
{
	Dshop x;
	cout<<"Price with discout : "<<x.CDIS(5600)<<" "<<endl;;
}

