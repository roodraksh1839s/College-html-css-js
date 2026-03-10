#include<iostream>
using namespace std;

class Rectangle{
	
	private:
		
		int length , breadth;
		
	public:
		
		Rectangle(int a,int b): length(a) , breadth(b){
			
		}
		
		void show(){
			
			cout<<"area of rectangle is : \n";
			cout<<length*breadth;
		}
};

int main(){
	
	Rectangle rc(12,13);
	rc.show();

return 0;
}

