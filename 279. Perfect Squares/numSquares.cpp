#include<iostream>
#include<vector>
#include <unordered_map>
#include<cmath>
using namespace std;
class Solution {
    public : bool isPS(int m){
        for(int i=0;i<=m;i++){
            if((i*i)==m){
                return true;
            }
        }
        return false;
    }
    
public:
    int numSquares(int n) {
        vector<int> DP(n+1,0);
        for(int i=0;i<=n;i++){
            int min=0;
            int re=0;
            if(isPS(i)){
                DP[i]=1;
                cout<<"****";
                cout<<"DP is updated with "<<DP[i]<<" for i="<<i<<"\n";
            }
            else{
                int j=1;
                int sj=j*j;
                
                while(sj<i){
                    re=DP[i-sj];
                    if(min==0){
                        min=re;
                        cout<<"&&&"<<min;
                    }
                    else if(min>re){
                        min=re;
                    }
                    j=j+1;
                    sj=j*j;
                    cout<<"sj is "<<sj<<" for j , i "<<j<<"||"<<i<<"\n";
                }
                cout<<"min is "<<min<<" for i= "<<i<<" before putting into DP \n";
                DP[i]=min+1;
                cout<<"DP is updated with "<<DP[i]<<" for i="<<i<<"\n";
            }
        }
        return *(DP.end()-1);
    }
    
};
int main(){
Solution s;
cout<<s.numSquares(12);
}