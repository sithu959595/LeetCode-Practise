#Best Solution
# class Solution(object):
#     def minSwaps(self, data):
#         num = sum(data)
#         if num < 2:
#             return 0 
#         maxswaps = num
#         swaps = num
#         left = 0
#         right = num -1
#         thres = 0
#         for i in range(num):
#             swaps = swaps - data[i]
#         if swaps < maxswaps:
#             maxswaps = swaps
#         while right + 1 < len(data):
#             swaps = swaps + data[left] - data[right + 1]
#             if swaps < maxswaps:
#                 maxswaps = swaps
#             left = left + 1
#             right = right + 1
#         return maxswaps




#         """
#         :type data: List[int]
#         :rtype: int
#         """
        

class Solution(object):
    def minSwaps(self, data):
        """
        :type data: List[int]
        :rtype: int
        """
        
        totalOnes=0
        
        for i in range(len(data)):
          if data[i]==1:
            totalOnes+=1
            
        if(totalOnes==1):#edge cases
          return 0
        if(totalOnes==len(data)):#edge cases
          return totalOnes
        #initial data
        curZeros=0
        left=1
        right=totalOnes
        minSwap=0
        for j in range(totalOnes):
          if(data[j]==0):
            curZeros+=1
        minSwap=curZeros
        # print(curZeros)
        while right<len(data):
          if(data[right]==0):
            curZeros+=1
          if(data[left-1]==0):
            curZeros-=1
          # if(minSwap>curZeros):
          #   print("left:",left,"right:",right)
          minSwap=min(minSwap,curZeros)
          left+=1
          right+=1
        return minSwap
      
s=Solution()
print("answer",s.minSwaps([1,0,1,0,1]))
        
        