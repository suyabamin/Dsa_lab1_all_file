#include<iostream>
using namespace std;
int binaryScarch(int arr[],int terget,int n);
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
      cout<<"enter terget num=";
      cin>>terget;
    //  cout<<terget;

  int a= binaryScarch(arr,terget,n);
cout<<a;
}

int binaryScarch(int arr[],int terget,int n){

 int mid;
      int low= 0;
      int high= n-1;

      while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==terget){

            return mid;
            break;

        }else if(arr[mid]<terget){
            low=mid+1;
        }else if(arr[mid]>terget){
          high=mid-1;
        }
       if(low>high){
       return low;
       }
      }




}


