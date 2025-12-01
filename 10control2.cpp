#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int num=2;
    while(num<n){
       if (n%num==0){
        cout<<"not a prime number"<<num<<endl; 
       }
       else{
        cout<<"prime nunmber"<<num<<endl;
       }
       
       num=num+1;
    }    
    
   



}