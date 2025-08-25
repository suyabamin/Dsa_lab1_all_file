#include<iostream>
using namespace std;
main(){
int n;
cout<<"enter the size of array=";
cin>>n;
int arr[n];
printf("enter elements--");
for(int i=0;i<n;i++){
    cin>>arr[i];
}

for(int i=0;i<n-1;i=i+2){
    int temp=arr[i];
    arr[i]=arr[i+1];
    arr[i+1]=temp;
}



for(int i=0;i<n;i++){
    cout<<arr[i];
}
}
