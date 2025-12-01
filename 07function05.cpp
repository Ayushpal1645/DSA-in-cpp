#include<iostream>
using namespace std;
int noofbit(int n){
    int count=0;
    while(n!=0){
        if(n&1){
            count++;
        }
        n=n>>1;
    }
    return count;
}
int main(){
    int a;
     int b;
     cin>>a>>b;
     noofbit(a);
     noofbit(b);
     cout<<noofbit(a)+noofbit(b)<<endl;
     return 0;
}
