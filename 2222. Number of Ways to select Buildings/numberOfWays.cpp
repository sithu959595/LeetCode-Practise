#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    long long numberOfWays(string s) {
        long long zero=0;
        long long one=0;
        long long zoz=0;
        long long oz=0;
        long long zo=0;
        long long ozo=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='0'){
                zero++;
                zoz=zo+zoz;
                oz=one+oz;
            }
            else if(s[i]=='1'){
                one++;
                zo=zero+zo;
                ozo=oz+ozo;
            }
        }
        return zoz+ozo;
    }
};
int main(){
    Solution s;
    cout<<s.numberOfWays("11100");
  
}
