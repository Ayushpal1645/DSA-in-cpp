#include<iostream>
using namespace std;
 int main(){

     int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n-i+1){
            cout<<j;
            j=j+1;

        }
        int start=i-1;
        while(start){
            cout<<"*";
            start=start-1;
        }
        int start1=i-1;
        while(start1){
            cout<<"*";
            start1=start1-1;
        }
        int k=n-i+1;
        while(k){
            cout<<k;
            k=k-1;
        }
        cout<<endl;
        i=i+1;
    }

 }
