#include<iostream>
using namespace std;

int rotatedArr(int A[],int n,int target){
    int st=0,end=n-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(A[mid]==target){
            return mid;
        }
        if(A[st]<=A[mid]){  //Left Sorted
            if(A[st]<=target && target<=A[mid]){
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        }
        else{
            if(A[mid]<=target && target<=A[end]){
                st=mid+1;
            }
            else{
                end=mid-1;
            }
        }
    }
    return -1; 
}

int main(){
    int arr[]={3,4,5,6,7,0,1,2};
    int n=sizeof(arr)/sizeof(int);
    cout<<rotatedArr(arr,n,0);      
}