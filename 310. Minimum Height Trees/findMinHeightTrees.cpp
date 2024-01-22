#include<iostream>
#include<vector>
#include <unordered_map>
#include <queue>
using namespace std;
class Solution {
    public : 
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        //Create Neighbour
        vector<vector<int>> nei(n);
        for(int i=0;i<n;i++){
            nei[edges[i][0]].push_back(edges[i][1]);
             nei[edges[i][1]].push_back(edges[i][0]);
        }
        vector<int> ans;
        int min=INT_MAX;
        for(int j=0;j<n;j++){
            vector<bool> visited(n,false);
            visited[j]=true;
            queue<int> Q;
            Q.push(j);
            vector<int> dep(n,0);
            dep[j]=0;
            int maxdep=0;
            while(!Q.empty()){
                int cur=Q.front();
                visited[cur]=true;
                for(int k=0;k<nei[cur].size();k++){
                    if(!visited[nei[cur][k]]){
                        Q.push(nei[cur][k]);
                        dep[nei[cur][k]]=dep[cur]+1;
                        if(dep[nei[cur][k]]>maxdep){
                            maxdep=dep[nei[cur][k]];
                        }
                    }
                }
                Q.pop();
            }
            if(min>=maxdep){
                ans.push_back(j);
            }
        }
        return ans;
    }
};
int main(){

}