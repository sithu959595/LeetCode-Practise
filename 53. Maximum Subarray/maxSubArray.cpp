#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int min=0;
        int max=1;
        vector<int> DP;
        if(nums.size()<2){
            return nums[0];
        }
        DP.push_back(0);
        for(int i=0;i<nums.size();i++){
            DP.push_back(nums[i]+DP[i]);
            cout<<"\n"<<nums[i]<<"+"<<DP[i]<<"is"<<DP[DP.size()-1]<<"//";
            if(DP[i+1]>DP[max]){
                max=i+1;
                cout<<DP[i+1]<<"is bigger than "<<DP[i]<<" SO";
                cout<<"update max"<<DP[max]<<"\n";
            }
        }
        if(DP[max]<0){
                for(int i=max+1;i<DP.size();i++){
                    cout<<"Rcompare"<<DP[i]-DP[max]<<"and"<<DP[max]<<"\n";
                    if(DP[i]-DP[max]>DP[max]){
                cout<<"update rmin"<<DP[i]<<"\n";
                min=i;
            }
                }
                if(min==0){
                    return DP[max];
                }
                return (DP[min]-DP[max]);
            }

        else{
            for(int j=0;j<=max;j++){
            cout<<"compare"<<DP[j]<<"and"<<DP[min]<<"\n";
            
            if(DP[j]<=DP[min]){
                cout<<"update min"<<DP[j]<<"\n";
                min=j;
            }
            }
        //cout<<"max"<<DP[max]<<"min"<<DP[min]<<"//";
        return (DP[max]-DP[min]);
            }

    }
};
int main(){
  Solution s;
  //vector<int> a {-2,1,-3,4,-1,2,1,-5,4};
  vector<int> a {-                                 2,1};
  cout<<"answer is "<<s.maxSubArray(a);
}