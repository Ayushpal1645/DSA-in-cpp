#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int,string> m;

    m[1]="ayush";
    m[12]="pal";
    m[3]="singh";
    m.insert({5,"bheem"});

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
            }
            
            cout<<"finding -13-->"<<m.count(-13)<<endl;
}