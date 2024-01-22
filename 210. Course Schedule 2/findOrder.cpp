#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;
class Solution {
    public : 
    bool explore(int cur,vector<vector<int>> & nei,vector<int> visited,vector<bool> & taken,vector<int> & order){
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
            ans=explore(nei[cur][j],nei,visited,taken,order);
            if(!ans){
                return false;
            }
        }
        order.push_back(cur);
        return true;
    } 
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> neighbors(numCourses);
        for(int i=0;i<prerequisites.size();i++){
            neighbors[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }
        vector<bool> taken(numCourses);
        vector<int> order;
        for(int j=0;j<numCourses;j++){
            vector<int> visited(numCourses,0);
            if(!explore(j,neighbors,visited,taken,order)){
                order.clear();
                return order;
            }
        }
        vector<int> norder;
        for(int k=order.size()-1;k>=0;k--){
            norder.push_back(order[k]);
        }
        return norder;
    }
};
int main(){

}