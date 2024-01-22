#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    int countVowelStrings(int n) {
        vector<int> DP1(6,0);
        vector<int> DP2(6,0);
        DP1={1,1,1,1,1};
        //Fill DP
        for(int j=2;j<=n+1;j++){  //for each position of n
            for(int i=0;i<5;i++){   //for calculating number of strings for each vowel
                for(int k=0;k<=i;k++){
                    DP2[i]=DP1[i-k]+DP2[i];
                }
            }
            DP1=DP2;
            DP2={0,0,0,0,0,0};
        }
        return DP1[4];
    }
};
int main(){
    Solution s;
    cout<<s.countVowelStrings(33);
  
}