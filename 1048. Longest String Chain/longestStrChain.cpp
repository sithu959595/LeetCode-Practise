#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;

class Solution {
    public : int recur(string s,unordered_map<string,int> & has){
        //cout<<s<<" enter*****"<<"\n";
        int max=0;
        if(s.length()==1){
            return 1;
        }
        for(int i=0;i<s.length();i++){
            int a=0;
            string temp=s;
            string ss=s.erase(i,1);
            //cout<<ss<<" from "<<temp<<" after removing "<<i<<"\n";
            if(has.find(ss)!=has.end()){   //it is in the given list
                if(has[ss]==-1){    // it has never been processed
                //cout<<"hi";
                    a=recur(ss,has);
                }
                else{
                    //cout<<"^^^^^^^hit for "<<ss<<" and the data is "<<has[ss]<<"\n";
                    //has[temp]=has[ss]+1;
                    //return has[ss]+1;
                    a=has[ss];
                }
            }
            s=temp;
            if(a>max){
                max=a;
            }
        }
        has[s]=max+1;
        return max+1;
    }
public:
    int longestStrChain(vector<string>& words) {
        unordered_map<string,int> has;
       for(int j=0;j<words.size();j++){
        
            has[words[j]]=-1;
       }
       int re=0;
       for(int i=0;i<words.size();i++){
       
        int tem=recur(words[i],has);
        if(tem>re){
            
            re=tem;
        }
       }
       return re;
    }
};
int main(){
    vector<string> ab{"a","ab","ac","bd","abc","abd","abdd"};
    Solution s;
    cout<<s.longestStrChain(ab);
  
}
