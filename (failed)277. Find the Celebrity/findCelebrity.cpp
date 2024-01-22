#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int findCelebrity(int n) {
        // vector<bool> rec(n,true);
     for(int i=0;i<n;i++){
        int fans=0;
        for(int j=0;j<n;j++){
        if(knows(j,i)){
          fans++;
        } //end of if
        else{
          break;
        }
       }  //end of inner for
       if(fans==n){
        return 1;
       }
  }  //end of for
  return -1;
    }  //endo f outer for
};
int main(){

}