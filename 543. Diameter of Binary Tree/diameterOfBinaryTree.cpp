#include<iostream>
#include<vector>
#include <unordered_map>

  
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
 
class Solution {
    int max=0;
    public : int explore(TreeNode* cur){
        if(cur==nullptr){
            return 0;
        }
        if(cur->left==nullptr && cur->right==nullptr){
            return 1;
        }
        int ldep=explore(cur->left);
        int rdep=explore(cur->right);
        if((ldep+rdep)>max){
            max=ldep+rdep;
        }
        return std::max(ldep,rdep)+1;
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int depth=explore(root);
        return max;
    }
};
int main(){

}