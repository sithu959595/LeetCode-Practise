#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;
  
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 class Solution {
    public : int recur(ListNode** result1,ListNode c){
        int carry=0;
        if(c->next==nullptr){
            int aa=(*result1->val)+c->val;
            if(aa>=10){
                carry=1;
            }
            *result1->val=(aa%10);
            if(*result1->next==nullptr){
                ListNode* a(0);
                *result1->next=a;
            }
            *result1=(*result1->next);
            return carry;

        }
        else{
            
            int aa=resur(result1,c->next)+c->val+(*result1->val);
            if(aa>=10){
                carry=1;
            }
            *result1->val=(aa%10);
            if(*result1->next==nullptr){
                ListNode* a(0);
                *result1->next=a;
            }
            *result1=(*result1->next);
            return carry;
        }
    }
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
    }
};
 
int main(){

  
  
}
