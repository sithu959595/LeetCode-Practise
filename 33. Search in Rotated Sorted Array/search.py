#Best Solution
# class Solution(object):
#     def search(self, nums, target):
#         """
#         :type nums: List[int]
#         :type target: int
#         :rtype: int
#         """
#         for i in range(len(nums)):
#             if(nums[i] == target):
#                 return i
#         return -1
        

import math
class Solution(object):
    def search(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        left=0
        right=len(nums)-1
        while left<=right:
          curLen=right-left+1
          half=math.ceil(float(curLen)/2)
          midIndex=int(left+half-1)
          print("left:",left,"right:",right,"mid:",midIndex,"half:",half)
          if(target==nums[midIndex]):
            return midIndex
          if nums[left]<=nums[midIndex] and nums[left]<=target and target<nums[midIndex]:
            print("1")
            right=midIndex-1
          elif nums[midIndex]<=nums[right] and nums[right]>=target and target>nums[midIndex]:
            print("2")
            left=midIndex+1
          elif nums[left]>nums[midIndex]:
            print("3")
            right=midIndex-1
          elif nums[midIndex]>nums[right]:
            print("4")
            left=midIndex+1
          else:
            break
        return -1
      
s=Solution()
print(s.search([1],-1))

# nums[midIndex]<target and target<=nums[right]