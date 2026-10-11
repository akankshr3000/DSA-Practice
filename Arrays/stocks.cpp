#include<iostream>
using namespace std;

int buysellStocks(int price[],int n){
    int maxProfit=0,bestBuy=price[0];
    for(int i=1;i<n;i++){
        maxProfit=max(maxProfit,price[i]-bestBuy);
        bestBuy=min(price[i],bestBuy);
    }

    cout<<"("<<bestBuy<<","<<maxProfit<<")"; 
}
int main(){
    int arr[]={7, 1, 5, 3, 6, 4};
    int n= sizeof(arr)/sizeof(int);
    buysellStocks(arr,n);  
    return 0;
}