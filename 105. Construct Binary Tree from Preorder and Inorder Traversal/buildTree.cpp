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
    void fill(TreeNode* cur,vector<int>& curp,vector<int> pin){
        if(pin.size()==1){
            cout<<"*";
            cur->val=curp[0];
            cout<<"pop(curp)"<<curp[0];
            curp.erase(curp.begin());
            return;
        }
        int index;
        bool found=false;
        for(int i=0;i<pin.size();i++){
            if(pin[i]==curp[0]){
                index=i;
                found=true;
                break;
            }
        }
        if(!found){
            cout<<"hi"<<curp[0]<<"in";
            for(int i=0;i<pin.size();i++){
                cout<<pin[i];
            }
            return;
        }
        else{
            vector<int> leftpar;
            vector<int> rightpar;
            cur->val=curp[0];
            for(int j=0;j<index;j++){
                leftpar.push_back(pin[j]);
            }
            for(int k=index+1;k<pin.size();k++){
                rightpar.push_back(pin[k]);
            }
             cout<<"pop(curp)"<<curp[0];
            curp.erase(curp.begin());
            TreeNode* nl=new TreeNode();
             TreeNode* nr=new TreeNode();
             
             
             if(!leftpar.empty()){
                 cur->left=nl;
             fill(cur->left,curp,leftpar);
             }
             if(!rightpar.empty()){
                 cout<<"right"<<rightpar[0];
                 cur->right=nr;
             fill(cur->right,curp,rightpar);
             }
        }
    }
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        TreeNode* ans=new TreeNode();
        fill(ans,preorder,inorder);
        return ans;
        
    }
};

  int main(){

  }