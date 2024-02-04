#include<vector>
#include<iostream>
#include<unordered_map>
using namespace std;
class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
      unordered_map<int,int> map;
        for(int i=0;i<arr.size();i++){
          map[arr[i]]=i;
        }
        for(int j=0;j<arr.size();j++){
          int dou=arr[j]*2;
          if(map.find(dou)!=map.end()){
            if(map[dou]!=j){
              return true;
            }
          }
        }
        return false;
    }
};
int main(){
 vector<int> in{10,2,5,3};
 Solution s;
 cout<<(-4%2);
//  cout<<s.checkIfExist(in);
}