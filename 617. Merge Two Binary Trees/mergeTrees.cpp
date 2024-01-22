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
    public : void explore(TreeNode* r1, TreeNode* r2,TreeNode** f){
        TreeNode* nr1;
        TreeNode* nr2;
        if(r1==nullptr && r2==nullptr){
            *f=nullptr;
            return;
        }
        else if(r1==nullptr){
            (*f)->val=r2->val;
            nr1=nullptr;
        }
        else if(r2==nullptr){
            (*f)->val=r1->val;
            nr2=nullptr;
        }
        else{
            (*f)->val=r1->val+r2->val;
           // nr1=r1->left;

        }
        TreeNode* nextl=new TreeNode();
        (*f)->left=nextl;
        if(r1==nullptr){
        explore(nullptr,r2->left,&((*f)->left));
        }
        else if(r2==nullptr){
        explore(r1->left,nullptr,&((*f)->left));
        }
        else{
            explore(r1->left,r2->left,&((*f)->left));
        }

         TreeNode* nextr=new TreeNode();
        (*f)->right=nextr;
        if(r1==nullptr){
        explore(nullptr,r2->right,&((*f)->right));
        }
        else if(r2==nullptr){
        explore(r1->right,nullptr,&((*f)->right));
        }
        else{
            explore(r1->right,r2->right,&((*f)->right));
        }

    }
public:
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        TreeNode* f=new TreeNode();
        explore(root1,root2,&f);
        return f;
    }
};

using namespace std;
int main(){
TreeNode* t1=new TreeNode();
t1->val=2;

TreeNode* t2=new TreeNode();
t1->left=t2;
t2->val=8;
t2=nullptr;

cout<<t1->left;
}