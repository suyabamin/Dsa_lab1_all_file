#include<iostream>
using namespace std;
int insersion(string arr[],int n);
void print(string arr[],int n);
int main(){
 int n;
      int terget;
      cout<<"enter the size of string=";
      cin>>n;
      string arr[n];
      cout<<"enter string element=";
      for(int i=0;i<n;i++){
            cin>>arr[i];
      }

    insersion(arr,n);
    print(arr,n);
}
int insersion(string arr[],int n){

   for(int i=0;i<n-1;i++){
        int minindex=i;
    for(int j=i+1;j<n;j++){
        if(arr[j]<arr[minindex]){
               minindex=j;
        }
    }
    string temp=arr[i];
        arr[i]=arr[minindex];
        arr[minindex]=temp;
   }
}
void print(string arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}
