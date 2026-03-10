#include<iostream>
using namespace std;


#include<iostream>
using namespace std;

//PROGRAM FOR DEFAULT CONSTRUCTOR

class Student{
	
	private:
		
		string name;
		int age;
	
	public:
    
		Student(){
			
			cout<<"enter the name : \n";cin>>name;
			cout<<"enter the agae : \n";cin>>age;
			
			}
			
		void Show_data(){

			cout<<"NAME IS : "<<name<<"\nAGE IS : "<<age;
		}	
};

int main(){
	
	Student st;
	
	
	st.Show_data();

return 0;
}

