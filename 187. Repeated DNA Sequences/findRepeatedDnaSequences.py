#Best Solution
# class Solution(object):
#     def findRepeatedDnaSequences(self, s):
#         """
#         :type s: str
#         :rtype: List[str]
#         """
#         f = {}
#         for i in range(len(s)-9):
#             temp = s[i:i+10]
#             f[temp] = f.get(temp,0)+1
#         res = []
#         for key,val in f.items():
#             if val>1:
#                 res.append(key)
#         return res
            
        

class Solution(object):
    def findRepeatedDnaSequences(self, s):
        """
        :type s: str
        :rtype: List[str]
        """
        left=0
        right=9
        map={}
        result=[]
        while right<len(s):
          cur=s[left:(right+1)]
          if cur in map: #occur moen than once
            time=map[cur]
            if not(time==2): #just registered
              map[cur]=2
            if time==1:
              result.append(cur)
            left+=1
            right+=1
          else: #first time to occur
            map[cur]=1
            left+=1
            right+=1
        return result
  
s=Solution()
print(s.findRepeatedDnaSequences("AAAAAAAAAAAAA"))