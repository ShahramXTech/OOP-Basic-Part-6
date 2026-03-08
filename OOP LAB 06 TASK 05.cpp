#include <iostream>

using namespace std;

class Solid {
public:
    
    double calculatevolume(double R, double HIG) {
    	double volcl;
    	volcl= 3.14*R*R*HIG;
        return volcl ;
    }

    double calculatevolume(double LEN,double WI, double HIG) {
    	double volcly=LEN*WI*HIG;
        return volcly;
    }
};

int main() {
    Solid S;
    
double r,h,l,w;
cout<<" enter radius: ";
cin>>r;
cout<<" enter length : ";
cin>>l;
cout<<" enter height: ";
cin>>h;
cout<<" enter width: ";
cin>>w;
    cout << "Volume of cylinder "<<S.calculatevolume(r,h)<<endl; 
         

cout<<" volume of cuboid : "<<S.calculatevolume(l,w,h);
  

    return 0;
}