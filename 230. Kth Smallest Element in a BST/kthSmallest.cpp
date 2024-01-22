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
    public : void explore(TreeNode * cur,int k,int & n,int & re){
        if(cur==nullptr){
            return;
        }
        if(cur->left ==nullptr && cur->right == nullptr){
            if(k!=n){
                re=cur->val;
                n++;
                return;
            }
        }
        explore(cur->left,k,n,re);
        if(n!=k){
            re=cur->val;
            n++;
        }
        explore(cur->right,k,n,re);
        
    }
public:
    int kthSmallest(TreeNode* root, int k) {
        int result=0;
        int n=0;
        explore(root,k,n,result);
        return result;
    }
};
int main(){

}