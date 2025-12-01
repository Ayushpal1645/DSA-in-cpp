#include<iostream>
using namespace std;
int main(){
//     int num=2; 
//     cout<<endl;
//     switch (num)
//     {
//     case 1: cout<<"first"<<endl;
//         break;;;

//     case 2: cout<<"second"<<endl;    
//          break;
    
//     default: cout<<"it is default case";
//         break;
//     }
// }
int a;
cout<<"enter the value of a"<<endl;
cin>>a;
int b;
cout<<"enter the value of b"<<endl;
cin>>b;
char ch= 'c';
cout<<"enter the operator"<<endl;
cin>>ch;
switch(ch){
case '+':  cout<<"addtion of a and b is:"<<a+b<<endl;
    break;
case '-': cout<<"subtraction of a and b"<<a-b<<endl;
    break;
case '*': cout<<"multiplication od a nd b is:"<<a*b<<endl;   
    break;
case  '/': cout<<"dibion of a and b is:"<<a/b<<endl;
    break;    

default: cout<<"invalid operator";
    break;
}

}
