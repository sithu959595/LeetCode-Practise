#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    string pushDominoes(string dominoes) {
        int count=0;
        bool isthereR=false;
        for(int i=0;i<dominoes.length();i++){
            if(dominoes[i]=='R'){
                isthereR=true;
                count=0;            
                }
            else if(dominoes[i]=='L'){
                
                if(count!=0 && isthereR){
                    int k=i-1;
                    for(int j=0;j<(count/2);j++){
                        dominoes[k]='L';
                        k--;
                    }
                    if((count%2)!=0){
                        dominoes[(i-(count/2)-1)]='.';
                    }
                }
                else if(!(count!=0 && isthereR)){
                    int k=i-1;
                    for(int j=0;j<count;j++){
                        dominoes[k]='L';
                        k--;
                    }
                }
                isthereR=false;
                count=0;
            }
            else if(dominoes[i]=='.'){
                if(isthereR){
                    dominoes[i]='R';
                   
                }
                 count++;
            }
                
        }
        return dominoes;
    }
};
int main(){
Solution s;
cout<<s.pushDominoes(".L.R...LR..L..");
  
}
