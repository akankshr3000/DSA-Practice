#include<iostream>
using namespace std;

int linSearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){ 
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[5]={12,3,6,8,69};
    cout<<"Element Found at index:"<<linSearch(arr,5,69);     
    return 0;
} 