#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;
// class Solution {
// public:
//     int findRadius(vector<int>& houses, vector<int>& heaters) {
//       int min=1;
//       int he=0;
//         for(int i=0;i<houses.size();i++){
          
//           if(
//             houses[i]>(heaters[he]+min) || houses[i]<(heaters[he]-min)
//           ){  //not warmed by cur
//           if(he==heaters.size()-1){ //no maore heater nad not warmed
//                 if(houses[i]>heaters[he])
//                 {min=houses[i]-heaters[he];}
//                 else{
//                   min=heaters[he]-houses[i];
//                 }
//                 continue;
//              }
//             if(houses[i]>=(houses[he+1]-min)){ //warmed by next
//               he++;
//               continue;
//             }
//             else{
              
//               if((houses[i]-heaters[he])>(heaters[he+1]-houses[i])){
//                 min=houses[he+1]-houses[i];
//                 he++;
//                 continue;
//               }
//               else{
//                 min=houses[i]-heaters[he];
//                 continue;
//               }
//             }
//           }
//         }
//         return  min;
//     }
// };
class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
     int min=0;
     int he=0;
     for(int i=0;i<houses.size();i++){
      if(heaters.size()==1 || houses[i]<heaters[he]){
        if((heaters[he]-min)<=houses[i] && (heaters[he]+min)>=houses[i]){  //covered
        continue;
        }
        else{
          min=abs(houses[i]-heaters[he]);
          continue;
        }
      }
        if(heaters[he]<=houses[i] && houses[i]<=heaters[he+1]){
             if((heaters[he]+min)>=houses[i] || (heaters[he+1]-min)<=houses[i]){
                 cout<<"covered"<<heaters[he+1]<<houses[i];
                 continue;
             }
             else{
                 min=std::min(abs(houses[i]-heaters[he]),abs(houses[i]-heaters[he+1]));
                 cout<<"add";
                 continue;
             }
         }
         else{
          cout<<"nexthe";
             he=he+1;
         }
     }
     return min;
    }
};
int main(){
// int he=-100;
// cout<<abs(he);
vector<int> ho {1,2,3,5,15};
vector<int> he {2,30};
// cout<<he[1];
Solution s;
cout<<s.findRadius(ho,he);
}