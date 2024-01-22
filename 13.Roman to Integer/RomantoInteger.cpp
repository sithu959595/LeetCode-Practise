#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;
class Solution{
public :
int RtoI(string s){
    int result=0;
    unordered_map<char,int> hash={ { 'I' , 1 },
                                   { 'V' , 5 },
                                   { 'X' , 10 },
                                   { 'L' , 50 },
                                   { 'C' , 100 },
                                   { 'D' , 500 },
                                   { 'M' , 1000 } };
    for(int i=0;i<s.length();i++){
        if(hash[s[i]]<hash[s[i+1]]){
            result+=hash[s[i+1]]-hash[s[i]];
            i++;
        }
        else{
            result+=hash[s[i]];
        }
    }
    return result;
}

};
int main(){
Solution ans;
cout<<ans.RtoI("MCMXCIV");
}