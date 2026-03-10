#include<iostream>
using namespace std;

class A{
	
	public:
		
		A(string a){
			cout<<"HELLO_"<<a<<endl;
		}
		A(int b){
			cout<<"THIS NUMBER IS : "<<b<<endl;
		}
};
class B : public A{
	
	public:
	 
	B(string a) : A(a){
		cout<<"GOODMORNING "<<a<<endl;
	}
	B(int b) : A(b){
		cout<<"NUMBER FROM CLASS B IS : "<<b<<endl;
	}
};
class C : public B{
	
	public:
		
		C(string a1, string a2 ,string a3) : B(a2){
			cout<<"GOOD_NIGHT "<<a3<<endl;
		}
		C(int b1,int b2,int b3):B(b2){
			cout<<"NUMBER FROM CLASS C : "<<b3<<endl;
		}
};


int main(){
	
	C cc(1,2,3);
	C cc2("sameer","kunal","mohit");
	
	
//	A("sameer");
//	A(3);

return 0;
}

