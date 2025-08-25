#include<iostream>
using namespace std;
void selection(int arr[],int n,int k);
void print(int arr[],int n);
int main(){
      int n;
      int terget;
      cout<<"enter the size of array=";
      cin>>n;
      int arr[n];
      cout<<"enter array element=";
      for(int i=0;i<n;i++){
            cin>>arr[i];
      }
      cout<<"Enter k=";
      int k;
      cin>>k;
    print(arr,n);
    cout<<"(input array)"<<endl;
    cout<<"selection--";
    selection(arr,n,k);


}
void selection(int arr[],int n,int k){
for(int i=0;i<n-1;i++){
        int minindex=i;
for(int j=i+1;j<n;j++){
   if(arr[j]<arr[minindex]){
    minindex=j;
   }
}
int temp=arr[i];
arr[i]=arr[minindex];
arr[minindex]=temp;
}
 print(arr,n);

 cout<<endl<<"output="<<arr[k-1];
}

void print(int arr[],int n){
for(int i=0;i<n;i++){
    cout<<arr[i];
}
}

