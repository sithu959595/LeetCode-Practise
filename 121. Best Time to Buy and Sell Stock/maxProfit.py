#best solutiuon(Sliding window)
# class Solution:
#     def maxProfit(self,prices):
#         left = 0 #Buy
#         right = 1 #Sell
#         max_profit = 0
#         while right < len(prices):
#             currentProfit = prices[right] - prices[left] #our current Profit
#             if prices[left] < prices[right]:
#                 max_profit =max(currentProfit,max_profit)
#             else:
#                 left = right
#             right += 1
#         return max_profit
class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        min=float("inf")
        maxPr=-1
        for i in range(len(prices)):
          if(prices[i]<min):
            print("smaller",prices[i])
            min=prices[i]
          curP=prices[i]-min
          if(curP>maxPr):
            maxPr=curP
            print("max",maxPr)
        return maxPr
      
s=Solution()
print(s.maxProfit([7,1,5,3,6,4]))
        