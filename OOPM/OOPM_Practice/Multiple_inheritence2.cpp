#include<iostream>
using namespace std;

class employee
{
    private:
        
    public:
        int emp_id;
        void get_details()
        {
            cout<<"enter the employee id :";
            cin>>emp_id;
            cout<<endl;
        }
        
};
class person
{
    private:
        
    public:
        string name;

        void get_name()
        {
            cout<<"Enter the name of the Employee :";
            cin>>name;
            cout<<endl;
        }
};

class manager: public person,employee
{
    public:
        void show()
        {
            employee::get_details();
            person::get_name();
            cout<<"Name :-"<<name<<endl;
            cout<<"Employee ID :-"<<emp_id<<endl;
            cout<<"Completed !!"<<endl;
            cout<<endl;
        }
};
int main()
{   
    manager mg;
    mg.show();
    return 0;
}