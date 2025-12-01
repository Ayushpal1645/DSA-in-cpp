#include<iostream>
using namespace std;
 int duplicate(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];

    }
    for(int i=1;i<n;i++){
        ans=ans^i;
    }
    return ans;

 }
 int main(){
    int arr[9]={1,2,3,4,5,6,7,8,4};
    cout<<"duplicate value is : "<<duplicate(arr,9);

 }