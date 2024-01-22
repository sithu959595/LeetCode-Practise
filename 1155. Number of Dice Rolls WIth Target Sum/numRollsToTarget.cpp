#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;
class Solution {
    public : int recur(int n,int k,int target, int o,int& count){
        int result=0;
        if(n==0){
            return 0;
        }
        for(int i=1;i<=k;i++){
            cout<<"hi";
            result=i+recur(n-1,k,target,o,count);
            if(result>target)
            break;
            if(n==0){
                if(result==target){
                    count++;
                }
            }
            return result;
        }
        return result;
    }
public:
    int numRollsToTarget(int n, int k, int target) {
        int count=0;
        int a=recur(n,k,target,n,count);
        return count;
    }
};
int main(){

  Solution s;
  cout<<s.numRollsToTarget(2,6,7);
  }
