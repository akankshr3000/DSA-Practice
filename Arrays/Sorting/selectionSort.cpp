#include<iostream>
using namespace std;

void selectSort(int arr[],int n){
    for(int i=0;i<n;i++){
        int minIdx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIdx]){
                minIdx=j;
            }
        }
        swap(arr[i],arr[minIdx]);
    }
}

int printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={78,56,99,84,22,1};
    int n=sizeof(arr)/sizeof(int);
    selectSort(arr,n);
    printArr(arr,n); 
    return 0;
}