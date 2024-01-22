#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    int waysToMakeFair(vector<int>& nums) {
        int count=0;
        //Filling DP
        vector<int> DP(nums.size()+1);
        int DPE=0;
        int DPO=0;
        for(int i=0;i<nums.size();i+=2){
            DPE=DPE+nums[i];
            DP[i]=DPE;
            //cout<<DPE<<"\n";
        }
        for(int i=1;i<nums.size();i+=2){      
            DPO=DPO+nums[i];
            DP[i]=DPO;
            //cout<<DPO<<"\n";
        }
    //Removing element
    for(int i=0;i<nums.size();i++){
        int oddsum=0;
        int evensum=0;
        //for odd index
        if((i%2)!=0){
            //for odd sum
            
                int lefto=0;
                int righte=0;
                
                if(i>=2){
                    lefto=DP[i-2];
                }
                if(i>=1){
                    righte=DP[i-1];
                }
            oddsum=lefto+(DPE-righte);
            //for even sum
            int lefte=0;
            int righto=0;
            if(i>=1){
                lefte=DP[i-1];
            }
            righto=DP[i];
            evensum=lefte+(DPO-righto);
            if(oddsum==evensum){
                count++;
            }
        }
        else if(i%2==0){  //for even index
            //for odd sum
            int lefto=0;
            int righte=0;
            if(i>=1){
                lefto=DP[i-1];
            }
            righte=DP[i];
            oddsum=lefto+(DPE-righte);
            //for even sum
            int lefte=0;
            int righto=0;
            if(i>=2){
                lefte=DP[i-2];
            }
            if(i>=1){
                righto=DP[i-1];
            }
            evensum=lefte+(DPO-righto);
            if(oddsum==evensum){
                count++;
            }
        }
        
        
    }
        return count;
    }
};
int main(){
 vector<int> a {1,2,3};
 Solution s;
 cout<<s.waysToMakeFair(a);
}