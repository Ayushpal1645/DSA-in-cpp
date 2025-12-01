// #include <iostream>
// #include <math.h>
// using namespace std;

// // reverse of number
// void reverse(int n)
// {
//     int revN = 0;

//     while (n > 0)
//     {
//         int lastdigit = n % 10;
//         revN = (revN * 10) + lastdigit;
//         n = n / 10;
//     }
//     cout << revN;
// }

// // palindrome
// void palidrme(int n)
// {
//     int revN = 0;
//     int originalN = n;

//     while (n > 0)
//     {
//         int lastdigit = n % 10;
//         revN = (revN * 10) + lastdigit;
//         n = n / 10;
//     }
//     if (originalN == revN)
//     {
//         cout << "palindrome";
//     }
//     else
//     {
//         cout << "not palindrome";
//     }
// }

// // armstrong number

// void armstrong(int n)
// {
//     int sum = 0;
//     int originalN = n;

//     while (n > 0)
//     {
//         int lastdigit = n % 10;
//         sum = sum + (lastdigit * lastdigit * lastdigit);
//         int revN = (revN * 10) + lastdigit;
//         n = n / 10;
//     }
//     if (originalN == sum)
//     {
//         cout << "armstrong";
//     }
//     else
//     {
//         cout << "not armstrong";
//     }
// }

// // print all divisors of a number

// void printdivisors(int n){
//     for(int i=1;i<=n;i++){
//         if(n%i==0){
//             cout<<i<<" ";
//         }


//     }
// }

// int main()
// {
//     int n;
//     cin >> n;

//     printdivisors(n);
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// void printdiviosors(int n){
//     vector<int> ls;

//     for(int i=1;i*i<=n;i++){
//         if(n%i==0){
//             ls.push_back(i);
//             if((n/i!=i)){
//                 ls.push_back(n/i);
//             }
//         }
//     }
//     sort(ls.begin(),ls.end());
//     for(auto it:ls)
// {
//     cout<<it<<" ";
// }    
// }
// int main(){
//     int n;
//     cin>>n;
//     printdiviosors(n);
//     return 0;
// }

//prime numbers

// #include <iostream>
// using namespace std;
// void prime(int n){
//     int cnt=0;
//     for(int i=1;i*i<=n;i++){
//         if(n%i==0){
//             cnt++;
//         }
//         if(n/i!=i){
//             cnt++;
//         }
    
//     }
//     if(cnt==2){
//         cout<<"prime";
//     }
//     else{
//         cout<<"not prime";
// }
// }
// int main(){
// int n;
// cin>>n;
// prime(n);
// return 0;
// }



//greatest common divisor
#include <iostream>
using namespace std;

int gcd(int a,int b){

    while(a>0 && b>0){
        if(a>b) a=a%b;
        else b=b%a;
    }
    if(a==0) return b;
    else return a;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b);
    return 0;
}