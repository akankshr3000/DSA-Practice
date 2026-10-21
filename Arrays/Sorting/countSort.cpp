#include<iostream>
#include <algorithm>
#include <climits>
using namespace std;

void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int countSort(int arr[],int n){
    int freq[10000];
    int minVal=INT32_MAX,maxVal=INT32_MIN;
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
        minVal=min(minVal,arr[i]);
        maxVal=max(maxVal,arr[i]);
    }

    int j=0;
    for(int i=maxVal;i>=minVal;i--){  
        while(freq[i]>0){ 
            arr[j++]=i;
            freq[i]--;
        }
    }
}

int main(){
    int arr[]={1, 4, 1, 3, 2, 4, 3, 7};
    int n=sizeof(arr)/sizeof(int);
    countSort(arr,n);
    printArr(arr,n); 
    return 0; 
}