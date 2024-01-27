#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int expressiveWords(string s, vector<string>& words) {
      return 1;
    }
public:
    bool isStretchy(string s,string w){
      s+="3";
      w+="3";
      char pre;
      int count=1;;
      int pS=0;
      int pW=0;
      bool one=false;
       while(pS!=s.size()-1 || pW!=w.size()-1){
        cout<<"h";
        if(pre==s[pS]){
          count++;
          cout<<"incre to"<<count<<"at "<<pS;
        }
        // else{
        //   count=1;
        // }
        if(one){
          if(pre!=s[pS]){
            if(count<3){
              cout<<"too short at"<<pS<<","<<pW<<" with"<<count<<"/";
              return false;
            }
            if(s[pS]!=w[pW]){
               cout<<"different";
              return false;
            }
            count=0;
            one=false;
            pre=s[pS];
            if(pS<s.size()-1){
            pS++;
            }
            if(pW<w.size()-1){
            pW++;
            }
          }
          else{
            pre=s[pS];
            pS++;
          }
        }
        else{
          if(s[pS]==w[pW]){
            pre=s[pS];
          if(pS<s.size()-1){
          pS++;
          }
           if(pW<w.size()-1){
          pW++;
          }
          }
          else{ //start going one
            if(pre==s[pS]){
            cout<<"**";
            
            one=true;
            pre=s[pS];
            if(pS<s.size()-1){
            pS++;
            }
          }
          else{
            cout<<"nott at"<<pS<<","<<pW<<pre<<s[pS]<<"/" ;
            return false;
          }
          }
        }
       }
       if(one && count<3){
      return false;
        }
    return true;
    }
};
int main(){
Solution s;
cout<<s.isStretchy("abcd","abc");
}