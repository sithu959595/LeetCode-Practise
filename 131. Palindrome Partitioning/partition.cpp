#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;
class Solution {
    
    public :
    bool ispalindrome(string s){
        int mid=0;
        int end=0;
        if(s.length()%2==0){
            //cout<<"hi";
            mid=s.length()/2;
            end=mid-1;
        }
        else{
            
            mid=(s.length()+1)/2;
            end=mid-2;
        }
        //cout<<"end is "<<end;
        for(int j=end;j>=0;j--){
            //cout<<"comparing"<<s[j]<<" and "<<s[mid]<<"\n";
            if(s[j]!=s[mid]){
                
                return false;
            }
            mid++;
        }
        return true;
    }
    
public:
    vector<vector<string>> partition(string s) {
        
        vector<bool> ab(s.length()+1,false);
        vector<vector<bool>> DP(s.length()+1,ab);
        int lc=s.length();
        vector<vector<string>> re;
        vector<string> ss1;
        re=recur(s,ss1,re,DP,0,0);
        return re;
    }
    public :
    vector<vector<string>> recur(string ss,vector<string> cur,vector<vector<string>> re,vector<vector<bool>>& DP,int start,int end){
        if(ss==""){
            re.push_back(cur);
            return re;
        }
        
        for(int i=0;i<ss.length();i++){
            end=start+i;
            if(DP[start][end]){
                cout<<"HIiiiii\n";
                DP[start][end]=true;
                cout<<ss.substr(0,i+1)<<"---";
                cur.push_back(ss.substr(0,i+1));
                cout<<ss.substr(i+1,ss.length()-(i+1))<<"\n";
                int temp=start;
                temp=temp+i+1;
                
                re=recur(ss.substr(i+1,ss.length()-(i+1)),cur,re,DP,temp,end);
                cur.pop_back();   //*****************
            }
            else if(ispalindrome(ss.substr(0,i+1))){
                
                DP[start][end]=true;
                cout<<ss.substr(0,i+1)<<"---";
                cur.push_back(ss.substr(0,i+1));
                cout<<ss.substr(i+1,ss.length()-(i+1))<<"\n";
                int temp=start;
                temp=temp+i+1;
                
                re=recur(ss.substr(i+1,ss.length()-(i+1)),cur,re,DP,temp,end);
                cur.pop_back();   //*****************

            }
        }
        return re;
    }

    
};
int main(){
Solution s;
vector<vector<string>> a;

a=s.partition("babbbaabbbbab");

for(int i=0;i<a.size();i++){
    cout<<"[";
    for(int j=0;j<a[i].size();j++){
        cout<<a[i][j]<<",";
    }
    cout<<"]";
}
  
}