class Solution(object):
    def validPalindrome(self, s):
        saved=False
        cachS=-1
        cachE=-1
        start=0
        end=len(s)-1
        """
        :type s: str
        :rtype: bool
        """
        while (start<=end):
              if (s[start]==s[end]):
                   start+=1
                   end-=1
              else:
                    print("not same at",start,":",end)
                    if saved: #second
                      if cachS>=0:
                        start=cachS
                        end=cachE
                        cachS=-2
                        cachE=-2
                      else: #third
                          return False
                    else: #first
                      cachS=start+1
                      cachE=end
                      saved=True
                      end-=1
                       
        return True
            



# class Solution(object):
#     def validPalindrome(self, s):
#         """
#         :type s: str
#         :rtype: bool
#         """
#         def check(s, i, j):
#             while i < j:
#                 if s[i] == s[j]:
#                     i += 1
#                     j -= 1
#                 else:
#                     return False
            
#             return True
        
#         i = 0
#         j = len(s) - 1
#         while i < j:
#             if s[i] == s[j]:
#                 i += 1
#                 j -= 1
#             else:
#                 return check(s, i, j-1) or check(s, i+1,j)
            
#         return True

s=Solution()
print(s.validPalindrome("aguokepatgbnvfqmgmlcupuufxoohdfpgjdmysgvhmvffcnqxjjxqncffvmhvgsymdjgpfdhooxfuupuculmgmqfvnbgtapekouga"))
