#include<iostream>
using namespace std;

int linSearch(int arr[],int n, int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[]={54,76,33,69,75};
    int n = sizeof(arr)/sizeof(int);
    cout<<linSearch(arr,n,69); 
}