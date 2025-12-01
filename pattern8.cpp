#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
    int count=1;
    while(i<=n){
         int j=i;
        while(j<=i){
            cout<<count;
            count=count+1;
            j=j+i;
        }
        cout<<endl;
        i=i+1;
    }
}
//code didnot work