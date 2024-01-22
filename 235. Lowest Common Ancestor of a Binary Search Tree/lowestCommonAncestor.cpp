#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;

 
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };
 
class Solution {
    public : 
    TreeNode* explore(TreeNode* cur, TreeNode* p, TreeNode* q){
        
        if((p->val)<=(cur->val) && (q->val)>=(cur->val)){
            cout<<"hi"<<p->val<<q->val;
            return cur;
        }
        if((p->val)<(cur->val) && (q->val)<(cur->val)){
            return explore(cur->left,p,q);
        }
        else if((p->val)>(cur->val) && (q->val)>(cur->val)){
             return explore(cur->right,p,q);
        }
        
        return cur;
    }
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* small=p;
        TreeNode* big=q;
        if((p->val)>(q->val)){
             small=q;
             big=p;
        }
        return explore(root,small,big);
    }
};
int main(){

}