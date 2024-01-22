#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        vector<int> Qr;
        vector<int> Qc;
        vector<vector<int>> mem {grid.size(),vector<int> (grid[0].size(),1)};
        //Qr.push_back(-1);
        //Qc.push_back(-1);
        int islands=0;
        for(int i=0;i<grid.size();i++){  // i is row 
            for(int j=0;j<grid[0].size();j++){      //j is column
                if(grid[i][j]=='1'){  //found land
                    if(mem[i][j]!=0){   //not visited
                        islands++;
                        enQ(i,j,Qr,Qc);
                        BFS(i,j,Qr,Qc,mem);
                    }
                }
            }
        }
        return islands;
    }


    public : void BFS(int row,int column,vector<int> & Qr,vector<int> & Qc,vector<vector<int>> & mem){
        if(row==-1 && column==-1){  //Base case
            return;
        }
        if(mem[row][column+1]!=0){            //not visited
            enQ(row,column+1,Qr,Qc);
            mem[row][column+1]=0;
        }
        if(mem[row+1][column]!=0){            //not visited
            enQ(row+1,column,Qr,Qc);
            mem[row+1][column]=0;
        }
        if(mem[row-1][column]!=0){            //not visited
            enQ(row-1,column,Qr,Qc);
            mem[row-1][column]=0;
        }
        if(mem[row][column-1]!=0){            //not visited
            enQ(row,column-1,Qr,Qc);
            mem[row][column-1]=0;
        }
        int newrow=deQr(Qr);
        int newcolumn=deQc(Qc);
        BFS(newrow,newcolumn,Qr,Qc,mem);
        
    }
    public : int deQr(vector<int> & Qr){
        if(Qr.empty()){
            return -1;
        }
        int a=Qr[0];
        Qr.erase(Qr.begin());
        return a;
    }
        public : int deQc(vector<int> & Qc){
        if(Qc.empty()){
            return -1;
        }
        int a=Qc[0];
        Qc.erase(Qc.begin());
        return a;
    }
    public : void enQ(int row,int column,vector<int> & Qr,vector<int> & Qc){
        Qr.push_back(row);
        Qc.push_back(column);
    }
};
int main(){
vector<vector<char>> a {{'1','1','1','1','0'},
  {'1','1','0','1','0'},
  {'1','1','0','0','0'},
  {'0','0','0','0','0'}};
  Solution s;
  cout<<s.numIslands(a);
  
}
