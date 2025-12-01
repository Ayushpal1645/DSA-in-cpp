#include<iostream>
using namespace std;


int firstoccurence(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int ans=1;

    int  mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            end=mid-1;
        }

        //go to the right wala
        else if(arr[mid]<key){
            start=mid+1;
        }
        
        //go to the left wala
        else if(arr[mid]>key){
            end=mid-1;
        }
        mid =start+(end-start)/2; 
    }
    return ans;
}


int lastoccurence(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int ans=-1;

    int  mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            start=mid+1;
        }
        //go to the right wala
        else if(arr[mid]<key){
            start=mid+1;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        mid =start+(end-start)/2; 
    }
    return ans;
}




int main(){
    int even[5]={1,2,3,3,5};
    cout<<"first occurnece of 3 is at index "<<firstoccurence(even,5,3)<<endl;

    cout<<"last occurnece of 3 is at index "<<lastoccurence(even,5,3)<<endl;;
    return 0;

}