#include<iostream>
using namespace std;

int binSearch(int arr[],int n,int key){
    int st=0,end=n-1;
    while(st<=end){
        int mid=(st+end)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(key>arr[mid]){
            st=mid+1;
        }
        else if(key<arr[mid]){
            end=mid-1;
        }
    }
    return -1;
}

int main(){
    int arr[]={23,36,58,77,99};
    int n=sizeof(arr)/sizeof(int);
    cout<<binSearch(arr,n,1)<<" ";  
    return 0; 
}