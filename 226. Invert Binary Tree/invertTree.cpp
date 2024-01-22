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
    void explore(TreeNode* curo,TreeNode* curn){
       
        curn->val=curo->val;
        if(curo->left!=nullptr){
            TreeNode* nNode1=new TreeNode();
            curn->right=nNode1;
            explore(curo->left,curn->right);
        }
        if(curo->right!=nullptr){
            TreeNode* nNode2=new TreeNode();
            curn->left=nNode2;
            explore(curo->right,curn->left);
        }
    }
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root==nullptr){
            return root;
        }
        TreeNode* n=new TreeNode();
        explore(root,n); 
        return n;
    }
};
int main(){

}