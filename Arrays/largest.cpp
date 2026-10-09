#include<iostream>
using namespace std;

int main(){
    int arr[5]={22,33,44,55,66};
    int largest = arr[0];
    for(int i=1;i<5;i++){
        if (arr[i]>largest){
            largest=arr[i];
        }
    }
    cout<<largest;  
    return 0;
}