#include<iostream>
using namespace std;

//fibonacci series

int fibonacci(int n){
    int a=0;
    int b=1;
    cout<<a<<" "<<b<<" ";
    int i=3;
    while(i<=n){
    int nextnum=a+b;
    cout<<nextnum<<" ";
    a=b;
    b=nextnum;
    i++;

}
return a+b;
}

int main(){
    int n;
    cin>>n;
    cout<<fibonacci(n);
    return 0;

}




// int setsbits(int a, int b){
//    int count=0;
//     while(a!=0 || b!=0){
//         if(a&1 || b&1 ){
//             count++;
//         }
//         a=a>>1;
//         b=b>>1;
//     }
//     return count;

// }
// int main(){
//     int a,b;
//     cin>>a;
//     cin>>b;
//     cout<<setsbits(a,b)<<endl;
//     return 0;
// }



// int noOfbits(int x)
// {
// int count =0;
// while(x!=0 )
// {
//     if(x&1 )
//     {
//      count++;
//     }
//     x=x>>1;
   
// }
// return count;

// }

// int main()
// {

// int x,y;

// cin>>x>>y;

// //calling function for 
// //first number

// noOfbits(x);

// //calling function for 
// //second number

// noOfbits(y);

// cout<<noOfbits(x)+noOfbits(y);

// return 0;
// }





// int nth_term(int n){
//     return(3*n+7);

// }
// int main(){
//     int n;
//      cin>>n;
//      cout<<" nth term is "<<nth_term(n)<<endl;
//      return 0;
// }