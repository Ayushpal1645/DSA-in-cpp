#include<iostream>
using namespace std;

 int binarysearch(int arr[],int size, int key){
    int start=0;
    int end= size-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            return  mid;
        }
        if (arr[mid]<key){
            start= mid+1;
        }
        else{
            end= mid-1;
        }
        mid=start+(end-start)/2;
    }
    return -1;


 }
 int main(){
    int even[6]={12,4,12,22,32,35};
    int odd[5]={1,4,6,8,9};
    int evenindex=binarysearch(even,6,32);
    cout<<"index of even number is "<<evenindex<<endl;

    int oddindex=binarysearch(odd,5,6);
    cout<<"index of odd number is "<<oddindex<<endl;
    return 0;
 }