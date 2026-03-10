#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vec;

    int n;
    cout<<"Enter how many values you want to store -";
    cin>>n;

    for(int i= 0;i<n; i++)
    {   
        int val;
        cout<<"Enter the value -";
        cin>>val;
    }
    cout<<"values :-"<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<vec[i]<<endl;
    }
    
    return 0;
}