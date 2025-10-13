#include<iostream>
#include<vector>
using namespace std;
int  main(){
   vector<int>vec={1,2,3,4};
  //vector<int>vec(3,0);
 /*  cout<<vec[0]<<endl;
   cout<<vec[1]<<endl;
   cout<<vec[2]<<endl;
   */
  cout<<"size--"<<vec.size()<<endl;
  vec.push_back(10);
  cout<<"size--"<<vec.size()<<endl;
  vec.pop_back();
  cout<<"size--"<<vec.size()<<endl;
  cout<<"front-"<<vec.front()<<endl;
  cout<<"back-"<<vec.back()<<endl;

  cout<<"at index-"<<vec.at(2)<<endl;


  for(int  value:vec){
    cout<<value<<endl;
  }
  
}