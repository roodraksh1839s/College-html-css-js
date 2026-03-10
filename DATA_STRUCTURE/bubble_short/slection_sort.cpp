#include<iostream>
using namespace  std;


void Selection_sort(int arr[],int n){

    for(int i = 0; i< n-1; i++){
        int smallestIndex = i;
        for(int j = i+1;j < n; j++){
            if(arr[j]<arr[smallestIndex])
            smallestIndex = j;
        }
        swap(arr[i],arr[smallestIndex]);
    }
}
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

 int main(){

    int arr[]={10,9,4,5,7,2,3,1};
    int n = sizeof(arr) / sizeof(arr[0]);

    Selection_sort(arr,n);
    printarray(arr,n);

    return 0;
 }