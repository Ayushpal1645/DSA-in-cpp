#include<iostream>
using namespace std;

int name(int i,int n){
    if(i>n){
        return 0;
    }
    cout<<"name"<<endl;
    name(i+1,n);

}


int number(int i,int n){
    if(i>n){
        cout<<endl;
        return 0;
    }
    cout<<i<<" ";
    number(i+1,n); 
    

}


int numberreverse(int i,int n){
    if(i<1){
        cout<<endl;
        return 0;
    }
    cout<<i<<" ";
    numberreverse(i-1,n);
    

}
//print 1 to n using backtracking

int printnumber(int i,int n){
    if(i<1){
        cout<<endl;
        return 0;
    }
    printnumber(i-1,n);
    cout<<i<<" ";
}
//print n to 1 using backtracking
int printnumberreverse(int i,int n){
    if(i>n){
        cout<<endl;
        return 0;
    }
    printnumberreverse(i+1,n);
    cout<<i<<" "<<endl;
}
//sum of first n natural numbers
void sumofnumbers(int i,int sum){
    if(i==0){
        cout<<sum;
        return;
    }
    sumofnumbers( i-1,sum+i);
}


//sum of first n natural numbers
int sumofnumbers2(int n){
    if(n==0) return 0;
    return n+ sumofnumbers2(n-1);

}

//sfactorial
int factorial(int n){
    if(n==0) return 1;
    return n * factorial(n-1);

}

int main(){
    int n;
    cin>>n;
    name(1,n);
    number(1,n);
    numberreverse(n,n);
    printnumber(n,n);
    printnumberreverse(1,n);
    sumofnumbers(n,0);
    cout<<sumofnumbers2(n)<<endl;
    cout<<factorial(n)<<endl;
    return 0;
}