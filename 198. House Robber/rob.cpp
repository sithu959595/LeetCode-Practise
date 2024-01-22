#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    int rob(vector<int>& nums) {
        int robbedroom=0;
        int a=nums[0];
        int oa=nums[0];
        int newrob=-1;
        bool robbed=true;
        for(int i=1;i<nums.size();i++){
            if(robbed){     //last room was robbed
                a=oa-nums[i-1]+nums[i];
                newrob=i-3;
                if((robbedroom+2)!=i-1){
                    cout<<"hi"<<robbedroom<<"\n";
                    a+=nums[i-2];
                    newrob--;
                }
                if(a>oa){
                    oa=a;
                    robbedroom=newrob;
                    robbed=true;
                }
                else{
                        robbed=false;
                }
            }
            else{
                robbed=true;
                oa=oa+nums[i];
                robbedroom=i-1;
            }
            cout<<oa<<" is for i="<<i<<"\n";
        }
        return oa;
        }
};
int main(){
Solution s;
vector<int> a{2,1,1,2};
cout<<s.rob(a);
  
}
