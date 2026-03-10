//WAP FOR MULTIPLE INHERITENCE
#include<iostream>
using namespace std;
class Person{
	public:
		string name;
		void get_data(){
			cout<<"Enter person name\n";
			cin>>name;
		}
};
class Employee{
	
		
	public:
		int empid;
		void getid(){
			cout<<"\n Enter the id";
			cin>>empid;
		}
};
class Manager : public Person,Employee{
	public:
		void display(){
			Person::get_data();
			Employee::getid();
			cout<<"\n Name : "<<name;
			cout<<"\n Employee ID : "<<empid;
		}
};
int main(){
	Manager mg;
	mg.display();
	return 0;
}
