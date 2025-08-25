#include<iostream>
using namespace std;
 int binaryScarch(int arr[],int n,int x);
int main(){
    int n;
    cout<<"enter the size of array=";
    cin>>n;
  int arr[n];

  cout<<"enter array ealement---";
 for(int i=0;i<n;i++){
     cin>>arr[i];
 }
 cout<<"enter targeted number--";
 int x=19;
   cin>>x;

   int k=  binaryScarch(arr,n,x);
   cout<<k;

    return 0;
}

int binaryScarch(int arr[],int n,int x){
     int mid;
     int high=n-1;
     int low=0;
     while(high>=low){
          mid=(high+low)/2;

          if(arr[mid]==x){
           return mid;
           break;
          }else if(arr[mid]>x){
            high=mid-1;
          }else if(arr[mid]<x){
              low=mid+1;
          }if(high<low){
              return  high;
          }

     }
}

