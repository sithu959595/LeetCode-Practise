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
    void explore(TreeNode* cur,TreeNode* p, TreeNode* q,bool & pfound, bool  & qfound,TreeNode * waiting,TreeNode ** ans){
        if(cur==nullptr){
            return;
        }
        if((cur->val)==(p->val)){
            pfound=true;
        }
        if((cur->val)==(q->val)){
            qfound=true;
        }
        if(pfound && qfound){
            return;
        }
        if(pfound || qfound){
            if(waiting==nullptr){
                waiting=cur;
            }
        }
        explore(cur->left,p,q,pfound,qfound,waiting,ans);
        if(pfound && qfound){
            if(cur==waiting){
                *ans=cur;
            }
            return;
        }
        

         if(pfound || qfound){
            if(waiting==nullptr){
                waiting=cur;
            }
        }
        explore(cur->right,p,q,pfound,qfound,waiting,ans);
        if(pfound && qfound){
            if(cur==waiting){
                *ans=cur;
            }
            return;
        }
        waiting=nullptr;
    }
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* a=nullptr;
        TreeNode** ans=&(a);
        TreeNode* waiting=nullptr;
        bool pfound=false;
        bool qfound=false;
        explore(root,p,q,pfound,qfound,waiting,ans);
        return *ans;
    }
};


//return version(correct answer)
/*
class Solution {
    public :
    TreeNode* explore(TreeNode* cur,TreeNode* p, TreeNode* q,bool & pfound, bool & qfound,TreeNode * waiting){
        if(cur==nullptr){
            cout<<"hi";
            return nullptr;
        }
        if((cur->val)==(p->val)){
            cout<<"found"<<p->val;
            pfound=true;
        }
        if((cur->val)==(q->val)){
            cout<<"found"<<q->val;
            qfound=true;
        }
        if(pfound && qfound){
            return nullptr;
        }
        if(pfound || qfound){
            if(waiting==nullptr){
                cout<<"waitl"<<cur->val;
                waiting=cur;
            }
        }
        TreeNode* ans;
         ans=explore(cur->left,p,q,pfound,qfound,waiting);
        if(pfound && qfound){
            if(cur==waiting){
                cout<<"*ans"<<cur->val;
                return cur;
            }
            return ans;
        }
        

         if(pfound || qfound){
            if(waiting==nullptr){
                cout<<"waitr"<<cur->val;
                waiting=cur;
            }
        }
        ans=explore(cur->right,p,q,pfound,qfound,waiting);
        if(pfound && qfound){
            if(cur==waiting){
                cout<<"*ans"<<cur->val;
                return cur;
            }
            return ans;
        }
        waiting=nullptr;
        return ans;
    }
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* ans;
        TreeNode* waiting=nullptr;
        bool pfound=false;
        bool qfound=false;
        
        return explore(root,p,q,pfound,qfound,waiting);
    }
};
Console

*/
int main(){

}