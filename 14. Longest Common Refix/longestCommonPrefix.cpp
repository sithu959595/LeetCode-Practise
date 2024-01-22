#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans;
        bool brak=false;
        string s=strs[0];
        for(int i=0;i<s.length();i++){
            char com=s[i];
            for(int j=1;j<strs.size();j++){
                if(strs[j][i]!=com){
                    brak=true;
                    break;
                }
            }
            if(brak){
                break;
            }
            else{
                ans=ans+com;
            }
        }
        return ans;
    }
};
int main(){
Solution an;
vector<string> sss{"dog","racecar","car"};
cout<<an.longestCommonPrefix(sss);
}