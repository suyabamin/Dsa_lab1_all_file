<<<<<<< HEAD
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
int even[n];
int odd[n];
int c=0;
for(int i=0;i<n;i=i+2){
    even[c]=arr[i];
    c++;
    }
    int d=0;
    for(int i=1;i<n;i=i+2){
    odd[d]=arr[i];
    d++;
    }


  /*  for(int i=0;i<c;i++){
    cout<<even[i];
}
for(int i=0;i<d;i++){
    cout<<odd[i];
}
    return 0;*/
  //even
    for(int i=0;i<c-1;i++){
    for(int j=0;j<c-i-1;j++){
        if(even[j]>even[j+1]){
            int temp=even[j];
            even[j]=even[j+1];
            even[j+1]=temp;
        }
    }
}

//odd
for(int i=0;i<d-1;i++){
    for(int j=0;j<d-i-1;j++){
        if(odd[j]<odd[j+1]){
            int temp=odd[j];
            odd[j]=odd[j+1];
            odd[j+1]=temp;
        }
    }
}




/*for(int i=0;i<c;i++){
    cout<<" "<<even[i];
}
for(int i=0;i<d;i++){
    cout<<" "<<odd[i];
} */
//marge two array
for(int i=0;i<c;i++){
    arr[i]=even[i];
}

for(int j=0;j<d;j++){
    arr[j+c]=even[j];
}

for(int i=0;i<n;i++){
    cout<<" "<<arr[i];
}


}




=======
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
int even[n];
int odd[n];
int c=0;
for(int i=0;i<n;i=i+2){
    even[c]=arr[i];
    c++;
    }
    int d=0;
    for(int i=1;i<n;i=i+2){
    odd[d]=arr[i];
    d++;
    }


  /*  for(int i=0;i<c;i++){
    cout<<even[i];
}
for(int i=0;i<d;i++){
    cout<<odd[i];
}
    return 0;*/
  //even
    for(int i=0;i<c-1;i++){
    for(int j=0;j<c-i-1;j++){
        if(even[j]>even[j+1]){
            int temp=even[j];
            even[j]=even[j+1];
            even[j+1]=temp;
        }
    }
}

//odd
for(int i=0;i<d-1;i++){
    for(int j=0;j<d-i-1;j++){
        if(odd[j]<odd[j+1]){
            int temp=odd[j];
            odd[j]=odd[j+1];
            odd[j+1]=temp;
        }
    }
}




/*for(int i=0;i<c;i++){
    cout<<" "<<even[i];
}
for(int i=0;i<d;i++){
    cout<<" "<<odd[i];
} */
//marge two array
for(int i=0;i<c;i++){
    arr[i]=even[i];
}

for(int j=0;j<d;j++){
    arr[j+c]=even[j];
}

for(int i=0;i<n;i++){
    cout<<" "<<arr[i];
}


}




>>>>>>> 939f5a660030f273ccbc312e82156d873d1d62df
