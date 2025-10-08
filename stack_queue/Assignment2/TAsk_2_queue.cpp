#include<iostream>
#include<queue>
#include<string>
using namespace  std;


int main(){
    queue<char>qu;
   cout<<"enter any string-";
   string str;
   int n;
   cout<<"enter size-";
   cin>>n;
    str.resize(n);
    cout<<"enter string";
   for(int i=0;i<n;i++){
    cin>>str[i];
   }
   for(int i=0;i<n;i++){
    qu.push(str[i]);
   }

   string reverse="";
   
   for(int i=n-1;i>=0;i--){
    reverse=reverse+str[i];
    qu.pop();
   }
   if(str==reverse){
    cout<<"palingdrom";
   }else{
    cout<<"not palingdrom";
   }


}