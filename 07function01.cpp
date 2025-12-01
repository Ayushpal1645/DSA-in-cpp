#include<iostream>
using namespace std;
 int power(int a, int b){
    int ans=1;
    for(int i=1; i<=b;i++){
    ans= ans*a;
    }
    return ans;

 }
  int main(){
    int a,b;
    cin>>a>>b;
    int answer=power(a,b);
    cout<<"anseris"<<answer<<endl;

    int d, e;
    cin>>d>>e;
    int answer1=power(d,e);
    cout<<"answer is" <<answer1<<endl;
    return 0;
  }
