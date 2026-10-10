/* Printing Index Pairs of SubArrays

#include<iostream>
using namespace std;

int printSubArr(int arr[],int n){
    for(int st=0;st<n;st++){  
        for(int end=st;end<n;end++){
            cout<<"("<<st<<","<<end<<")";
        }
        cout<<endl; 
    }
}

int main(){
    int arr[]={10,20,30,40,50};
    int n=sizeof(arr)/sizeof(int);
    printSubArr(arr,n); 
    return 0;
}

*/ 

/*Printing the Elements of SubArrays*/

#include<iostream>
using namespace std;

int printSubArr(int arr[],int n){
    for(int st=0;st<n;st++){
        for(int end=st;end<n;end++){
            for(int i=st;i<=end;i++){
                cout<<arr[i];  
            }
            cout<<","; 
        }
        cout<<endl; 
    }
}

int main(){
    int arr[]={10,20,30,40,50};
    int n=sizeof(arr)/sizeof(int);
    printSubArr(arr,n); 
    return 0;  
}