//WAP TO FIND THE VOLUME OF CYLINDER , SPHERE , CUBE ,CUBOID USING FUNCTION OVERLOADING

#include<iostream>
using namespace std;

class Volume{
	
	public:
		
		double volume(float r, float h){ // FOR CYLINDER
			
			cout<<"\nvolume of cylinder is : ";
			return 3.14*r*r*h;
			
		}
		
		double volume(double radius){  //FOR SPHERE
			cout<<"\nvolume of sphere is : ";
			return (4.0/3.0)*3.14*radius*radius*radius ;
		}
		
		double volume(int a){  //FOR CUBE
			cout<<"\nvolume of cube is : ";
			return a*a*a;
		}
		
		double volume(int a,int b, int c){  //FOR CUBOID
			cout<<"\nvolume of cuboid is : ";
			return a*b*c;
		}		
};

int main(){
	
	Volume vl;
	cout<<vl.volume(2.5);
	cout<<vl.volume(25);
	cout<<vl.volume(2.5,5.5);
	cout<<vl.volume(5,10,15);

return 0;
}

