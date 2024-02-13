import math

class Solution(object):
    def toTwoD(self,num,size):
      de=num%size
      mul=math.floor(num/size)
      return [int(mul),int(de)]
    def toOneD(self,row,column,size):
      return (size*row)+column
    def searchMatrix(self, matrix, target):
        """
        :type matrix: List[List[int]]
        :type target: int
        :rtype: bool
        """
        left1=0
        right1=(len(matrix)*len(matrix[0]))-1
        size=len(matrix[0])
        while left1<=right1:
          length=right1-left1+1
          half=math.ceil(length/2)
          midIndex1=left1+half-1
          print("left:",left1," right:",right1," midIndex:",midIndex1)
          [row,col]=self.toTwoD(midIndex1,size)
          if(target<matrix[row][col]):
            print("small",matrix[row][col])
            right1=midIndex1-1
          elif (target>matrix[row][col]):
            print("big")
            left1=midIndex1+1
          elif (target==matrix[row][col]):
            return True
        return False
            
              
        


s=Solution()
print(s.searchMatrix([[1,3,5,7],[10,11,16,20],[23,30,34,60]],3))

# print(math.floor(8%5))