# Best Solution
# class Solution(object):
#     def findRightInterval(self, intervals):
#         """
#         :type intervals: List[List[int]]
#         :rtype: List[int]
#         """
#         #decorated = [ (intervals[i][0], intervals[i][1], i) for i in range(len(intervals))]
#         decorated = list (enumerate(intervals) )
#         #print decorated
#         decorated.sort(key = lambda blah: blah[1][0])
#         endlist = sorted(decorated, key = lambda blah:blah[1][1])
#         #decorated.sort(key = itemgetter(0))
#         #endlist = sorted(decorated, key = itemgetter(1))

#         ans = [-1] * len(intervals)
#         left = 0
#         #for (start, end, idx) in endlist:
#         for idx, (start, end) in endlist:
#             target = end
#             right = len(decorated)
#             while left < right:
#                 mid = (left+right)/2
#                 #if decorated[mid][0] < target:
#                 if decorated[mid][1][0] < target:
#                     left = mid+1
#                 else:
#                     right = mid
#             if left < len(decorated):
#                 #ans[idx] = decorated[left][2]
#                 ans[idx] = decorated[left][0]
#         return ans





class Solution(object):
    def getStart(self,interval):
      return interval[0]
    def findRightInterval(self, intervals):
        """
        :type intervals: List[List[int]]
        :rtype: List[int]
        """
        sortedInter=intervals.copy()
        for j in range(len(sortedInter)):
          sortedInter[j].append(j)
        sortedInter.sort(key=self.getStart)
        result=[]
        for i in range(len(intervals)):
          left=0
          right=len(sortedInter)-1
          target=intervals[i][1]
          temp=None
          add=False
          while left<=right:
            midIndex=(right+left)//2
            curStart=sortedInter[midIndex][0]
            temp=midIndex
            if(curStart==target):
              add=True
              result.append(sortedInter[midIndex][2])
              break
            elif (curStart>target):
              right=midIndex-1
            elif (curStart<target):
              left=midIndex+1
          if not(add):
            if(sortedInter[temp][0]>target):
              result.append(sortedInter[temp][2])
            else:
              if(temp==len(sortedInter)-1):
                print("hi")
                result.append(-1)
              else:
                result.append(sortedInter[temp+1][2])
        return result

s=Solution()
print(s.findRightInterval([[1,4],[2,3],[3,4]]))
              
              
            
              