#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;
class test1{
    string x="global";

public : void prina(){
string x="prina";
prinb();
}
public : void prinb(){
    //string x="prinb";
    cout<<x;
}
};
 struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };
class Node {
public:
    int val;
    vector<Node*> neighbors;

    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
    
};


class Solution {
    public : void explore(Node* n,unordered_map<int,Node *> & hash, Node * clone){
        hash[n->val]=clone;  //make it visited
        if((n->neighbors).empty()){
            return;
        }
        vector<Node *> nei=n->neighbors;
        for(int i=0;i<nei.size();i++){
            {cout<<nei[i]->val;
                if(hash.find(nei[i]->val)==hash.end()){   //not visited
                   // (clone->val)=nei[i]->val;
                   Node * nnn=new Node(nei[i]->val); //creating new node for next step
                   //(nnn->neighbors).push_back(clone);  //putting current node to the next node
                    (clone->neighbors).push_back(nnn);  //
                    explore(nei[i],hash,nnn);
                }
                else{   
                    cout<<"v";
                    Node * nn=hash[nei[i]->val];  // getting address
                    cout<<"adding"<<clone->val<<"/";
                    (clone->neighbors).push_back(nn);
                    // Node * nnn=new Node(nei[i]->val);
                    //(clone->neighbors).push_back(nnn);
                }
            }
        }
    }
public:
    Node* cloneGraph(Node* node) {
        if(node==nullptr){
            return nullptr;
        }
        unordered_map<int,Node *> hash;
        Node * clone=new Node(node->val);
        explore(node,hash,clone);
        return clone;
    }
};


class te{
    public : void change(int & a){
        a=10;
    }
};
class t{
    public : void check(){
        int a=1;
        if(true){
            int a=2;
            cout<<"\n"<<"a is "<<a;
        }
        cout<<"\n"<<"a out of scope is "<<a;
    }
};

int main(){
    /*
Node * a=new Node();
vector<int> v {6,7,8,9};
a->neighbors=v;
cout<<(a->neighbors)[3];
 
 te t;
 int b=5;
 t.change(b);
  //cout<<b;
  int d=2;
  int& c=d;
  d=7;
  int * pc=&c;
  cout<<&d<<"\n";
  cout<<&c<<"\n";
  cout<<pc;

  */
  int a=112;
  int b=50;
  string s=std::to_string(a)+std::to_string(b);
  cout<<s;
  TreeNode* t1=new TreeNode();
  TreeNode* t2=new TreeNode();
  TreeNode** t3=&(t1->left);
  TreeNode** t4=t3;
  t1->left=t2;
  cout<<"\n"<<"               (t1->left) is "<<(t1->left);
  cout<<"\n"<<"              &(t1->left) is "<<&(t1->left);
  cout<<"\n"<<"TreeNode** t3=&(t1->left) is "<<t3;
  *t4=nullptr;
  cout<<"\n"<<"After t4=t3 and t4=nullptr, t1->left is "<<t1->left;
  t1->left=nullptr;
  cout<<"\n"<<t1->left;
  vector<int> te {1,2,3};
  unordered_map<int,vector<int>> hash;
  hash[7]=te;
  hash[7].push_back(8);
  cout<<hash[7][3];
  cout<<"t1 "<<t1<<"\n";
  cout<<" &(*t1)"<<&(*t1);
  bool aa=true;
  bool aa1=false;
  aa1=6564;
  if(aa1){
  cout<<"bool is "<<(aa1);
  }
  vector<string> v(3,"ab");
  vector<string>::iterator ii=v.end();
  cout<<"\n"<<"It is "<<*(ii-1);
  vector<int> vec {2,3,4,5};
  vec.erase(vec.begin());
  vec.erase(vec.begin());
  
  cout<<"\nStarting is "<<vec[0];

t ch;
ch.check();

int arr1[]={3,4,5};
int* arr5=arr1;
arr5[1]=10;
cout<<"The value is "<<arr1[1];
test1 * testttt=new test1();
testttt->prina();

int lo=3;
for(int lo=0;lo<14;lo++){

}
cout<<"\n"<<"the new lo is "<<lo;
}

