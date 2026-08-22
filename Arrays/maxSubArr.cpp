#include<iostream>
using namespace std;

int maxSubArr(int arr[],int n){
    int mS=INT16_MIN;
    int cS=0;
    for(int i=0;i<n;i++){
        cS+=arr[i];
        cout<<cS<<" "; 
        mS=max(mS,cS);

        if(cS<0){
            cS=0;
        }
    }
    cout<<"Maximum SubArray is:"<<mS;
}

int main(){
    int arr[]={4, -6, 3, 5, -2, 7, -8, 4};
    int n=sizeof(arr)/sizeof(int);
    maxSubArr(arr,n);  
    return 0;
}