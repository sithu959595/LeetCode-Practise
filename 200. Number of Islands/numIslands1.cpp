#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;
class Solution {
    
    public :
    void traverse(vector<vector<char>>& grid, int m,int n,vector<vector<bool>> & visited){
        if(m<grid.size() || n<grid[0].size()){
        visited[m][n]=true;
        if(grid[m][n+1]!='0'){
            if(!visited[m][n+1]){
                traverse(grid,m,n+1,visited);
            }
        }
        if(grid[m+1][n]!='0'){
            if(!visited[m+1][n]){
                traverse(grid,m+1,n,visited);
            }
        }
        }
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        vector<bool> col(grid[0].size(),false);
    vector<vector<bool>> visited(grid.size(),col);
        int islands=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(!visited[i][j]){
                    islands++;
                    traverse(grid,i,j,visited);
                }
            }
        }
        return islands;
    }
};
int main(){

}