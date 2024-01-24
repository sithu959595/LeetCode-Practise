#include<iostream>
using namespace std;
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int sPointer=0;
        int tPointer=0;
        while(sPointer<s.size() && tPointer<t.size()){
          if(s[sPointer]==t[tPointer]){
            sPointer++;
            tPointer++;
          }
          else{
            tPointer++;
          }
        }
        // cout<<sPointer;
        if(sPointer>=s.size()){
          return true;
        }
        return false;
    }
};
int main(){
Solution s;
cout<<s.isSubsequence("abc","ahgdc");
}