#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        
        vector<int> brea;
        bool ans;
        for(int i=0;i<s.size();i++){
            ans=false;
            string sub1=s.substr(0,i+1);

            if(std::find(wordDict.begin(),wordDict.end(),sub1)!=wordDict.end()){
                //cout<<"Pushing* "<<i<<"\n";
                 brea.push_back(i);
                ans=ans||true;
            }
            
            for(int j=0;j<brea.size();j++){
                
                string sub=s.substr(brea[j]+1,i-brea[j]);
                //cout<<"#"<<i<<sub<<"#";
                if(std::find(wordDict.begin(),wordDict.end(),sub)!=wordDict.end()){
                    //cout<<"hi";
                    ans=ans||true;
                    break;
                }
                
            }
            if(ans){
                    //cout<<"Pushing "<<i<<"\n";
                    brea.push_back(i);
                }
        }
        return ans;
    }
};
int main(){
    vector<string> a{"cats","dog","sand","and","cat"};
    Solution s;
    cout<<s.wordBreak("catsandog",a);
}