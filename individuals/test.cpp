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
  struct Car {
      int val;
      Car() : val(0) {}
      Car(int a) : val(a){}
  };
  void fun(vector<int>& aa){
    aa[1]=900;
  }
int main(){
    // Declaring a vector
    vector<int> v ;
 
    // Declaring an iterator
    vector<int>::iterator i;

  v.pop_back();
  int i1=2;
  ListNode * l=new ListNode();
  //cout<<l;

  vector<int> a{1,2,3,4};
  i=a.begin();
  //i=i-2;
  //cout<<*i;
  int arr[3]={7,8,9};
  
  cout<<*(arr+2);
 // a.insert(1,6);
  //*l=NULL;
  vector<int> b{2,6,3,1,10,22,43,54,65};
  b[2]=77;
  b[2]=89;
  cout<<"   "<<b[2];
  std::vector<int>::iterator ii=std::find(b.begin(),b.end(),43);
  cout<<"Find at "<<ii-b.begin()<<"\n";
  
  vector<int> bbb;
  bbb={23,23,24,26,23,23,23};
  vector<int> cc=bbb;
  cout<<"cc3 is "<<cc[3];
  cc[3]=11;
  cout<<"cc3 is "<<cc[3];
  //cout<<"bbb is "<<*(bbb.begin()+3);
  //int b11=100111;
  //int & a11=1;
 // &a11=b11;
  //cout<<"a11 is ....."<<a11;
  //vector<vector <int>> aa {3,NULL};
  string ss="abc";
  if(ss.substr(0,0)==""){
    cout<<"it is null";
  }
  vector<int> ab{1,2,3};
  fun(ab);
  cout<<"the result is "<<ab[1];

  string a1111="aa";
  char aa11='b';
  a1111[1]='p';
  //string aabb=a1111+aa11;
  cout<<"default value of string is"<<a1111<<".";
  unordered_map<char,int> has;
  has['a']=100;
  has['a']=500;
  cout<<"hash value is "<<has['a'];
  string* aaaaa=new string[] {"1"};
  int bbbb[3]={1,2,3};
  Car* b1=new Car(9);
  ListNode* a1=new ListNode(5);
  
  ListNode** a2=&a1;
  cout<<"\n"<<"a1 is "<<a1<<"\n";
  
  cout<<")))))";
  int t=100;
  int* te=&t;
  int* tte=&t;
  int * te1=te;
  //*te1=                                                                                                                                                                                                                                                                                                                                                                                                            ;
  //cout<<nullptr;
  a1->next=nullptr;
  if(nullptr==0){
    cout<<"It is true";
  }
  else{
    cout<<"it is false";
  }
  vector<int> DP1(6,9);
   DP1={1,1,1,1,1};
  //for(int i=0;i<DP1.size();i++)
  //cout<<"\n"<<i<<" is "<<DP1[i]<<"\n";
  cout<<"\n"<<"DP{5} is "<<DP1[10];
  
  
}
