#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int k=0;k<n-i+1;k++){
            cout<<"*";
        }
        for(int l=0;l<n-i;l++){
            cout<<"*";
        }
        cout<<endl;
    }
     for(int i=1;i<=n;i++){
         for(int l=0;l<n-i;l++){
             cout<<" ";
         }
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        for(int k=0;k<=i;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
