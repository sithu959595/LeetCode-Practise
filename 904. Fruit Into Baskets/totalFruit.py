# class Solution(object):
#     def totalFruit(self, fruits):
#         """
#         :type fruits: List[int]
#         :rtype: int
#         """
#         r=0
#         l=0
#         d={}
#         n=len(fruits)
#         maxi=0
#         while(r<n):
#             if fruits[r] not in d:
#                 d[fruits[r]]=1
#             else:
#                 d[fruits[r]]+=1
#             while(len(d)>2):
#                 d[fruits[l]]-=1
#                 if d[fruits[l]]==0:
#                     del d[fruits[l]]
#                 l+=1
#             maxi=max(maxi,r-l+1)
#             r+=1
#         return maxi
        

        

from input import input
print(input)
class Solution(object):
    def totalFruit(self, fruits):
        """
        :type fruits: List[int]
        :rtype: int
        """
        left=0
        right=0
        map={}
        count=0
        result=0
        moveLeft=False
        while right<len(fruits):
          print("left:",left,",right:",right,"map:",map)
          if moveLeft:#process on left pointer
            if(map.get(fruits[left])==1):
              del map[fruits[left]]
              moveLeft=False
            else:
              map[fruits[left]]-=1
            count-=1
            left+=1
          else:
            # print("1left:",left,",1right:",right,"1map:",map)
            # print("**",fruits[right])
            if not(fruits[right] in map) and (len(map)==2):
              moveLeft=True
              continue
            else:
              map[fruits[right]]=map.get(fruits[right],0)+1
              count+=1
              result=max(result,count)
              right+=1
        return result
      
s=Solution()
print(s.totalFruit(input))
              
              
  
  
  
  
      # if len(map)>2:#process on left pointer
      #       if(map.get(fruits[left])==1):
      #         del map[fruits[left]]
      #       else:
      #         map[fruits[left]]-=1
      #       count-=1
      #       left+=1
      #     else:
      #       if not(fruits[right] in map) and (len(map)==2):
      #         continue
      #       else:
      #         map[fruits[right]]=map.get(fruits[right],0)+1
      #         count+=1
      #         result=max(result,count)
      #         right+=1