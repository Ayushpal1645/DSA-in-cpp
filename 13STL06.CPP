#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<string> q;

    q.push("ayush");
    q.push( "pal");
    q.push("kumar");

    cout<<"top element-->"<<q.front()<<endl;

    q.pop();
    cout<<"top element"<<q.front()<<endl;

    cout<<"size of stack"<<q.size()<<endl;

    cout<<"empty or not"<<q.empty()<<endl;


}