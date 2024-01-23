class Solution {
// public:
//     bool validWordAbbreviation(string word, string abbr) {
//       int count;
//       word=word+"A";
//       abbr=abbr+"A";
//       int pWord=0;
//       int pAbbr=0;
//       int counter=0;
//       while(pAbbr<abbr.size()){
//         if(std::isdigit(abbr[pAbbr])){ //abbr item is digit
//         if(stoi(abbr[pAbbr])==0){
//           return false;
//         }
//           counter=(counter*10)+stoi(abbr[pAbbr]);
//           pAbbr++;

//         }
//         else{  //abbr item is not a digit 
//           if(counter!=0){ //need to count word
//             pWord++;
//             count--;
//           }
//           else{ //regular item compare
//             if(abbr[pAbbr]!=word[pWord]){ //not corrent abbr
//                   return false;
//             }
//             else{
//               pAbbr++;
//               pWord++;
//             }
//           }
//         }
//       }
//         return true;
//     }
// };