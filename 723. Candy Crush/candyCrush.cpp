#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
    vector<vector<int>> candyCrush(vector<vector<int>>& board) {
      vector<vector<int>> inputV=board;
      bool change=true;
        vector<int> b(inputV[0].size(),0);
      vector<vector<int>> result(inputV.size(),b);
      
      while(change){
        // cout<<"again";
              change=false;
              vector<int> a(board[0].size(),-2);
              vector<vector<int>> inter(board.size(),a);

            
              for(int i=0;i<result.size();i++){
                 vector<int> b(inputV[0].size(),0);
                result[i]=b;
              }
              
        for(int i=0;i<inputV.size();i++){
          for(int j=0;j<inputV[0].size();j++){
            if(inputV[i][j]!=0){
              vector<vector<int>> cache;
              int cur=inputV[i][j];

              bool noUp=false;
              bool noDown=false;
              //for vertical. for i
              int vCount=1;
              int up=0;
              int down=0;
              if(i==0){
                //out of boundry
                
                noUp=true;
              }
              else{
                up=i-1;
              }
              
              if(i==inputV.size()-1){
                //out of boundry
                noDown=true;
              }
              else{
                down=i+1;
              }
          
              //for horizontal. for j
              int hCount=1;
              bool noLeft=false;
              bool noRight=false;
              int left=0;
              int right=0;

              if(j==0){
                //out of boundry
                noLeft=true;
              }
              else{
                left=j-1;
              }

              if(j==inputV[0].size()-1){
                noRight=true;
              }
              else{
                right=j+1;
              }
              /////////////////////////////////////////////////////////////////////////////////
              while(!(noUp && noDown)){//vertical
             
                //up
                if(inputV[up][j]==cur && !noUp){
                  vCount++;
                  vector<int> p{up,j};
                  cache.push_back(p);
                  if((up-1)>=0){
                    //safe to update up
                    up--;
                  }
                  else{
                    noUp=true;
                  }
                }
                else{
                  noUp=true;
                }

                

                //down
                if(inputV[down][j]==cur && !noDown){
                  vCount++;
                  vector<int> p{down,j};
                  cache.push_back(p);
                  if((down+1)<=inputV.size()-1){
                    //safe to update down
                    down++;
                  }
                  else{
                    noDown=true;
                  }
                }
                else{
                  noDown=true;
                }
               
              }
              if(vCount>=3){
                inter[i][j]=-1;
                for(int i=0;i<cache.size();i++){
                  int row=cache[i][0];
                  int col=cache[i][1];
                  // cout<<row<<','<<col<<"/ ";
                  inter[row][col]=-1;
                }
                // cout<<"*";
                vCount=1;
                cache.clear();
              }
              else{
                vCount=1;
                cache.clear();
              }
                      /////////////////////////////////////////////////////////////////////////////////
              //horixaontal
              while(!(noLeft && noRight)){//horizontal
                //lecft
                if(inputV[i][left]==cur && !noLeft){
                  
                  hCount++;
                  // cout<<i<<","<<j<<";";
                  // cout<<i<<","<<left<<"/ ";

                  vector<int> p{i,left};
                  cache.push_back(p);
                  if((left-1)>=0){
                    //safe to update left
                    left--;
                  }
                  else{
                    noLeft=true;
                  }
                }
                else{
                  noLeft=true;
                }

                //right
                if(inputV[i][right]==cur && !noRight){
                  hCount++;
                  vector<int> p{i,right};
                  cache.push_back(p);
                  if((right+1)<=(inputV[0].size()-1)){
                    //safe to update down
                    right++;
                    
                  }
                  else{
                    noRight=true;
                  }
                }
                else{
                  noRight=true;
                }
               
              }
              if(hCount>=3){
                inter[i][j]=-1;
                for(int i=0;i<cache.size();i++){
                  int row=cache[i][0];
                  int col=cache[i][1];
                  // cout<<row<<','<<col<<"/ ";
                  inter[row][col]=-1;
                }
                hCount=1;
                cache.clear();
              }
              else{
                hCount=1;
                cache.clear();
              }

              



          }
          }
        }
        //check inter
        
        
          for(int i=0;i<inputV[0].size();i++){
            int r=inputV.size()-1;
            for(int j=inputV.size()-1;j>=0;j--){
              if(inter[j][i]==-1){
                change=true;
                continue;
              }
              else{
                
                // cout<<"put "<<j<<","<<i<<"="<<inputV[j][i]<<" at "<<r<<","<<i<<"\n";
                result[r][i]=inputV[j][i];
                if((r-1)>=0)
                {r--;}
              }
            }
          }
        inputV=result;
        // return inter;
      }
        return result;
    }
};
int main(){
vector<vector<int>> in {{1,2,3,4,5},{3,3,3,3,7},{8,6,3,5,1}};
vector<vector<int>> in1 {{1,3,1},{2,3,2},{5,3,5}};
vector<vector<int>> in2{{110,5,112,113,114},{210,211,5,213,214},{310,311,3,313,314},{410,411,412,5,414},{5,1,512,3,3},{610,4,1,613,614},{710,1,2,713,714},{810,1,2,1,1},{1,1,2,2,2},{4,1,4,4,1014}};
vector<vector<int>> in3 {{0,0,0,0,5},{1,2,0,4,7},{8,6,0,5,1}};
Solution s;
vector<vector<int>> re=s.candyCrush(in2);
for(int i=0;i<re.size();i++){
  for(int j=0;j<re[0].size();j++){
    cout<<re[i][j]<<",";
  }
  cout<<"\n";
}
}