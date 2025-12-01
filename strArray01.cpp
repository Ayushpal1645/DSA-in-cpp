#include<iostream>
using  namespace std;

int findLargest(int arr[]){
 int largest=arr[0];
    for(int i=1;i<5;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    cout<<largest<<endl;
    return 0;
}
 
 int slargest(int arr[]){
        int largest=arr[0];
        int slargest=-1;
        for(int i=0;i<5;i++){
            if(arr[i]>largest){
                slargest=largest;
                largest=arr[i];
            }
            else if(arr[i]<largest && slargest<arr[i]){
                    slargest=arr[i];
                }
            }
        
        cout<<slargest<<endl;
        return 0;
 }
    

int main(){
    int arr[5];
    cout<<"Enter 5 elements:"<<endl;
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    findLargest(arr);
    slargest(arr);
  
}