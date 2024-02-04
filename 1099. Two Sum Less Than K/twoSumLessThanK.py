class Solution(object):
    def twoSumLessThanK(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        max=-1
        start=0
        end=0
        for i in range(len(nums)):
            for j in range(i+1,len(nums)):
                sum=nums[i]+nums[j]
                if(sum<k and sum>max):
                    start=i
                    end=j
                    max=sum
        print(start)
        print(",")
        print(end)
        return max
                    
                
            

s=Solution()
result=s.twoSumLessThanK([34,23,1,24,75,33,54,8],60)

print(result)
                
        
#Best solution
# class Solution(object):
#     def twoSumLessThanK(self, nums, k):
#         """
#         :type nums: List[int]
#         :type k: int
#         :rtype: int
#         """
#         nums.sort()
#         res = -1
#         left, right = 0, len(nums)-1
#         while left < right:
#             tmp = nums[left] + nums[right]
#             if tmp < k:
#                 res = max(res, tmp)
#                 left += 1
#             elif tmp >= k:
#                 right -= 1
#         return res