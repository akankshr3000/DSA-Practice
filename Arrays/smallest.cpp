#include<iostream>
using namespace std;

int main(){
    int arr[6] = {12, 45, 7, 89, 23, 56};
    int smallest = arr[0];
    for(int i=1;i<6;i++){
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    } 
    cout<<"Largest Element is:"<<smallest;  
    return 0;
} 