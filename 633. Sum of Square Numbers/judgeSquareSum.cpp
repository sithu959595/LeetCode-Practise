#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    bool judgeSquareSum(int c) {
      long long fr=c;
      while(pow(fr,2)>c){
        // cout<<"higrf";
        if(fr%2==0){
          fr=fr/2;
          // cout<<fr;
        }
        else{
          fr=(fr+1)/2;
          // cout<<fr;
        }
      }
      
      // cout<<"fr is "<<fr;
      while(fr!=-1){
        int end=(c-(fr*fr));
        int square=squ(0,end,end);
        if(square>-1){
          return true;
        }
        else{
          fr=fr-1;
        }
      }
        return false;
    }
public:
    long long squ(long long start,long long end,int give) {
      long long mid=0;
      if(start==end && (start*start)==give){
        return start;
      }
      if(start>end){
        return -1;
      }
      if((end-start)%2==0){
      mid=(end-start)/2+start;
      }
      else{
         mid=(end-start)/2+start+1;
      }
      if((mid*mid)>give){ //left part
        return squ(start,mid-1,give);
      }
      else if((mid*mid)<give){
        return squ(mid+1,end,give);
      }
      else{
        return mid;
      }
        return 1;
    }
    
};
int main(){
  Solution s;
  // cout<<s.squ(0,25,25);
  // cout<<"dfafs";
  int ans=s.judgeSquareSum(10000000);
  cout<<"answer="<<ans;
  // if(pow(4,2)>=4){
    // cout<<"enter";
  // }
}