#include<iostream>
using namespace std;

class Shape{
	public:
		void sp(){
			cout<<"\n This is a shape of";
		}
};
class Rectangle : public Shape{
	public:
		void rectangle(){
			cout<<"\n Rectangle";
		}
};
class Circle : public Shape{
	public:
		void circle(){
			cout<<"\n Circle";
		}
};
int main(){
	Rectangle rg;
	Circle cr;
	
	rg.sp();
	rg.rectangle();
	
	cr.sp();
	cr.circle();
	return 0;
}

