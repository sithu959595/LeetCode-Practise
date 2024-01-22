#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;
/* class Solution {
public:
    int mySqrt(int x) {
        int oi;
        unsigned int ans2;
        
        for(int i=0;i<=x;i++){
            
            ans2=i*i;
            cout<<"hi"<<ans2<<"-";
            if(ans2==x){
                return i;
            }
            else if(ans2>x){
                return oi;
            }
            else{
                oi=i;
            }
        }
        return ans2;
    }
};

*/

/*
class Solution {
public:
    int mySqrt(int x) {
        int y=x;
        int z=0;
        int mid=1;
        int nst=0;
        cout<<"start"<<y<<"&&"<<z;
        while(mid>=0){
            mid=(y/2)+z;
            cout<<"*"<<mid<<"*";
            if(mid==z){
                return z+1;
            }
            if((mid*mid)==x){
                return mid;
            }
            else if((mid*mid)>x){
                y=mid-nst;
                z=nst;
            }
            else{
                z=mid;
                y=mid-nst;
                nst=mid;
            }
        }
        return nst;
    }
};  */
class Solution {
    public : int bt(int key, int low,int high, int omid){
        int middle;
        long long somid=omid*omid;
        if(low>high){  
            if((somid)>key){
                return omid-1;
            }
            else if((somid)<=key){
                return omid;
            }
        }
        middle=(low+high)/2;
        long long smiddle=middle*middle;
        if((smiddle)==key){
            return middle;
        }
        else if((smiddle)>key){   //need to be decreased
            return (bt(key,low,middle-1,middle));
        }
        else if((smiddle)<key){   //need to be incresed
            return(bt(key,middle+1,high,middle));
        }
        return (-2);
    }
public:
    int mySqrt(int x) {
       return (bt(x,1,(x/2),1));

    }
}; 



int main(){
    Solution s;
    int t=8;
    //cout<<s.mySqrt(2147483647);
    cout<<s.mySqrt(536848900);
}