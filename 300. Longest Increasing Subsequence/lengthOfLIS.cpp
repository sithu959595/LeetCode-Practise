#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> DP(nums.size(),0);
        DP[0]=1;
        int max=0;
        int maxx=1;
        for(int i=1;i<nums.size();i++){
            max=DP[i];
            cout<<"HIII";
            for(int j=i-1;j>=0;j--){
                
                if(nums[i]>nums[j] && DP[j]>max){
                    //cout<<"update max with "<<DP[j]<<" since "<<DP[j]<<" is grear than "<<max;

                    max=DP[j];
                    //cout<<" Now max is "<<max;
                    //cout<<"| j is  "<<j<<" | i is "<<i<<"\n";
                }
            }
            //cout<<"***"<<max;
            DP[i]=max+1;
            //cout<<"Solution is for "<<i<<" is "<<DP[i]<<"\n"; 
            if(maxx<DP[i]){
                //cout<<"Maxx is for "<<i<<" is "<<maxx<<"\n"; 
                maxx=DP[i];
            }
        }
        return maxx;
    }
};
int main(){
   vector<int> a {0};
   Solution s;
   cout<<s.lengthOfLIS(a);

}