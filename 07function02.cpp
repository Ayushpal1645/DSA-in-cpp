#include<iostream>
using namespace std;

//  int evenodd(int num){
//     if(num%2==0){
//         cout<<"number is even"<<endl;
//         }
//      else{
//         cout<<"number is odd"<<endl;
        
//      } 
//       return 0; 
     
//     }
//     int main(){
//         int  n;
//         cin>>n;
//         int ans=evenodd(n);
//         cout<<ans;
       
    
//     return 0 ;
//     }
 


 int factorial(int n){
 int fact=1;
 for(int i=1;i<=n;i++){
    fact=fact*i;
 }
return fact;
 }
int nCr(int r,int n){
    int num=factorial(n);
    int deno=factorial(r)* factorial(n-r);
    int ans= num/deno;
     return ans;
}
int main(){
    int n=5,r=2;
   

    cout<<"answer is"  << nCr(n,r) << endl;
    return 0;


}