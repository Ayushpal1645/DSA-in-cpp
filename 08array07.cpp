#include<iostream>
using namespace std;

void arrayprint(int ar[],int size){
    for(int i=0;i<size;i++){
        cout<<ar[i]<<" ";
    }
}
void swap(int x,int y){
    int temp =x;
     x=  y;
     y=temp;

}


void ayush(int ar[],int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(ar[i],ar[i+1]);
        }
    
    }
}

int main(){
  
     int even[8]={1,2,3,4,5,6,7,8};
     int odd[7]={1,2,3,4,5,6,7}; 
      

     ayush(even,8);
     arrayprint(even,8);

     cout<<endl;
     
     ayush(odd,7);
     arrayprint(odd,7);

  

        return 0;
}