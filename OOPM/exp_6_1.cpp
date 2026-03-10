#include<iostream>
using namespace std;

//PROGRAM FOR DEFAULT CONSTRUCTOR

class Student{
	
	private:
		
		string name;
		int age;
	
	public:
		
		// Parameterized constructor only
		
//    	Student(string n, int a) : name(n), age(a) {}
    
		Student(string n , int a){
			name = n;
			age = a;}
			
		void Show_data(){
//			
//			cout<<"enter the student name : \n";
//			cin>>name;
//			cout<<"enter the student age : \n";
//			cin>>age;
			cout<<"NAME IS : "<<name<<"\nAGE IS : "<<age;
		}	
};

int main(){
	
	Student st("sameer",19);
	
	st.Show_data();

return 0;
}

