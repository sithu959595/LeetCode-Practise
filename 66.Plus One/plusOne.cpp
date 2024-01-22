#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;
class Solution {
    void recur(int c,vector<int>& digits){
        
            if((digits[c]+1)>9){
                digits[c]=0;
                if(c==0){
                    digits.insert(digits.begin(),1);
                }
                else{
                recur(c-1,digits);}
                
            }
            else{
                digits[c]=digits[c]+1;
            }
            /*
            if(c<0){
                digits.insert(digits.begin(),1);
                //cout<<"hi";
            }   */
            
        }
public:
    vector<int> plusOne(vector<int>& digits) {
        int s=(digits.size()-1);
        //cout<<"hi"<<s<<"___";
        recur(s,digits);
        return digits;
    }
};
int main(){
    Solution s;
    vector<int> aa{9};
    vector<int> so;
    so=s.plusOne(aa);
    for(int i=0;i<so.size();i++){
        cout<<so[i]<<",";
    }
}