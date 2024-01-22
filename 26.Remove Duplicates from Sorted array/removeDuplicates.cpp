#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int com=nums[0];
        int po=1;
        int k=1;
        for(int i=1;i<nums.size();i++){
            if(com!=nums[i]){
                nums[po]=nums[i];
                
                com=nums[i];
                if(po!=i)
                nums[i]=999;
                po++;
                k++;
            }
            else{
                nums[i]=999;
                continue;
            }
        }
        return k;
    }
};
int main(){
   Solution s;
   int k;
   vector<int> a{0,0,1,1,1,2,2,3,3,4};
   k=s.removeDuplicates(a);
   cout<<"{";
   for(int i=0;i<10;i++){
    cout<<a[i];
    cout<<",";
   }
}