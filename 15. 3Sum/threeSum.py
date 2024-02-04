#best solution
# class Solution(object):
#     def threeSum(self, nums):
#         """
#         :type nums: List[int]
#         :rtype: List[List[int]]
#         """
#         res = []
#         nums.sort()

#         for fixedIdx, fixedVal in enumerate(nums):
#             if fixedIdx > 0 and fixedVal == nums[fixedIdx-1]:
#                 continue

#             l, r = fixedIdx+1, len(nums)-1
#             while l < r:
#                 threeSum  = fixedVal + nums[l] + nums[r]
#                 if threeSum > 0:
#                     r -= 1
#                 elif threeSum < 0:
#                     l += 1
#                     while nums[l] == nums[l-1] and l < r:
#                         l += 1
#                 else:
#                     res.append([fixedVal, nums[l], nums[r]])
#                     l += 1
#                     while nums[l] == nums[l-1] and l < r:
#                         l += 1

#         return res

class Solution(object):
    def threeSum(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        map={}
        cache={}
        ans=[]
        for i in range(len(nums)):
            map[nums[i]]=i
        for i in range(len(nums)):
            for j in range(i+1,len(nums)):
                sum=nums[i]+nums[j]
                nSum=sum*(-1)
                ind=map.get(nSum)
                
                if(ind):
                    if not(ind==i) and not(ind==j):
                      newItem=[nums[i],nums[j],nums[ind]]
                      newItem.sort()
                      if(not(cache.get((newItem[0],newItem[1])))):
                        cache[(newItem[0],newItem[1])]=-1
                        ans.append(newItem)                     
        return ans

# map={"b":1}
# if(not map.get("a")):
#   print("fdafs")

# s=Solution()
# print(s.threeSum([-1,0,1,2,-1,-4]))

