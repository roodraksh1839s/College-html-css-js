// CONSTRUCTOR HANDELING IN INHERITANCE

#include<iostream>
using namespace std;

class A
{
	protected :
		
		int a;
		
	public:
		
		A(int x){
			a=x;
		}
		
		void display(){
			cout<<"a :"<<a;
		}
};

class B 
{
	protected:
		
		int b;
		
	public:
		
		B(int y)
		{
			b=y;
		}
		void show()
		{
			cout<<"\nb :"<<b;
		}
	
};
class C :public A,public B
{
	private :
		int c;
		
	public:
		
		C(int p,int q,int r):A(p),B(q){
			c=r;
		}
		void putdata(){
			cout<<"\nc :"<<c;
		}
};
int main(){
	
	C aa(10,15,20);
	aa.display();
	aa.putdata();
	aa.show();

return 0;
}

