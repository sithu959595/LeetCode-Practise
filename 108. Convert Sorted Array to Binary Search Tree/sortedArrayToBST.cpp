#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;

  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
 
class Solution {
    public :
    void dc(TreeNode* cur,int low,int high,vector<int> & nums){
        int mid=(high+low)/2;
        if(low>high){
            return;
        }
        cur->val=nums[mid];
        TreeNode* nleft=new TreeNode();
        TreeNode* nright=new TreeNode();
        cur->left=nleft;
        cur->right=nright;
        dc(cur->left,low,mid-1,nums);
        dc(cur->right,mid+1,high,nums);

    }
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        TreeNode* cur=new TreeNode();
        dc(cur,0,nums.size()-1,nums);
        return cur;
        
    }
};
int main(){

}