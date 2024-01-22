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
    vector<vector<int>> ans;
    public :
    void explore(TreeNode* cur, int target,vector<int> path,int sum){
        if(cur==nullptr){
            return;
        }
        if(sum+(cur->val)==target && cur->left==nullptr && cur->right==nullptr){
            path.push_back(cur->val);
            ans.push_back(path);
            return;
        }
        path.push_back(cur->val);
        sum=sum+(cur->val);
        explore(cur->left,target,path,sum);
        explore(cur->right,target,path,sum);
    }
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> path;
        explore(root,targetSum,path,0);
        return ans;
    }
};
int main(){

}