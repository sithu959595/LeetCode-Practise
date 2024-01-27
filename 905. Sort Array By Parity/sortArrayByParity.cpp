#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
      int left=0;
      int right=nums.size()-1;
      bool fEven=false;
      bool fOdd=false;
      vector<int> result;
      cout<<left<<","<<right<<"/";
      while(left<right){
        cout<<left<<","<<right<<"/";
        if(nums[left]%2!=0){ //left is odd
          fOdd=true;
        }
        else{
          left++;
        }

        if(nums[right]%2==0){ //right is even
          fEven=true;
        }
        else{
          right--;
        }

        //switch if neccessary
        if(fEven && fOdd){
          int temp=nums[left];
          nums[left]=nums[right];
          nums[right]=temp;
          fOdd=false;
          fEven=false;
          left++;
          right--;
        }
      }
      
      return nums;
        
    }
};
int main(){
Solution s;
vector<int> in{1,5,3,7,3,2,5,6,8};
vector<int> re=s.sortArrayByParity(in);
cout<<"answer";
for(int i=0;i<re.size();i++){
  cout<<re[i]<<"-";
}
}