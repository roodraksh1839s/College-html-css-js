#include<iostream>
using namespace std;

class Student{
	
	private :
		
		int marks;
		int sum=0;
		float percent;
		
	public:
		
		int show_result(){
			
			for (int i=0;i<6;i++){
				
				cout<<"Enter the marks"<<endl;
				cin>>marks;
				sum=sum+marks;
			}
			
			percent=sum/6*100;
			
			cout<<percent<<endl;
			
			if(percent<33.00){
				cout<<"Student fail"<<endl;
			}
			else{
				cout<<"Student pass"<<endl;
			}
			
	return 0;
			
	}
		
};

int main(){

	Student st;
	st.show_result();
	
return 0;

}

