#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
       int oP=0;
       int tP=0;
       vector<int> temp;
       while(oP<=arr.size()){
          temp.push_back(arr[oP]);
          if(temp[tP]!=0){ //not zero
              //replace
              arr[oP]=temp[tP];
              //increace ori pointer
              oP++;
              //increase temp pointer
              tP++;
          }
          else{ //zero
            //replace with zero
            arr[oP]=0;
            //increase ori pointer
            if(oP<arr.size()-1)
            { oP++;
            //save ori item
            temp.push_back(arr[oP]);
            //replace with zero
            arr[oP]=0;
            }
            //increace ori pointer
            oP++;
            //increase temp pointer
            tP++;
          }
       } 
    }
};
int main(){
  vector<int> in{1,0,2,3,0,4,5,0,1,2,3};
Solution s;
s.duplicateZeros(in);
for(int i=0;i<in.size();i++){

cout<<in[i];
}
}