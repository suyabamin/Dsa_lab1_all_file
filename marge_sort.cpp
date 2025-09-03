#include<iostream>
using namespace std;
int marge(int arr[],int low,int mid,int high){

}
int margeSort(int arr[],int low,int high){
    if(low<high){
        int mid=(low+high)/2;
        margeSort(arr,low,high);
        margeSort(arr,mid+1,high);
        margeSort(arr,low,high);
        marge(arr,low,mid,high);
    }

}
int main(){
    int n;
    cout<<"enter array size";
    cin>>n;
    int arr[n];
    cout<<"enter array";
    int a;
    for(int i=0;i<n;i++){
         cin>>arr[i];

    }
     for(int i=0;i<n;i++){
         cout<<arr[i];

    }

}
