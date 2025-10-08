#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main(){
    stack <char>st;
    
    cout<<"enter size-";
    int s;
    cin>>s;
    cout<<"enter charecter-";
    char c;
    string str;
    str.resize(s);
    for(int i=0;i<s;i++){
       cin>>str[i];
    }
    
    
    for(int i=0;i<s;i++){
        st.push(str[i]);
    }

    string reverse="";
    while (!st.empty())
    {
        reverse=reverse+st.top();
        st.pop();
    }

    if(str==reverse){
        cout<<str<<"is palingdrom"<<endl;
    }else{
        cout<<"not palingdrom";
    }
    
    
   
   
}