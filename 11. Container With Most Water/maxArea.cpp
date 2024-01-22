#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int max=-1;
        while(left<right){
          int cur=0;
          if(height[left]<height[right]){
            cur=height[left]*(right-left);
            left++;
          }
          else if(height[right]<height[left]){
            cur=height[right]*(right-left);
            right--;
          }
          else{
            cur=height[right]*(right-left);
            right--;
            left++;
          }
          if(cur>max){
            max=cur;
          }
        }
        return max;
    }
};
int main(){
  cout<<"hello**";
  vector<int> test;
  test.push_back(1);
  test.push_back(2);
  test.push_back(3);
  Solution s;
  cout<<s.maxArea(test);
}