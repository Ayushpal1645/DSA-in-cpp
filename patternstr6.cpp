#include <iostream>
using namespace std;
void print5(int n){
    for(int i=0;i<n;i++){
        //spaces
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        
        }
        //stars
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        //spaces
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
        
    }


}

void print6(int n){

    for(int i=0;i<n;i++){
        //spaces
        for(int j=0;j<i;j++){
            cout<<" ";
        
        }
        //stars
        for(int j=0;j<2*n-(2*i+1);j++){
            cout<<"*";
        }
        //spaces
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<endl;
        
    }


}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){

    
  
    int n;
    cin>>n;
    print5(n);
    print6(n);
    }

    return 0;
}