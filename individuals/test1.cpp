#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;
struct ListNode {
      int val;
      ListNode * next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
    void recur(vector<char>& s1,int ind){
        if(ind==s1.size()){
            cout<<"Hi"<<ind;
            return;
        }
        else{
            cout<<"Hi"<<ind;
            recur(s1,ind+1);
            if(ind<s1.size()/2){
                return;
            }
            char temp=s1[s1.size()-ind-1];
            s1[s1.size()-ind-1]=s1[ind];
            s1[ind]=temp;
        }
    }
    void pas(unordered_map<string,int> & has){
        cout<<"The result is "<<has["aa"]<<"---";
        has["bb"]=999;
    }
int main(){
vector<char> a{'t','r','a'};
recur(a,0); 
/*
char temp=a[a.size()-2-1];
            a[a.size()-2-1]=a[2];
            a[2]=temp;
            */
  cout<<a[0];
  unordered_map<string,int> ha;
  ha["aa"]=1000000;
  pas(ha);
  cout<<"after adding "<<ha["bb"]<<"++";
  string s="abc";
  cout<<"The result is "<<s.erase(2,1)<<"\n";
  vector<vector<int>> abb(3,vector<int> {1,2,3,4,5});
  abb[0].erase(abb[0].begin());
  cout<<"vector size is "<<abb[0].size();
  pair<int,char> abb1;
  abb1.first=9;
  abb1.second='o';
  cout<<abb1.second;
  
}
