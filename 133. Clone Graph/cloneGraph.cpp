#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;
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
}
