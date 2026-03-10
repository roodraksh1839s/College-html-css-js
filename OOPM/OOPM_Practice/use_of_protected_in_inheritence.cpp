#include<iostream>
using namespace std;

class A
{
    protected:
        int roll_no;
    public:
        void get()
        {
            cout<<"enter the Roll no.:-"<<endl;
            cin>>roll_no;
        }
};
class B : public A
{
    protected:
        string name;

    public:
        void show()
        {
            cin>>roll_no;
        }
};

