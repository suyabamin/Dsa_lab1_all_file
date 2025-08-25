<<<<<<< HEAD
#include<iostream>
using namespace std;
void selection(int arr[],int n);
void bubbol(int arr[],int n);
void insersion(int arr[],int n);
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
    print(arr,n);
    cout<<"(input array)"<<endl;
   /* cout<<"selection--";
    selection(arr,n);*/
   /* cout<<"Bubbol--"
    bubbol(arr,n);*/

    insersion(arr,n);

}
void selection(int arr[],int n){
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
}

void bubbol(int arr[],int n){
for(int i=0;i<n-1;i++){
for(int j=0;j<n-i-1;j++){
    if(arr[j]<arr[j+1]){
        int temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
    }
}
}
print(arr,n);

}

void insersion(int arr[],int n){
  for(int i=0;i<n;i++){
    int j=i-1;
    int temp=arr[i];
    while(j>=0&&arr[j]>temp){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=temp;
  }
  print(arr,n);
}


void print(int arr[],int n){
for(int i=0;i<n;i++){
    cout<<arr[i];
}
}
=======
#include<iostream>
using namespace std;
void selection(int arr[],int n);
void bubbol(int arr[],int n);
void insersion(int arr[],int n);
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
    print(arr,n);
    cout<<"(input array)"<<endl;
   /* cout<<"selection--";
    selection(arr,n);*/
   /* cout<<"Bubbol--"
    bubbol(arr,n);*/

    insersion(arr,n);

}
void selection(int arr[],int n){
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
}

void bubbol(int arr[],int n){
for(int i=0;i<n-1;i++){
for(int j=0;j<n-i-1;j++){
    if(arr[j]<arr[j+1]){
        int temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
    }
}
}
print(arr,n);

}

void insersion(int arr[],int n){
  for(int i=0;i<n;i++){
    int j=i-1;
    int temp=arr[i];
    while(j>=0&&arr[j]>temp){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=temp;
  }
  print(arr,n);
}


void print(int arr[],int n){
for(int i=0;i<n;i++){
    cout<<arr[i];
}
}
>>>>>>> 939f5a660030f273ccbc312e82156d873d1d62df
