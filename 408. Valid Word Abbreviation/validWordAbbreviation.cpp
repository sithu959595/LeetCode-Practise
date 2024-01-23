#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    bool validWordAbbreviation(string word, string abbr) {
      
     
      word=word+"A";
      abbr=abbr+"A";
      int pWord=0;
      int pAbbr=0;
      int counter=0;
      // string scounter="";
      while(pAbbr<abbr.size()){
        cout<<"***word"<<pWord<<",abbr"<<pAbbr<<",counter"<<counter<<"///";
        string curWord=word.substr(pWord,1);
        string curAbbr=abbr.substr(pAbbr,1);
        
        if(std::isdigit(abbr[pAbbr])){ //abbr item is digit
        if(stoi(curAbbr)==0 && counter==0){
          return false;
        }
        // scounter+=abbr[pAbbr];
          counter=(counter*10)+stoi(curAbbr);
          pAbbr++;

        }
        else{  //abbr item is not a digit 
          if(counter!=0 && pWord!=word.size()-1){ //need to count word
          if(pWord<word.size()-1){
            pWord++;
            counter--;
          }
          else{

            counter--;
          }
          }
          else{ //regular item compare
            if(abbr[pAbbr]!=word[pWord]){ //not corrent abbr
                  return false;
            }
            else{
              pAbbr++;
              pWord++;
            }
          }
        }
      }
      if(counter!=0){
        return false;
      }
        return true;
    }
};
int main(){
// string a="A";
// string b="a12";
// cout<<stoi(b.substr(2,1))+5;
// bool ans;
// if(a==b){
//   cout<<"same";
// }
// cout<<std::isdigit(a[1]);
Solution s;
cout<<"answer"<<s.validWordAbbreviation("a","01");
}