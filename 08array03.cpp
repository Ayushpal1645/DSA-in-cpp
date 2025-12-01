#include<iostream>
using namespace std;

void update(int arr[],int n){
    cout<<"inside the function"<<endl;
     arr[0]=120;
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
        

    }
    cout<<endl;
    cout<<"goning back to main function"<<endl;

}

int main(){
    int arr[3]={1,2,3};
    update(arr,3);

 for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
       
 }


}
// if we update something ON array in any function 
// then it update in actual array beacuse it acutally pass an addres of acctual array to
// to function ARRAY
