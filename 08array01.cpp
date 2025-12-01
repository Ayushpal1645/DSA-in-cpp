#include<iostream>
using  namespace std;

void printarray(int arr[],int size){
    cout<<"printing the array"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"printing done"<<endl;
}



int main(){
    //declare
    int number[15];

    //accesing amn array
    cout<<"value of 14 index"<< number[14]<<  endl;

    cout<<"value at 20 index"<<number[20]<<endl;

    cout<<"everything is fine"<<endl;

     int ar[3]={5,7,11};
     cout<<ar[2]<<endl;

     int third[15]={2,7};

     int n=15;
     printarray(third,15);

     int fifth[10]={1,2};
     int n1=10;
     printarray(fifth,10);

     char ch[5]={'a','b','c','d','e'};

     for(int i=0;i<=5;i++){
        cout<<ch[i]<<" ";
     }


     }



