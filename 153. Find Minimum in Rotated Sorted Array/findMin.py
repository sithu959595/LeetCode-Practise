import math
class Solution(object):
    def findMin(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        left=0
        right=len(nums)-1
        while left<=right:
          curLen=right-left+1
          half=math.ceil(curLen/2)
          midIndex=int(left+half-1)
          print("left:",left,"right:",right,"midIndex:",midIndex,nums)
          if(curLen==2):
            return min(nums[left],nums[right])
          if (nums[left]>nums[midIndex]):
            right=midIndex
          elif (nums[midIndex]>nums[right]):
            left=midIndex
          else:
            right=midIndex
           
# s=Solution()
# print(s.findMin([3,4,5,1,2]))

print(5/2)