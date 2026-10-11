#include<iostream>
using namespace std;

int maxSubbArr(int arr[],int n){
    int currSum=0;
    int maxSum=INT16_MIN; 
    for(int i=0;i<n;i++){
        currSum+=arr[i];
        maxSum=max(maxSum,currSum);

        if(currSum<0){
            currSum=0; 
        }
    }
    cout<<"Maximum Sum is: "<<maxSum; 
}

int main(){
    int arr[]={4, -6, 3, 5, -2, 7, -8, 4};
    int n=sizeof(arr)/sizeof(int);
    maxSubbArr(arr,n); 
    return 0;
}