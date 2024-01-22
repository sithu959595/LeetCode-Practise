
class Solution {
public:
    int mySqrt(int x) {
       int half=0;
       int st=0;
       int mid=x/2;
       int omid=0;
       while(mid>st){
        omid=mid;
 cout<<"*"<<mid<<"*";
        if((mid*mid)>x){
            half=(mid-st)/2;
            mid=st+half;
            /*
            if(mid>omid){
                cout<<"work";
                return omid;
                
            }

            */
            if(mid==st){
             return mid;
            }
        }
        else if((mid*mid)<x){
            half=(mid-st)/2;
            st=mid;
            mid=mid+half;
            /*
               if(mid>omid){
                cout<<"work";
                return omid;
            }  */
            if(mid==st){
             return mid;
            }
        }
        else if((mid*mid)==x){
            return mid;
        }
       
       }
       return mid;
    }
};

