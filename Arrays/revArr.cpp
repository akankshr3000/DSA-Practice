#include<iostream>
using namespace std;

int printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int arr[]={69,56,88,77,34};
    int n= sizeof(arr)/sizeof(int); 

    int st=0,end=n-1;
    while(st<end){
        swap(arr[st],arr[end]);
        st++;
        end--;
    }
    printArr(arr,n);
    return 0;
} 