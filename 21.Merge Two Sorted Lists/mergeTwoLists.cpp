#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;
struct ListNode {
      int val;
      ListNode * next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode * tail;
        ListNode* temp;
        ListNode* re;
        if(list1==NULL){
            return list2;
        }
        else if(list2==NULL){
            return list1;
        }
        if((list1->val<=list2->val)){   //starting
        //cout<<"H";
            re=list1;
            temp=list1->next;
            list1=temp;
            tail=re;
        }
        else{             //starting
        //cout<<"XX";
            re=list2;
            temp=list2->next;
            list2=temp;
            tail=re;
        }
        
         while(true){
            //cout<<"Hi";
            if(list1==NULL){  //check end
                tail->next=list2;
                //cout<<"Hi**";
                break;
            }
            else if(list2==NULL){
                tail->next=list1;
                //cout<<"Hi2";
                break;
            }
            if((list1->val)<=(list2->val)){
                //cout<<"--"<<list1->val;
                tail->next=list1;
                tail=list1;
                //cout<<"top1"<<re->val;
                temp=list1->next;
                list1=temp;
            }
            else{
                //cout<<"++"<<list2->val;
                 tail->next=list2;
                tail=list2;
                 //cout<<"top2"<<re->val;
                temp=list2->next;
                list2=temp;
            }
        }   
        return re;
    }
};
int main(){
    // Declaring a vector
    ListNode * list1=new ListNode();
    
    ListNode * list2=new ListNode();
    ListNode * first=new ListNode();
    ListNode * second=new ListNode();
    ListNode * third=new ListNode();
   /* first->val=1;
    second->val=2;
    third->val=4;
    first->next=second;
    second->next=third;
    third->next=NULL;
    list1=first;
*/


 ListNode * first1=new ListNode();
    ListNode * second1=new ListNode();
    ListNode * third1=new ListNode();
   //first1->val=1;
    //second1->val=3;
    third1->val=0;
    //first1->next=second1;
    //second1->next=third1;
    third1->next=NULL;
    list2=first1;

ListNode * result;
ListNode* temp;
Solution s;
ListNode * l=NULL;
ListNode * l1=NULL;
result=s.mergeTwoLists(l,list2);
cout<<"[";
while(true){
    
    cout<<" "<<result->val<<" ";
   
    temp=result->next;
    result=temp;
    if(result==NULL){
        break;
    }
}
 cout<<"]";
//cout<<" "<<result->next->val<<" ";
   
}