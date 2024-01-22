#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    int countArrangement(int n) {
        int count=1;
        int count2=0;
        vector<int> a;
       
        for(int i=1;i<=n;i++){
            a.push_back(i);
        }
string s="";
        recur(a,s);
        return 1;
       
    }
     void recur(vector<int>& arr,string s){
            vector<int>::iterator ptr;
            vector<int> temp=arr;
             unordered_map<string,bool> DP;
            for(ptr=temp.begin();ptr<temp.end();ptr++){
                int val=*ptr;
                
                if(temp.size()==1){
                     s=s+(to_string(val)); 
                    //count2++;
                    cout<<s<<"\n";
                    s="";
                    
                }
                s=s+(to_string(val));
                cout<<"erasing "<<*ptr<<"||";
                temp.erase(ptr);
                recur(temp,s);
                temp=arr;

            }  //loop

           //return count2;
        }
};
int main(){

  Solution s;
  cout<<s.countArrangement(3);
}