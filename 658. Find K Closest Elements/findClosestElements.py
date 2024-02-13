#Best Solution
# class Solution(object):
#     def findClosestElements(self, arr, k, x):
#         """
#         :type arr: List[int]
#         :type k: int
#         :type x: int
#         :rtype: List[int]
#         """
#         #TC: Log(n-k) + k
#         l=0
#         r= len(arr)-k
#         while l<r:
#             m=(l+r)//2
#             if x-arr[m]>arr[m+k]-x:
#                 l=m+1
#             else:
#                 r=m
#         return arr[l:l+k]

class Solution(object):
    def findClosestElements(self, arr, k, x):
        """
        :type arr: List[int]
        :type k: int
        :type x: int
        :rtype: List[int]
        """
        left=0
        right=k-1
        while right<len(arr):
          
          if((right+1)==len(arr)):
            break
          if ((abs(arr[left]-x)>abs(arr[right+1]-x)) or (abs(arr[left]-x)==abs(arr[right+1]-x) and arr[left]>=arr[right+1])):
            print("first",abs(arr[left]-x),":",abs(arr[right+1]-x))
            right+=1
            left+=1
          else:
            print("third")
            return arr[left:right+1]
        print("Done")
        return arr[left:right+1]
      
s=Solution()
print(s.findClosestElements([1,1,1,10,10,10],1,9))
        
        
# class Solution(object):
#     def findClosestElements(self, arr, k, x):
#         """
#         :type arr: List[int]
#         :type k: int
#         :type x: int
#         :rtype: List[int]
#         """
#         left=0
#         right=k-1
#         while right<len(arr):
          
#           if((right+1)==len(arr)):
#             break
#           if (abs(arr[left]-x)>abs(arr[right+1]-x)):
#             print("first",abs(arr[left]-x),":",abs(arr[right+1]-x))
#             right+=1
#             left+=1
#           elif abs(arr[left]-x)==abs(arr[right+1]-x):
#             print("second")
#             if arr[left]>arr[right+1]:
#               print("second-1")
#               right+=1
#               left+=1
#           else:
#             print("third")
#             return arr[left:right+1]
#         print("Done")
#         return arr[left:right+1]
      
# s=Solution()
# print(s.findClosestElements([1,2,3,4,5],4,3))
        