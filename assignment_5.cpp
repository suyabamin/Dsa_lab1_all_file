#include<iostream>
using namespace std;
int main(){
int n,x;

cout<<"enter the size of array-";
cin>>n;
long long arr[n];
cout<<"Enter the element of arry=";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<"enter amoutnt";
long long a;
cin>>a;

long long cummulative_sum[n];
cummulative_sum[0]=arr[0];
for(int j=1;j<n;j++){
    cummulative_sum[j]=cummulative_sum[j-1]+arr[j];
}
for(int k=0;k<n;k++){
    if(a<=cummulative_sum[k]){
        cout<<k;
       return 0;
    }
}

return 0;
}
