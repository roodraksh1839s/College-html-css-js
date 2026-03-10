// FUNCTION OVER RIDING

#include<iostream>
#include<fstream>
using namespace std;


class A
{
	private :
		
	public :
		
		void sound()
		{
			cout<<"Bark\n";	
		}
		
};

class B:public A
{
	private :
		
	public : 
	
		void sound()
		{
			cout<<"growl\n";
			A::sound();
		}
};
int main()
{
	B bb;
	bb.sound();
	
	bb.A::sound();

	// A*p;
	// p=&bb;
	// p->sound();
	

	return 0;
}

