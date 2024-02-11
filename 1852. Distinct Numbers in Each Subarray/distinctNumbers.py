class Solution(object):
    def distinctNumbers(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: List[int]
        """
        left=0
        right=0
        map={}
        ans=[]
        for i in range(k):
          map[nums[i]]=map.get(nums[i],0)+1
        ans.append(len(map))
        right=k
        left=1
        while right<len(nums):
          map[nums[right]]=map.get(nums[right],0)+1
          if(map[nums[left-1]]==1):
            del map[nums[left-1]]
          else:
            map[nums[left-1]]=map[nums[left-1]]-1
          right+=1
          left+=1
          ans.append(len(map))
        return ans
        
# a=[]
# a.append("dsa")
# a.append("rerq")
# print(a)
s=Solution()
print(s.distinctNumbers([1,1,1,1,2,3,4],4))
        