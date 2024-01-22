#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };
  class Solution {
    public :
    void neighbours(unordered_map<int,vector<int>> & hash,TreeNode* cur){
        if(cur==nullptr){
            return;
        }
        int l;
        int r;
        if(cur->left!=nullptr){
            l=cur->left->val;
            hash[cur->val].push_back(l);
            hash[l].push_back(cur->val);
        }
        if(cur->right!=nullptr){
            r=cur->right->val;
            hash[cur->val].push_back(r);
            hash[r].push_back(cur->val);
        }
        neighbours(hash,cur->left);
        neighbours(hash,cur->right);
    }
    public :
    void explore(int cur, int k, int count, unordered_map<int,vector<int>> hash,unordered_map<int,bool> & visited,vector<int> & ans){
        if(visited.find(cur)!=visited.end()){
            return;
        }
        visited[cur]=true;
        if(count>k){
            return;
        }
        if(count==k){
            cout<<"pushing "<<cur<<" / ";
            ans.push_back(cur);
        }
        count++;
        for(int i=0;i<hash[cur].size();i++){
            explore(hash[cur][i],k,count,hash,visited, ans);
        }
        
    }
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<int,vector<int>> hash;
        neighbours(hash,root);
        vector<int> ans {};
        unordered_map<int,bool> visited;
        explore(target->val,k,0,hash,visited,ans);
        return ans;
    }
};
int main(){

}
