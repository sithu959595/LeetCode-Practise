#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int max=0;
        char ocolor=' ';
        int remin=0;
        for(int i=0;i<colors.length();i++){
            if(ocolor!=colors[i]){
                ocolor=colors[i];
                max=neededTime[i];
            }
            else if(ocolor==colors[i]){
                if(max<=neededTime[i]){
                    remin=max+remin;
                    max=neededTime[i];
                }
                else{
                    remin=remin+neededTime[i];
                }
            }
        }
        return remin;

    }
};
int main(){
Solution s;
vector<int> a{1,2,3,4,1};
cout<<s.minCost("aabaa",a);
  
}
