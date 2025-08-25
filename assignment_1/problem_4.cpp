#include<iostream>
using namespace std;
int main(){
    cout<<"enter any number-";
    int n;
    cin>>n;
    int low=0;
    int high=n;
    int mid;
    while(1){
     mid=(low+high)/2;
     if((mid*mid)>=n&&(mid*mid)<=n){
        cout<<mid;
        break;
     }
    else if((mid*mid)>n){
        high=mid;
     }else{
     low=mid;
     }
    }
    cout<<"\n";
return 0;
}
