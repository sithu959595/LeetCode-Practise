#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
      vector<vector<int>> flip;
        for(int i=0;i<image.size();i++){
          vector<int> cur;
          flip.push_back(cur);
          for(int j=image[i].size()-1;j>=0;j--){
            if(image[i][j]==1){
              flip[i].push_back(0);
            }
            else{
              flip[i].push_back(1);
            }
          }
        }
        return flip;
    }
};
int main(){
vector<vector<int>> a {{1,1,0},{1,0,1},{0,0,0}};
Solution s;
cout<<s.flipAndInvertImage(a);
}