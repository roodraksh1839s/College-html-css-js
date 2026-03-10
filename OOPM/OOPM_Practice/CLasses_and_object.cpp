#include<iostream>
using namespace std;

class Person
{
    private:
        int age;
        string name;
        string address;

    public:
        void input_details()
        {
            cout<<"enter The Name of the person :";
            cin>>name;
            cout<<"enter The Age of the person :";
            cin>>age;
            cout<<"enter The Address of the person :";
            cin>>address;
        }

        void show_details()
        {
            cout<<"Details of the Person is :"<<endl;
            cout<<"Name :"<<name<<endl;
            cout<<"Age :"<<age<<endl;
            cout<<"Address :"<<address<<endl;
        }
};

int main(){

    Person sameer, aryan, shivansh;
    sameer.input_details();
    sameer.show_details();

    aryan.input_details();
    aryan.show_details();

    shivansh.input_details();
    shivansh.show_details();
    return 0;
}