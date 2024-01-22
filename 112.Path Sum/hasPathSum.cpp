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
    public : bool explore(TreeNode * cur,int curval,int target){
        if(cur==nullptr){
            return false;
        }

        int nextval=curval+cur->val;
        
        if(cur->left==nullptr && cur->right==nullptr){   //base case which is a leaf
            if(nextval!=target){
                return false;
            }
            else{
                return true;
            }
        }
        if(targetSum<0){
            if(nextval)
        }
        if(nextval>=target){
            return false;
        }
        bool leftans=false;
        leftans=explore(cur->left,nextval,target);  //explore left
        if(leftans){    //if the path is found, stop searching
            return true;
        }
        bool rightans=false;
        rightans=explore(cur->right,nextval,target);  //explore right
        if(rightans){    //if the path is found, stop searching
            return true;
        }
        return (leftans || rightans); 

    }
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        return explore(root,0,targetSum);
    }
};
int main(){

}