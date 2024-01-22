#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;
class Solution {
    public : 
    bool explore(int cur,vector<vector<int>> & nei,vector<int> visited,vector<bool> & taken){
       visited[cur]++;
        if(visited[cur]>1){  //visited
        
            return false;
        }
        if(taken[cur]){
            return true;
        }
        visited[cur]=true;
        taken[cur]=true;
        bool ans=true;
        for(int j=0;j<nei[cur].size();j++){
            ans=explore(nei[cur][j],nei,visited,taken);
            if(!ans){
                return false;
            }
        }
        return true;
    } 
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> neighbors(numCourses);
        for(int i=0;i<prerequisites.size();i++){
            neighbors[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }
        vector<bool> taken(numCourses);
        for(int j=0;j<numCourses;j++){
            vector<int> visited(numCourses,0);
            if(!explore(j,neighbors,visited,taken)){
                return false;
            }
        }
        return true;
    }
};
int main(){

}