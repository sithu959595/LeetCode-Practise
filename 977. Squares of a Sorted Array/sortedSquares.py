class Solution(object):
    def sortedSquares(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        for i in range(len(nums)):
            nums[i]=nums[i]*nums[i]
        nums.sort()
        # print(nums)
        return nums
            

    

s=Solution()

nums = [-4,-1,0,3,10]
nums1=[-7,-3,2,3,11]
print(s.sortedSquares(nums1))