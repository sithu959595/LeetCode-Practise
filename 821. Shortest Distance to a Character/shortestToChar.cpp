#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> left;
        vector<int> right;
        vector<int> result;
        bool found=false;
        int count=0;
        for(int i=0;i<s.size();i++){
          if(s[i]==c){
            count=0;
            found=true;
            left.push_back(count);
            count++;
          }
          else if(found){
            left.push_back(count);
            count++;
          }
          else{
            left.push_back(-1);
          }
        }
        count=0;
        found=false;
          for(int i=s.size()-1;i>=0;i--){
          if(s[i]==c){
            count=0;
            found=true;
            right.push_back(count);
            count++;
          }
          else if(found){
            right.push_back(count);
            count++;
          }
          else{
            right.push_back(-1);
          }
        }
        int leftPointer=0;
        int rightPointer=s.size()-1;
        for(int j=0;j<s.size();j++){
          int leftP=leftPointer+j;
          int rightP=rightPointer-j;
          if(left[leftP]==-1){
            result.push_back(right[rightP]);
          }
          else if(right[rightP]==-1){
            result.push_back(left[leftP]);
          }
          else if(left[leftP]<=right[rightP]){
            result.push_back(left[leftP]);
          }
          else if(right[rightP]<left[leftP]){
            result.push_back(right[rightP]);
          }
        }
      return result;
        
    }
};
int main(){
Solution s;
vector<int> so=s.shortestToChar("aaab",'b');
cout<<so[0];
}