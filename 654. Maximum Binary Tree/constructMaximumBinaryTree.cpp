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
    void buildTree(TreeNode* cur,vector<int>& nums,int start,int end){
        int bigv=nums[start];
        int big=start;
        int nstart;
        int nend;
        for(int i=start;i<=end;i++){
            if(nums[i]>bigv){
                big=i;
            }
        }
        cur->val=nums[big];
        nstart=start;
        nend=big-1;
        if(!(nstart>nend)){
            TreeNode* nt=new TreeNode();
            cur->left=nt;
            buildTree(nt,nums,nstart,nend);
        }
        nstart=big+1;
        nend=end;
        if(!(nstart>nend)){
            TreeNode* nt1=new TreeNode();
            cur->right=nt1;
            buildTree(nt1,nums,nstart,nend);
        }
    }
public:
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        TreeNode* nn=new TreeNode();
        buildTree(nn,nums,0,nums.size()-1);
        return nn;
    }
};
int main(){

}