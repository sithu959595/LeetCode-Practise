#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
      vector<int> sortedT=tokens;
      std::sort(sortedT.begin(),sortedT.begin()+sortedT.size());
      int left=0;
      int right=sortedT.size()-1;
      int score=0;
      while(left<=right){
        if(left==right){
          cout<<"equal";
          //get score if possilbe.Otherwise, stop
          if(power>=sortedT[left]){
            score++;
            return score;
          }
          return score;
        }
        if(power<sortedT[left]){ //low power
            //no way
            if(score==0){
              return score;
            }
            //get more power
            power+=sortedT[right];
            score--;
            right--;
        }
        else{ //enough pwoer to get a score
            cout<<"gain";
            score++;
            power-=sortedT[left];
            left++;
        }
      }
        return score;
    }
};
int main(){
  Solution s;
  vector<int> in{100};
  cout<<s.bagOfTokensScore(in,50);
  

}