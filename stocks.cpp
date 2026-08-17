#include<iostream>
using namespace std;


void maxProfit(int price[],int n){
    int mP=0,bB=price[0];
    for(int i=1;i<n;i++){
        if(price[i]>bB){
            mP=max(mP,price[i]-bB);
        }
        bB=min(bB,price[i]);
    }
    cout<<"Max Profit: "<<mP; 
}
int main(){
    int arr[6]={7,1,5,3,6,4};
    int n=sizeof(arr)/sizeof(int);
    maxProfit(arr,n); 
    return 0;
}