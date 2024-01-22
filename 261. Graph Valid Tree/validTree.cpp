#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;
class Solution {
    public : 
    bool explore(int n,vector<vector<int>>& edges,vector<vector<int>> & nei,int cur,vector<bool> & visited,unordered_map<string,bool> & hash){
       
        if(visited[cur]==true){
            return false;
        }
        visited[cur]=true; //mark as visit
        //string s=std::to_string(cur)+std::to_string(int)
       for(int j=0;j<nei[cur].size();j++){
        bool ans=true;
        string s=std::to_string(cur)+std::to_string(nei[cur][j]);
        string s1=std::to_string(nei[cur][j])+std::to_string(cur);
        if(hash.find(s)!=hash.end()){
            hash[s]=true;
            hash[s1]=true;
             
        ans=explore(n,edges,nei,nei[cur][j],visited,hash);
        }
       
        if(!ans){
            return false;   //if there is loop, stop exploring and go to the root
        }
       }
         return true;
    }
public:
    bool validTree(int n, vector<vector<int>>& edges) {
        if(edges.size()!=n-1){
            return false;
        }
       //create an array for neighbours
       int cur=0;
       int anc=0;
        vector<vector<int>> nei(n);
        unordered_map<string,bool> hash;
        for(int i=0;i<edges.size();i++){
            nei[edges[i][0]].push_back(edges[i][1]);
            nei[edges[i][1]].push_back(edges[i][0]);
            if(nei[i].size()!=0){
                anc=i;
                cur=nei[i][0];
            }
        }
        
        //create an arry for visit
        vector<bool> visited(n,false);
        return explore(n,edges,nei,cur,visited,hash);
        
    }
};

int main(){

}
