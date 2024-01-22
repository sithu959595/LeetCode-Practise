#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;
class Solution {
    
public:
    vector<int> diffWaysToCompute(string expression) {
        //vector<int> v(expression.size()+1);
        vector<vector<int>> DP(expression.size()+1);
        vector<bool> DPb(expression.size()+1,false);
        unordered_map<char, int> hh={{'0',0},{'1',1},
                                    {'2',2},{'3',3},
                                    {'4',4},{'5',5},
                                    {'6',6},{'7',7},
                                    {'8',8},{'9',9}};
    
    return seq(expression,0,expression.size()-1,DP,DPb);
    }  
    
     vector<int> seq(string s, int a,int b,vector<vector<int>>& DP,vector<bool>& DPb){
        
            if(DPb[a][b]==true){
                return DP[a][b];
            }
            if(s.size()==1){
            DP[a][b].push_back(hh[s]);
            DPb[a][b]==true;
            return DP[a][b];
            }
            for(int i=1;i<size();i+=2){
              
                DP[a][b].push_back(op(seq(s.substr(0,i),a,a+i-1),seq(s.substr(i+1,s.size()-i),a+i+1,b)),s[i]);
                DPb=true;
            }
        return DP[0];
    }
    vector<int> op(vector<int>& a,vector<int>& b,char ope){
        vector<int> re;
        for(int i=0;i<a.size();i++){
            for(int j=0;j<b.size();j++){
                if(ope=='+'){
                re.push_back(a[i]+b[j]);
                }
                else if(ope=='-'){
                re.push_back(a[i]-b[j]);
                }
                else if(ope=='*'){
                    re.push_back(a[i]*b[j]);
                }
            }
        }
        return re;
    }
};
int main(){

  
}