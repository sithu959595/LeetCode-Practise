#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;
class Solution{
    public : vector<int> twoSum(vector<int> &array,int target){
        vector<int> result;
unordered_map<int, int> hash;
int j=0;
for(int i=0;i<array.size();i++){
hash[array[i]]=i;
}
for(int i=0;i<array.size();i++){
j=target-array[i];
if(hash.find(j)!=hash.end()&&hash[j]!=i){
    result.push_back(i);
    result.push_back(hash[j]);
    return result;
}
}
return result;
}

};
int main(){
Solution ans;
vector<int> arr{2,7,11,15};
int target=9;

for (int x : ans.twoSum(arr,target))
        cout << x << " ";
}