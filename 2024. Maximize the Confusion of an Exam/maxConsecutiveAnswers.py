# Best Solution
# class Solution(object):
#     def maxConsecutiveAnswers(self, answerKey, k):
#         """
#         :type answerKey: str
#         :type k: int
#         :rtype: int
#         """
#         start = 0
#         end = 0
#         maxA = 0
#         trueAns = 0
#         falseAns = 0
#         for a in answerKey:
#             if a == 'T':
#                 trueAns += 1
#                 maxA = max(trueAns,maxA)
#             else:
#                 falseAns += 1
#                 maxA = max(falseAns,maxA)
#             if end - start + 1 > maxA + k:
#                 if answerKey[start] == 'T':
#                     trueAns -= 1
#                 else:
#                     falseAns -= 1
#                 start += 1
#             end += 1
#         return min(maxA + k, len(answerKey))

class Solution(object):
    def maxConsecutiveAnswers(self, answerKey, k):
        """
        :type answerKey: str
        :type k: int
        :rtype: int
        """
        countT=0
        countF=0
        result=0
        right=0
        left=0
        if len(answerKey)==1:
          return 1
        
        if(answerKey[0]=="T"):
          countT+=1
        else:
          countF+=1
        
        while right<len(answerKey):
          if min(countF,countT)<=k:
            curLen=right-left+1
            result=max(result,curLen)
            right+=1
            if(right==len(answerKey)):
              continue
            if answerKey[right]=="T":
              countT+=1
            else:
              countF+=1
          else:
            if answerKey[left]=="T":
              countT-=1
            else:
              countF-=1
            left+=1
        return result
      
s=Solution()
print(s.maxConsecutiveAnswers("TTFTTFTT",1))
            
            