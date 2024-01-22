#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;
class Solution {
    public : int recur(int m,int n,int om,int on,int & count,vector<vector<int>> & DP){
        int answer=0;
        cout<<"hi "<<m<<"-"<<n<<"\n";
        if(m==om && n==on){
            cout<<"Target\n";
            //count++;
            return 1;
        }
        if(m>om || n>on){
            cout<<"out of Bount"<<m<<"-"<<n<<"\n";
            return 0;
        }
        if(DP[m][n]!=0){
            //count++;
            return DP[m][n];
            //answer=true;
        }
        
        cout<<"Processe down"<<m+1<<"-"<<n<<"\n";
        
         answer+=recur(m+1,n,om,on,count,DP);
        
           //answer=answer || ans;
           // DP[m][n]=DP[m][n]+answer+1;
        
            
                
        
            
        
        //////////////////////////////////////////////////////////////////////////
        
        cout<<"Process right"<<m<<"-"<<n+1<<"\n";
       
            answer+=(recur(m,n+1,om,on,count,DP));
       
            // DP[m][n]=DP[m][n]+answer+1;
        
            //return ans;
        DP[m][n]=answer;
        return answer;
    }
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> DP(m+2,vector<int>(n+2,0));
        int count=0;
        int ans=recur(1,1,m,n,count,DP);
        return ans;
    }
};
int main(){
Solution s;
cout<<s.uniquePaths(3,7);
  
}
