#include<iostream>
using namespace std;
main(){
int n;
cout<<"enter the size of array=";
cin>>n;
int arr[n];
printf("enter elements of array--");
for(int i=0;i<n;i++){
    cin>>arr[i];
}
   int a=0;
for(int i=0;i<n;i++){

    for(int j=i+1;j<n;j++){
        if(arr[a]<arr[j]){
            a=j;
        }
    }
    int temp=arr[i];
    arr[i]=arr[a];
    arr[a]=temp;

}


for(int i=0;i<n;i++){
    cout<<arr[i];
}
}
