#include<iostream>
#include<vector>
using namespace std;
//bool path(int ,int );
int DA[3][2]={{0,0},{0,0},{0,0}};

class Solution {
   
       public : vector<int> ansr;
        public : vector<int> ansc;
        int om;
        int on;
        bool start=true;
        
public:
    int uniquePaths(int m, int n) {
        //int DA[m][n];
        om=m;
        on=n;
     
       
        if(path(m,n)){
           
            return 1;

        }
        else{
            return 0;
        }
    

    }
    bool path(int m,int n){
        m=0;
        n=0;
        

            if(m==om-1 && n==n-1){
                //cout<<"enter";
                return true;
            }
            else if(m==om || n==on){
                cout<<"Hi"<<m<<" "<<n;
                return false;
            }
            else{
                
                if(DA[m+1][n]==1 || DA[m][n+1]==1)
                {
                    // cout<<"enter*";
                    return true;}
                else if((DA[m+1][n]==0 || DA[m][n+1]==0)){
                     //cout<<"push";
                    if(path(m+1,n)|| path(m,n+1)){
                        DA[m][n]=1;
                        ansr.push_back(m);
                        ansc.push_back(n);
                      //  cout<<"push";
                        return true;
                    }
                    
                        
                    
                }
                else{
                    DA[m][n]=-1;
                        
                        return false;
                }
            }
            return false;
        }
    
};
int main(){
    Solution so;
int ans=so.uniquePaths(3,2);
cout<<ans;
cout<<"size"<<so.ansr.size();
for (auto i = so.ansr.begin(); i != so.ansr.end(); ++i)
        cout << *i << " ";
        
                                         
    return 0;
}