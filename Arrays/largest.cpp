#include<iostream>
using namespace std;

int main(){
    int arr[6] = {12, 45, 7, 89, 23, 56};
    int largest = arr[0];
    for(int i=1;i<6;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    } 
    cout<<"Largest Element is:"<<largest; 
    return 0;
} 