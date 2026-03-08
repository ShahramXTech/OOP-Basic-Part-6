#include<iostream>
#include<string>
using namespace std;

class shop{
	public:
		double rate;
		double cdis(double rate){
			return rate;
		}

		double cdis(double rate,int quantity)
		{double dis;
			if(rate>=5000)
			{
				dis=rate-(rate*0.2);
			}
			else if(rate>=2000)
			{
				dis=rate-(rate*0.15);
			}
			else if(rate>=1000)
			{
				dis=rate-(rate*0.1);
			}
			else if(rate<=1000)
			{
				return rate;
			}
			double total=dis*quantity;
			return total;
		}
};
int  main(){
	shop S;
	double pri;
	double p;
	int q;
	cout<<"enter the price : ";
	cin>>p;
	cout<<"enter the quantity : ";
	cin>>q;

pri=S.cdis(p,q);
cout<<"orignal price : "<<S.cdis(p)<<" , quantity : "<<q<<endl;
cout<<"Total price of  : "<<pri<<endl;
}