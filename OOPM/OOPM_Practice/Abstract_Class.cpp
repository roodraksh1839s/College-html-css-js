#include<iostream>
using namespace std;

class Abstract_class{  //Abstract Class because having a Virtual function

    private:
        int phoneno;

    public:
        void input()
        {
            cout<<"enter the phone Number :"<<endl;
            cin>>phoneno;
        }
        virtual void Show()=0; // pure virtual function.

        //Virtual Function
        virtual void showme()
        {
            cout<<"This is a Virtual function !"<<endl;
        }

        void display()
        {
            cout<<"This is the Base Class !!"<<endl;
            // cout<<input();
            // cout<<phoneno;
        }

};

class Abstarct_object_class : public Abstract_class
{
    public:
        void Show()
        {
            cout<<"This is the Derived CLass!!"<<endl;
            
        }
};
int main()
{   
    Abstract_class*p;
    // Abstract_class obj;
    Abstarct_object_class ab;
    // p->showme;
    p=&ab;
    p->display();
    p->input();
    p->Show();
    ab.Show();
    return 0;
}