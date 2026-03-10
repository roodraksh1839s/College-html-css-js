#include<iostream>
using namespace std;

class Animal
{
    private:
        int a;

    public:
        void get()
        {
            cout<<"enter the number a :"<<endl;
            cin>>a;
        }
};
class Birds
{
    private:
        int b;
    public:
        void getb()
        {
            cout<<"enter the number b :"<<endl;
            cin>>b;
        }
};
class Cat : public Animal, public Birds
{
    public:
        void Sum()
        {
            // cout<<a+b<<endl;
        }
};