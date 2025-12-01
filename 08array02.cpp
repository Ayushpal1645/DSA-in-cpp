 #include<iostream>
 using namespace std;

int  getMax(int num[],int n){

    int max = INT_FAST16_MIN;
     for(int i=0;i<n;i++){
        if(num[i]>max){
            max=num[i];
            //max=max(max,num[i]);
        }
     }
     return max;
}

int  getMin(int num[],int n){

    int min = INT_FAST16_MAX;
     for(int i=0;i<n;i++){
        if(num[i]<min){
            min=num[i];
            //min=min(min,num[i]);
                 }
     }
     return min;
}

 int main(){
     int size;
     cin>>size;

     int num[100];

     for(int i=0;i<size; i++){
        cin>>num[i];
     }
     
     cout<<"maximun value is"<<getMax(num,size)<<endl;
      cout<<"minimun value is"<<getMin(num,size)<<endl;
     
 }