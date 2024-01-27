#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
    int expressiveWords(string s, vector<string>& words) {
      int result=0;
        for(int i=0;i<words.size();i++){
          if(isStretchy1(s,words[i])){
            result++;
          }
        }
        return result;
    }
// public: 
//     bool isStretchy(string s,string w){
//       int pS=0;
//       int pW=0;
//       char pre='7';
//       s=s+"3";
//       w=w+"3";
//       int count=1;
//       char cWord;
//       bool checking=false;
//       while(pS<s.size() || pW<w.size()){
//         if(checking){
          
//           if(cWord==s[pS]){ //good. It is the same. Count more
//               pre=s[pS];
//               count++;
//               pS++;
//               continue;
//           }
//           else{ //maybe new sectoir is found
          
//           if(count<3){
//             cout<<"less than three"<<count;
//                 return false;
//               }
//               else{  //format
//                 count=1;
//                 checking=false;
//               }
//           if(s[pS]!=w[pW]){
//             cout<<"not same string";
//             return false;
//           }
            
//           }
//         }
//         if(s[pS]==w[pW] && !checking){
//            cout<<pre;
//           pre=s[pS];
//           if(pS<s.size()-1){
//           pS++;
//           }
//           if(pW<w.size()-1){
//           pW++;
//           }
          
         
//         }
//         else if(s[pS]!=w[pW] && !checking){ //first time seeing difference
//         // cout<<"*";
//         cout<<pre;
//         if(pre!=s[pS]){
//           cout<<"not same!";
//           return false;
//         }
//           cWord=s[pS];
//           checking=true;
//           count++;
//           pre=s[pS];
//           pS++;
          
//         }
        
//       }
//       // if(checking){
//       //   return false;
//       // }
//       // cout<<pW;
//       return true;
//     }

public :
  bool isStretchy1(string s,string w){  
    s+="3";
    w+="3";
    int count=0;
    bool checking=false;
    char pre;
    int pS=0;
    int pW=0;
    while(pS!=s.size()-1 || pW!=w.size()-1){
      cout<<"+"<<count<<"+";
      if(pre==s[pS]){
        
        count++;
      }
      else{
        count=1;
      }
      cout<<pS<<","<<pW<<"/";
      if(checking){
        
        if(s[pS]==pre){
          count++;
          pS++;
        }
        else if(s[pS]!=pre){ 
        if(count<3 ){
          cout<<"too short at"<<pS<<","<<pW<<" with"<<count<<"/";
          return false;
        }
        if(s[pS]!=w[pW]){
          cout<<"different";
          return false;
        }
          //format
          count++;
          checking=false;
          pre=s[pS];
          if(pS<s.size()-1){
          pS++;
          }
          if(pW<w.size()-1){
          pW++;
          }

        }
      }
      else{ //if not checking
        if(s[pS]==w[pW]){
          
            pre=s[pS];
          if(pS<s.size()-1){
          pS++;
          }
           if(pW<w.size()-1){
          pW++;
          }
           
        }
        else{ //start schecking
        
          if(pre==s[pS]){
            cout<<"**";
            count+=1;
            checking=true;
            pre=s[pS];
            if(pS<s.size()-1){
            pS++;
            }
          }
          else{
            cout<<"nott at"<<pS<<","<<pW<<pre<<s[pS]<<"/" ;
            return false;
          }
          
        }
      }
    }
    if(checking && count<3){
      return false;
    }
    return true;
  }
};
int main(){
Solution s;
cout<<s.isStretchy1("dddiiiinnssssssoooo","ddiinnso");
}