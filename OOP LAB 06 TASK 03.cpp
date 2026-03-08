#include<iostream>
using namespace std;
 
 class Car{
 	
private:
	int speed;
	
	public:
		void limit(){
			if(speed >200)
			{
				cout<<"Warning !speed limit cross !"<<endl;
			}
		}
		Car():speed(0){
		}
		
		void accelerate(){
			speed=speed+500;
			limit();
		}
		void accelerate(int custom)
		{
			speed +=custom;
			limit();
		}
		void decelerate(){
			speed=speed-500;
		}
		
		void decelerate(int custom){
			speed -=custom;
			
		}
		void show(){
			cout<<"speed : "<<speed<<endl;
		}
 };
 
 int main(){
 	Car c;
 	int speedc;
 	cout<<"Enter the speed :";
 	cin>>speedc;
 	c.accelerate();
 	c.show();
	 cout<<"/n";
 	c.accelerate(speedc);
 	c.show();
	 cout<<"/n";
 	
 	c.decelerate();
 	c.show();
	 cout<<"/n";
 	
 		c.decelerate( speedc);
 	c.show();
 	
 }