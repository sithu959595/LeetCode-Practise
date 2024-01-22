#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;
class Solution {
    vector<vector<int>> ans;
    public :
    void explore(vector<vector<int>>& heights,int row,int col,bool & paci,bool & atl,vector<vector<bool>> visited){
        if(row-1<0 || col-1<0){
            paci=true;
            //hash
            //vector<int> tem {row,col};
            //ans.push_back(tem);
            return;
        }
        if(row+1>heights.size() || col+1>heights[0].size()){
            atl=true;
            //hash
            //vector<int> tem1 {row,col};
            //ans.push_back(tem1);
            return;
        }
        /*
        if(heights[row-1][col]<heights[row][col] && heights[row+1][col]<heights[row][col] && heights[row][col+1]<heights[row][col] && heights[row][col-1]<heights[row][col]){
            return;
        }
        */
        visited[row][col]=true;
        if(heights[row-1][col]>=heights[row][col] && visited[row-1][col]){
            explore(heights,row-1,col,paci,atl,visited);
        }
        if(heights[row+1][col]>=heights[row][col] && visited[row+1][col]){
            explore(heights,row+1,col,paci,atl,visited);
        }
        if(heights[row][col+1]>=heights[row][col] && visited[row][col+1]){
            explore(heights,row,col+1,paci,atl,visited);
        }
        if(heights[row][col-1]>=heights[row][col] && visited[row][col-1]){
            explore(heights,row,col-1,paci,atl,visited);
        }
        
    }
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        vector<bool> v(heights[0].size(),false);
        vector<vector<bool>> visited(heights.size(),v);
        for(int i=0;i<heights.size();i++){
            for(int j=0;j<heights[0].size();j++){
                bool paci=false;
                bool atl=false;
                explore(heights,i,j,paci,atl,visited);
                if(paci&&atl){
                    vector<int> tem1 {i,j};
                    ans.push_back(tem1);
                }
            }
        }
        return ans;
        
    }
};
int main(){

}