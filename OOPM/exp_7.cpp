#include<iostream>
using namespace std;

class Basic_calculator{
	
	public:
		
		int add(){
			
			int a,b;
			
			cout<<"enter the a\n";
			cin>>a;
			cout<<"enter the b \n";
			cin>>b;
			cout<<" sum is : "<<a+b;
			return 0;
		}
};
class Scientific_calculator{
	
	public:
		
		int s;
		
		int square(){
			cout<<"\nenter the number to get square\n";
			cin>>s;
			cout<<"square is : "<<s*s;
			return 0;
		}
};
class Hybrid_calculator : public Basic_calculator ,public  Scientific_calculator{
	
	public:
		
		int c;
		
		int cube(){
			cout<<"\nenter the number to get the cube : \n";
			cin>>c;
			cout<<"cube is : \n"<<c*c*c;
			
			return 0;
		}
};



int main(){
	
	Hybrid_calculator hc;
	
	hc.add();
	hc.square();
	hc.cube();


return 0;
}

