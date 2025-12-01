#include<iostream>
using namespace std;
int arrayintersection( int arr1[],int arr2[],int n, int m){
    int i=0;
    int j=0;
    while(i<n&&j<m){
        if (arr1[i]==arr2[j]){
            cout<<arr1[i];
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }
        else{
            j++;
        }

    }
     return 0;

}
int main(){
    int arr1[6]={1,2,2,2,3,4};
    int arr2[4]={2,2,3,3};
      int ayush=arrayintersection(arr1,arr2,6,4);
    return 0;

}