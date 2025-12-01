#include<iostream>
using namespace std;

bool isprime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
           
            return 0;
        }
        
    }
    return 1;
}

int main(){
    int n;
    cin>>n;
    if(isprime(n)){
        cout<<"number is prime"<<endl;
    }
else{
    cout<<"number is not a prime"<<endl;
}    
return 0;
}


// void dummy(int n){
//     n++;
//     cout<<"n is "<<n<<endl;
// }
// int main(){
//     int n;
//     cin>>n;
//     dummy(n);
//     cout<<"number n is "<<n<<endl;
//     return 0;
// }    