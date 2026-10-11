#include<iostream>
using namespace std;

int waterTrapped(int height[],int n){
    int leftMax[20000],rightMax[20000];
    leftMax[0]=height[0];
    rightMax[n-1]=height[n-1];

    for(int i=1;i<n;i++){
        leftMax[i]=max(leftMax[i-1],height[i]);
    }

    for(int i=n-2;i>=0;i--){
        rightMax[i]=max(rightMax[i+1],height[i]);
    }

    int waterTrapped=0;
    for(int i=0;i<n;i++){
        int currWater=min(leftMax[i],rightMax[i])-height[i];

        if(currWater>0){
            waterTrapped+=currWater;
        }
    }

    cout<<waterTrapped; 
}

int main(){
    int arr[]={3, 0, 2, 0, 4}; 
    int n=sizeof(arr)/sizeof(int);
    waterTrapped(arr,n); 
    return 0;
}