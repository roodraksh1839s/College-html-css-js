#include<iostream>
using namespace std;

int main(){
	
	int a,b,choice;
	
	cout<<"ENTER THE TWO NUMBERS\n";
	cin>>a>>b;
	
	cout<<"SELECT\n";
	cout<<"1 FO ADDITION\n2 FOR SUBTRACTION\n3 FOR MULTIPLICATION\n4 FOR DIVISION\nENTER YOUR CHOICE";
	cin>>choice;
	
	switch(choice){
		
		case 1:
			cout<<"addition="<<a+b;
			break;
			
		case 2:
			cout<<"Subtraction = "<<a-b;
			break;
			
		case 3:
			cout<<"Multiplication = "<<a*b;
			break;
			
		case 4:
			cout<<"Division = "<<a/b;
			break;
			
		default:
			cout<<"INVALID CHOICE !\n";
	}

return 0;
}

