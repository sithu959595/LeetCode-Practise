#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,char> hash={{')','('},{']','['},{'}','{'}};
        bool result=true;
        char r;
        vector<char> que;
        for(int i=0;i<s.length();i++){
            if(s[i]==')' || s[i]==']' || s[i]=='}'){
                if(que.empty()){result=false;
                    break;}
                if(que.back()!=hash[s[i]]){
                    result=false;
                    break;
                }
                else{
                    que.pop_back();
                }
            }
            else{
                que.push_back(s[i]);
            }
        }
        if(!que.empty()){
            result=false;
        }
        return result;
    }
};
int main(){
    Solution s;
    string ss="]";
    if(s.isValid(ss))
    {
        cout<<"true";
        
    }
    else{
        cout<<"false";
    }
}