#include <iostream>
using namespace std;
void print2(int n){
int i=1;
for( i;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<< i <<" ";
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
    print2(n);
    }

    return 0;

}