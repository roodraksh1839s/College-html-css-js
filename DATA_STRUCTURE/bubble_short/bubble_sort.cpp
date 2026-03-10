#include<iostream>
using namespace std;

void Bubble_sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                 swap(arr[j],arr[j+1]);
   
        }
    }
}
}
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[]= {3,5,4,1,2};
    int n = 5;

    Bubble_sort(arr,n);
    printarray(arr,n);

    return 0;

}