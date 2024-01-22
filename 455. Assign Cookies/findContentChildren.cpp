#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
      sort(g.begin(),g.end());
      sort(s.begin(),s.end());
      int content=0;
      int j=0;
      int i=0;
        // while(i<g.size()){
          // cout<<i;
          while(j<s.size() && i<g.size()){
            if(s[j]>=g[i]){ //find one
            // cout<<"/greed="<<i<<",size="<<j<<"/";
              content++;
              s[j]=-1;
              j++;
              i++;
            }
            else{
              j++;
            }
          }
          if(j==s.size()){
            return content;
          }
        // }
        return content;
    }
};
int main(){
vector<int> greed{1,2};
vector<int> size{1,1};
// cout<<greed[1];
Solution s;
cout<<s.findContentChildren(greed,size);
}