#include<iostream>
#include<vector>
#include <unordered_map>
#include <queue>
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
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        q.push(root);
        unordered_map<TreeNode*,int> hash;
        hash[root]=0;
        while(!q.empty()){
            TreeNode* cur=q.front();
            q.pop();
            if((hash[cur]%2)==0){  //lr
                q.push(cur->right);
                q.push(cur->left);
                hash[cur->left]=hash[cur]+1;
                hash[cur->right]=hash[cur]+1;
            }
            else{  //rl
                q.push(cur->left);
                q.push(cur->right);
                hash[cur->right]=hash[cur]+1;
                hash[cur->left]=hash[cur]+1;
            }
            if(hash[cur]=>ans.size()){
                vector<int> temp;
                temp.push_front(cur->val);
                ans.push_back(temp);
            }
            else{
                ans[hash[cur]].push_front(cur->val);
            }
        }
return ans;
        
    }
};
int main(){

}