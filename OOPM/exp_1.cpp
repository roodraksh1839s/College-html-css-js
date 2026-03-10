//WAP TO PREpare A STUDENT RECORD USING CLASSES WITH PRIMITIVE DATA MEBERS

#include<iostream>
using namespace std;

class Record{
	public:
		char name[20];
		int regno;
		int marks ,m1,m2,m3;
		
	float avg;
	
	void get_data(){
		cout<<"\n Enter the name : ";
		cin>>name;
		cout<<"\n Enter the enrollment number : ";
		cin>>regno;
		cout<<"\n Enter the marks m1,m2,m3 : ";
		cin>>m1>>m2>>m3;		
	}
	void calculate(){
		avg = (m1+m2+m3)/3;
	}
	void display(){
		cout<<"\n**********************************************\n";
	
	cout<<"\n Name : "<<name;
	cout<<"\n ENrollment no. : "<<regno<<"\n Mark1 : "<<m1<<"\n Marks2 : "<<m2<<"\n Mark3 : "<<m3<<"\n Avg : "<<avg;
	cout<<"\n**********************************************\n";
	}
};
int main(){
	Record rc;
	rc.get_data();
	rc.calculate();
	rc.display();
	return 0;
}


