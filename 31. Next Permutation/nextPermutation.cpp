#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int max=-1;
        int i=nums.size()-1;
        // cout<<nums[i]<<','<<max<<"//"<<i;
        while(i>=0){
            cout<<"while";
        if(nums[i]>=max){
            cout<<"first";
            max=nums[i];
            // swap(nums[nums.size()-1],nums[i]);
            nums.push_back(nums[i]);
            nums.erase(nums.begin()+i);
            i--;
        }
        else{
            cout<<"second"<<i;
            for(int j=i+1;j<nums.size();j++){
                if(nums[j]>nums[i]){
                    cout<<"found"<<j<<"*";
                    swap(nums[j],nums[i]);
            //         nums.push_back(nums[i]);
            // nums.erase(nums.begin()+i)
                    return;
                }
            }
        }
        }
        
    }
};
int main(){
    // cout<<"hello";
    vector<int> te;
    te.push_back(1);
    te.push_back(4);
    te.push_back(3);
    te.push_back(2);
   Solution s;
   s.nextPermutation(te);
    for(int i=0;i<te.size();i++){
        cout<<te[i]<<",";
    }
}