#include<iostream>
using namespace std;
int main(){
int n,x;

cout<<"enter the size of array-";
cin>>n;
int  arr[n];
cout<<"Enter the element of arry=";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<"enter amoutnt-";
int  a;
cin>>a;

int  cummulative_sum[n];
cummulative_sum[0]=arr[0];
for(int j=1;j<n;j++){
    cummulative_sum[j]=cummulative_sum[j-1]+arr[j];
}

int low=0;
int high=n-1;
int mid,ind;
while(high>=low){
    mid=(high+low)/2;
    if( cummulative_sum[mid]>=a){
         ind=mid;
       high=mid-1;
    }else if(cummulative_sum[mid]<a){
       low=mid+1;
    }
}
cout<<ind;
/*for(int k=0;k<n;k++){
    if(a<=cummulative_sum[k]){
        cout<<k;
       return 0;
    }
}  */

return 0;
}
