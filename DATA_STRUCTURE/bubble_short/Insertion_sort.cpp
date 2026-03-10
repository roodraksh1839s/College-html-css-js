#include<iostream>
using namespace std;

void Insertion_sort(int arr[], int n){

    for(int i=1; i<n; i++){
        int curr = i;
        int prev =i-1;

        while(prev>=0 && arr[prev]>curr){
            arr[prev+1] = arr[prev];
            prev --;
        }
        arr[prev+1]= curr;

    }
    cout<<"Sorted Array in Acending Order is\n";
}

void Dcending_insertion_sort(int arr[], int n){

    for(int i=1; i<n; i++){
        int curr = i;
        int prev = i-1;

        while(prev>=0 && arr[prev]<arr[prev+1]){
            arr[prev+1] = arr[prev];
            prev--;
        }
        arr[prev+1]=curr;
    }
    cout<<"Sorted Array in Decending Order is\n";
}
void PrintArray(int arr[],int n){
    
    for(int i=0;i<n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int arr[] = {9,8,7,6,5,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    Dcending_insertion_sort(arr,n);
    PrintArray(arr,n);


    return 0;
}