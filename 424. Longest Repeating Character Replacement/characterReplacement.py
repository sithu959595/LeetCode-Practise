class Solution(object):
    def characterReplacement(self, s, k):
        """
        :type s: str
        :type k: int
        :rtype: int
        """
        count=0
        chances=k
        left=0
        right=0
        max=0
        dif=-1
        cur=s[left]
        # curCha=s[0]
        while right<len(s):
          if(cur==s[right]):
            right+=1
            count+=1
            if(count>max):
              print("left:",left,",right:",right,",max:",count)
              max=count
          else: #need replacement
            if(dif==-1):
                dif=right
            if(chances>0):#can replace 
              chances-=1
              count+=1
              if(count>max):
                print("left:",left,",right:",right,",max:",count)
                max=count
              right+=1
            else: #cannot replace anymore
              print("enter")
              # if(k==0):
              #   return max
              cur=s[dif]
              left=dif
              right=dif
              chances=k
              count=0
              dif=-1
              
        count=0
        chances=k
        left=0
        right=0
        dif=-1      
        cur=s[left]
        while right<len(s):
          print("right",right)
          # print("*left:",left,",right:",right," ,max:",max,",cur:",cur)
          if(cur==s[right]):
            if(dif>-1):
              # print("add at right:",right)
              count+=1
              if(count>max):
                max=count
            right+=1
          else: #need replacement for the front characters
            if(dif==-1):
                cur=s[right]
                distance=right-left
                if(distance>=chances):
                  count=chances+1
                  chances=0
                  if(count>max):
                    print("*0left:",left,",right:",right," ,max:",max)
                    max=count
                else:
                  count=distance+1
                  chances=chances-distance
                  if(count>max):
                    print("*1left:",left,",right:",right," ,max:",max)
                    max=count
                dif=right
                right+=1
                continue
            if(chances>0):#can replace 
              chances-=1
              count+=1
              if(count>max):
                print("*2left:",left,",right:",right,",max:",count)
                max=count
              right+=1
            else: #cannot replace anymore
              # if(k==0):
              #   return max
              cur=s[dif]
              left=dif
              right=dif
              chances=k
              count=0
              dif=-1
          print("*left:",left,",right:",right," ,max:",max,",cur:",cur)
                
        return max


s=Solution()
print(s.characterReplacement("BAAAB",2))