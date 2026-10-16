#include<iostream>
#include <algorithm>
#include<functional> 
using namespace std;

void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={1,79,29,45,53,10,69};
    int n=sizeof(arr)/sizeof(int);

    sort(arr,arr+n,greater<int>());
    printArr(arr,n);  
    return 0;
}