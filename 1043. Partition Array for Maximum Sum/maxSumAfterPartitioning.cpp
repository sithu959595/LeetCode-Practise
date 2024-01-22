#include<iostream>
#include<vector>      
#include <unordered_map>
using namespace std;
class Solution {
public:
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int max;
        int maxi;
        int p1;
        int p2;
        int dpcount=0;
        vector<bool> DP(arr.size()+1,false);
    while(dpcount<=arr.size()){
        //cout<<dpcount<<"\n";
        for(int i=0;i<arr.size();i++){   //for beginning max to compare
            if(DP[i]!=true){
                max=arr[i];
                maxi=i;
                //cout<<maxi<<"\n";
                break;
            }
        }
        for(int j=0;j<arr.size();j++){    //for finding a real max
            if(DP[j]!=true && arr[j]>=max){
                
                max=arr[j];
                maxi=j;
               

            }
            //cout<<maxi<<"\n";
             
            
        }
        //cout<<max<<"\n";
        dpcount++;
                DP[maxi]=true;
                
                if(maxi!=0){
                    p1=maxi-1;
                }
                else{
                    p1=maxi;}
                if(maxi!=arr.size()-1){
                    p2=maxi+1;
                }
                else{
                    p2=maxi;
                }
        for(int l=0;l<k-1;l++){   //for expending
            
            if(DP[p1] && DP [p2]){
                break;
            }
            if(arr[p1]<arr[p2] && DP[p1]!=true){
                //cout<<"index "<<p1<<"is updated with "<<max<<"\n";
                arr[p1]=max;
                DP[p1]=true;
                
                dpcount++;
                if(p1!=0){
                    p1=p1-1;
                }
                
            }
            else if(arr[p2]<arr[p1] && DP[p2]!=true){
                arr[p2]=max;
                DP[p2]=true;
                dpcount++;
                if(p2!=arr.size()-1){
                    p2=p2+1;
                }
            }
        }
    }
int sum=0;
for(int i=0;i<arr.size();i++){
sum=arr[i]+sum;
}
        return sum;
    }
};
int main(){
vector<int> a {10,9,3,2};
Solution s;
cout<<s.maxSumAfterPartitioning(a,2);
/* vector<int> b=s.maxSumAfterPartitioning(a,4);
for(int i;i<b.size();i++){
   cout<<b[i]<<"\n";
}  
*/
//cout<<"11";
}