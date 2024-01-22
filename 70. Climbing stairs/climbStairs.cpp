#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    int climbStairs(int n) {
        int pre1=1;
        int pre2=1;
        for(int i=2;i<=n;i++){
            int temp=pre2;
            //cout<<"pre2-"<<pre2<<"#"<<"pre1-"<<pre1<<"/";
            
            pre2=pre2+pre1;
            pre1=temp;
            
        }
        return pre2;
    }
};
int main(){
Solution s;
cout<<s.climbStairs(2);
}