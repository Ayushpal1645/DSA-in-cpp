#include<iostream>
using namespace std;
 int findunique(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    return ans;
 }
 int main(){
    int arr[7]={2,3,1,6,3,6,2};
    cout<<"unique elememt: "<<findunique(arr,7);

 }