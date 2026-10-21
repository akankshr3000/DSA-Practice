#include<iostream>
using namespace std;

int printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int insertSort(int arr[],int n){
    for(int i=1;i<n;i++){
    int curr=arr[i];
    int prev=i-1;
    while(prev>=0 && arr[prev]<curr){ 
        arr[prev+1]=arr[prev];
        prev--;
    }
    arr[prev+1]=curr; 
}
}

int main(){
    int arr[]={3, 6, 2, 1, 8, 7, 4, 5, 3, 1}; 
    int n=sizeof(arr)/sizeof(int);   
    insertSort(arr,n); 
    printArr(arr,n); 
    return 0;  
}