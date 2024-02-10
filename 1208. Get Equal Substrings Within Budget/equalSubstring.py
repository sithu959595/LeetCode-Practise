# class Solution(object):
#     def equalSubstring(self, s, t, maxCost):
#         """
#         :type s: str
#         :type t: str
#         :type maxCost: int
#         :rtype: int
#         """
#         l=ans=0
#         c=0
#         for r in range(len(s)):
#             c+=abs(ord(s[r])-ord(t[r]))
#             while c>maxCost:
#                 c-=abs(ord(s[l])-ord(t[l]))
#                 l+=1
#             ans=max(ans,r-l+1) 
#         return ans
            
        
        

class Solution(object):
    def cost(self,x,y):
      return abs(ord(x)-ord(y))
    def equalSubstring(self, s, t, maxCost):
        """
        :type s: str
        :type t: str
        :type maxCost: int
        :rtype: int
        """
        maxLength=0
        # maxCost-=self.cost(s[0],t[0])
        left=0
        right=0
        while right<len(s):
          print(maxCost)
          if maxCost>=0:
            # if(right>=len(s)):
            #   continue
            maxCost-=self.cost(s[right],t[right])
            right+=1
          else:
            maxCost+=self.cost(s[left],t[left])
            left+=1
          if maxCost>=0:
            if((right-left)>maxLength):
              print("left:",left," ,right:",right," ,maxCost:",maxCost)
            maxLength=max(maxLength,right-left)
        return maxLength
      
s=Solution()
# print(s.cost("w","s"))
print(s.equalSubstring("krrgw","zjxss",19))