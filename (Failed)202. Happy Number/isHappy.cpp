#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    bool isHappy(int n) {
        // string ns=std::to_string(n);
        int result=n;
        int original=n;
        
        while(result!=1){
          // ns=std::to_string(result);
          n=result;
          // cout<<"//"<<n<<"//";
          result=0;
        // for(int i=0;i<ns.size();i++){
        //   result+=stoi(ns[i]);
        // }
        
        while(n!=0){
          // cout<<result;
          int r=n%10;
          n=(n/10);
          result+=r*r;
          if(result==original){
            return false;
          }
          // cout<<"*"<<result<<"*";
        }
        }
        
        
        // cout<<"result"<<result;
        if(result==1){
          return true;
        }
        else{
          return false;
        }
        return false;
    }
};
int main(){
  // int a=23;
  // string b=std::to_string(a);
  // string c="56";
  // int d=int(c[0])+2;
  // cout<<d;
  // string e="243324";
  // cout<<e.size();
  Solution s;
  cout<<s.isHappy(2);
}