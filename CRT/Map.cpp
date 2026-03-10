#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int, string> student;

    cout<<"\t\t\tStudents Records Using MAP\n\n";
    cout<<"\t\t\tEnter how many records you want to enter\n";
    int n;
    cin>>n;

    for(int i=0;i<n;i++){int rollNo; string name; cout<<"\t\t\tEnter the RollNo :";cin>>rollNo;cout<<"\t\t\tENter the name :";cin>>name;student[rollNo] = name;}

    for(int i=0;i<n;i++)
    {
        // cout<<"RollNo : "<<
    }
    return 0;

}