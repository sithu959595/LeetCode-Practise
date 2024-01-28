#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
    vector<int> minAvailableDuration(vector<vector<int>>& slots1, vector<vector<int>>& slots2, int duration) {
        cout<<"hi";
        int oneP=0;
        int twoP=0;
        int start=0;
        int end=1;
        vector<int> re{};
        //while(!(oneP==slots1.size()-1 && twoP==slots2.size()-1)){
          bool whi=true;
        while(whi){
          
          if(oneP==slots1.size()-1 && twoP==slots2.size()-1){
            whi=false;
          } // do not for\get to check boundry. keep increaseing the other if one cannot increase or 
          if(slots1[oneP][start]>=slots2[twoP][end]){ //no common free time.[second][sirst]
            //second++
            if(twoP<slots2.size()-1)
            {twoP++;}
          }
          else if(slots2[twoP][start]>=slots1[oneP][end]){ //no common free time.[first][second]
          //first++
          if(oneP<slots1.size()-1)
          {oneP++;}
          }
          else{ //commone time
          int SF=((slots1[oneP][end]>slots2[twoP][end] ? slots2[twoP][end] : slots1[oneP][end])-slots1[oneP][start]);
          int FS=((slots2[twoP][end]>slots1[oneP][end] ? slots1[oneP][end] : slots2[twoP][end])-slots2[twoP][start]);

          if(slots1[oneP][end]>slots2[twoP][start] && slots1[oneP][start]>=slots2[twoP][start]){ //SF
          cout<<"TO"<<oneP<<","<<twoP<<"*"<<SF<<"/  ";
            if(SF>=duration)
              {   
              vector<int> result{slots1[oneP][start],slots1[oneP][start]+duration};
              return result;
              }
              if(twoP==slots2.size()-1){
                if(oneP<slots1.size()-1)
                {oneP++;}
              }
            if(twoP<slots2.size()-1)
            {twoP++;}
            
          }
          else if(slots1[oneP][end]>slots2[twoP][start] && slots2[twoP][start]>=slots1[oneP][start]){
            cout<<"OT"<<oneP<<","<<twoP<<FS<<"/";
            if(FS>=duration)
            {vector<int> result{slots2[twoP][start],slots2[twoP][start]+duration};
            
            return result;
            }
            if(oneP==slots1.size()-1){
                if(twoP<slots2.size()-1)
                {twoP++;}
            }
            if(oneP<slots1.size()-1){oneP++;}
           
          }else{
            if(SF>FS){
            if(twoP<slots2.size()-1)
            {twoP++;}
            }
            else{
             if(oneP<slots1.size()-1)
              {oneP++;}
            }
          }
            // int avail=std::max((slots1[oneP][start]-slots2[twoP][end]),(slots1[oneP][end]-slots2[twoP][start]));
            // if(avail>=duration){
            //   return
            // }
          }
        }
        return re;
    }
};
int main(){
  vector<vector<int>> one{{10,50},{60,120},{140,210}};
  vector<vector<int>> two{{0,15},{60,70}};

  
  Solution s;
  vector<int> re=s.minAvailableDuration(one,two,12);
  cout<<"["<<re[0]<<","<<re[1]<<"]";

}