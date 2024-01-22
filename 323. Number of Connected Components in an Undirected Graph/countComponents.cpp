#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;
class Solution {
    public :
    void explore(vector<bool> & visited,vector<vector<int>> nei,int cur){
        visited[cur]=true;
        for(int i=0;i<nei[cur].size();i++){
            if(!visited[nei[cur][i]]){
                explore(visited,nei,nei[cur][i]);
            }
        }
    }
    
public:
    int countComponents(int n, vector<vector<int>>& edges) {
        vector<bool> visited(n);
       vector<vector<int>> neighbors(n);
        int count=0;
        for(int i=0;i<edges.size();i++){
            neighbors[edges[i][0]].push_back(edges[i][1]);
             neighbors[edges[i][1]].push_back(edges[i][0]);
        }
        for(int j=0;j<n;j++){
            if(!visited[j]){
                count++;
                explore(visited,neighbors,j);
            }
        }
        return count;

    }
};
int main(){

}