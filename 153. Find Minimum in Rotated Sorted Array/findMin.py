#Best Solution
# class Solution(object):
#     def findMin(self, nums):
#         """
#         :type nums: List[int]
#         :rtype: int
#         """
#         """
#         if nums is empty, return None
#         if nums has one element, return that element

#         no duplicate values
#         0, 1, 2  ---> m is in between l and r
#         2, 0, 1  ---> l > m, so everything to the right is sorted, search left-half
#         1, 2, 0  ---> l < m, so everything to the left is sorted, search right-half

#         0, 1, 2, 3, 4
#         4, 0, 1, 2, 3
#         2, 3, 4, 0, 1
#         store current m value in min_val and update it as we iterate thru the array
#         """

#         if len(nums) == 0:
#             return None
#         if len(nums) == 1:
#             return nums[0]

#         min_val = nums[0]
#         l = 0
#         r = len(nums)-1

#         while l <= r:
#             if nums[l] < nums[r]:
#                 min_val = min(min_val, nums[l])
#             m = (r + l) // 2
#             min_val = min(min_val, nums[m])
#             print("left:",l,"right:",r,"Mid:",m)
#             if nums[l] <= nums[m]:
#                 l = m+1
#             else:
#                 r = m-1
#         return min_val

        

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
           
s=Solution()
print(s.findMin([1,2,3,4,5,6]))

