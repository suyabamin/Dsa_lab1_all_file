#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool isvalid(string s){

    stack<char>st;

    for(char c:s){
        if(c=='('||c=='{'||c=='['){
            st.push(c);
        }else if(c==')'||c=='}'||c==']'){
            if(st.empty()){
                return false;
            }
            char top=st.top();
            st.pop();

            if((c==')'&& top!='(')||
            (c=='}'&&top!='{')||
            (c==']'&&top!='[')){
                return false;
            }
        }

    }
    return st.empty();

}


int main()
{
   string s;
   cout<<"enter strin-";
   while (cin>>s)
   {
    if(isvalid(s)){
        cout<<"true";
    }else{
        cout<<"false";
    }
   }
    
} 

