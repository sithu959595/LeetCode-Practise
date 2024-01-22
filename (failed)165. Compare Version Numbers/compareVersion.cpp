#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    int compareVersion(string version1, string version2) {
      // cout<<"rererearea-------------------";
        int vp1=0;
        int vp2=0;
        vector<int> v1;
        vector<int> v2;
        string rev1="";
           string rev2="";
        while(vp1!=version1.size()){
          if(version1.size()-1==vp1){
            rev1+=version1[vp1];
            v1.push_back(stoi(rev1));
          }
          else if(version1[vp1]=='.'){
            // cout<<"************1="<<version1.size()-1;
            v1.push_back(stoi(rev1));
            rev1="";
          }
          else {
            rev1+=version1[vp1];
          }
          vp1++;
        }
        while(vp2!=version2.size()){
          if(version2.size()-1==vp2){
            rev2+=version2[vp2];
            v2.push_back(stoi(rev2));
          }
          else if(version2[vp2]=='.' ){
            // cout<<"************2="<<version2.size()-1;
            v2.push_back(stoi(rev2));
            // cout<<"***()()()()()**2";
            rev2="";
          } 
          else{
            rev2+=version2[vp2];
          }
          vp2++;
        }
        // cout<<v1.size()<<"::"<<v2.size();
        if(v1.size()>v2.size()){
            // cout<<"push"<<v2.size();
          v2.push_back(0);
        }
        else if(v1.size()<v2.size()){
          v1.push_back(0);
        }
        for(int i=0;i<v1.size();i++){
          if(v1[i]>v2[i]){
              // cout<<"i is" <<v1.size()<<"+"<<v2.size();
            return 1;
          }
          else if(v1[i]<v2[i]){
              
            return -1;
          } 
        }
        return 0;
    }
    // int recur(string v1,string v2,int i1,int i2){
    //       if(i1==v1.size()){
    //         v1+=".0";
    //       }
    //       if(i2==v2.size()){
    //         v2+=".0";
    //       }
    //       string rev1="";
    //       string rev2="";
    //       while(v1[i1]!='.'){
    //         if(v1[i1]!='0'){
    //             rev1+=v1[i1];
    //         }
    //             i1++;
    //       }
    //       while(v2[i2]!='.'){
    //         if(v2[i2]!='0'){
    //             rev2+=v2[i2];
    //         }
    //             i2++;
    //       }
    //       if(stoi(rev1)>stoi(rev2)){
    //         return 1;
    //       }
    //       else if(stoi(rev1)<stoi(rev2)){
    //         return -1;
    //       }
    //       else{
    //         if(i1==v1.size() && i2==v2.size()){
    //             return 0;
    //         }
    //         recur(v1,v2,i1,i2);
    //       }
    //       return 100;
    //     }
};
int main(){
  // string s="hel.lo";
  // cout<<s[4];
  Solution ss;
  cout<<ss.compareVersion("7.5.2.4","7.5.3");
  // string s="001";
  // cout<<stoi(s);
  string a="tr";
  cout<<a.size();
}