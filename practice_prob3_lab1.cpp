#include<iostream>
using namespace std;
int main(){
      int n;
      int terget;
      cout<<"enter the size of array=";
      cin>>n;
      int arr[n];
      int freq[n];
      cout<<"enter array element=";
      for(int i=0;i<n;i++){
            cin>>arr[i];
            freq[i]=1;
      }



    for(int i=0;i<n;i++){
        if(freq[i]==0)
            continue;
            for(int j=i+1;j<n;j++){
                if(arr[i]==arr[j]){
                    freq[i]++;
                    freq[j]=0;
                }
            }
        }
        //frequency and array swap

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(freq[i]<freq[j]){
                    int temp=freq[i];
                    freq[i]=freq[j];
                    freq[j]=temp;
                    //swap element
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }

    for(int i=0;i<n;i++){
    if(freq[i]>0){
        for(int j=0;j<freq[i];j++){
            cout<<arr[i]<<" ";
        }
    }
  }

return 0;
    }


