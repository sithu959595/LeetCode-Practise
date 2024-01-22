#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;
class Solution {
    int count=0;
    public : 
    void explore(int sum,int cur,vector<int> & nums, int target){
        if(cur>=nums.size()){
            if(sum==target){
                count++;
                return;
            }
        }
        int sump=0;
        sump=sum+nums[cur];
        explore(sump,cur+1,nums,target);
        int summ=0;
        summ=sum-nums[cur];
        explore(summ,cur+1,nums,target);
    }
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum=0;
        explore(sum,0,nums,target);
        return count;
    }
};
int main(){

}