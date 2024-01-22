#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    int minMeetingRooms(vector<vector<int>>& intervals) {
        int min=intervals[0][0];
        int max=intervals[0][1];
        int room=0;
        for(int i=1;i<intervals.size();i++){
          if(!((intervals[i][0]<min && intervals[i][1]<min) || (intervals[i][0]>max && intervals[i][1]>max))){
            if(intervals[i][0]<min){
              min=intervals[i][0];
            }
            if(intervals[i][1]>max){
              max=intervals[i][1];
            }
            room++;
          }
        }
      return room;
        
    }
};
int main(){

}