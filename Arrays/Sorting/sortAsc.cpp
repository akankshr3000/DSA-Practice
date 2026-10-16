#include<iostream>
#include <algorithm>
using namespace std;

void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={1,9,2,5,3,10};
    int n=sizeof(arr)/sizeof(int);

    sort(arr,arr+n);
    printArr(arr,n); 
    return 0;
}