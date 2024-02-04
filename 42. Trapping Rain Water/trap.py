class Solution(object):
    def trap(self, height):
        """
        :type height: List[int]
        :rtype: int
        """
        if(len(height)<3):
            return 0
        water=0
        left=0
        right=len(height)-1
        lBoundry=0
        rBoundry=0
        level=0
        #skip zero
        # while height[left]==0:
        #     left+=1
        # while height[right]==0:
        #     right-=1
        #calculate water
        water+=(right-left-1)*min(height[left],height[right])
        level=min(height[left],height[right])
        print("water",water)
        print("level",level)
        print(left,":",right)
        #move small boundry
        # if(height[left]<height[right]):
        #     left+=1
        # else:
        #     right-=1
        while left<right:     
            #new pointer is smaller than both boundry
            # if height[pointer]<height[left] and height[pointer]<height[right]:
            #     water-=height[pointer]
            # elif height[pointer]>=
                
            #moving smaller boundry
            if(height[left]<height[right]):
                # old=height[left]
                left+=1
                if(right==left):
                    continue
                #smaller than both
                if(height[left]<level):
                    water-=height[left]
                elif(height[left]>=level): #bigger than one
                    water-=level
                    dis=right-left-1
                    water+=(min(height[left],height[right])-level)*dis
                    level=min(height[left],height[right])         
            else:
                right-=1
                if(right==left):
                    continue
                # old=height[right]
                #smaller than both
                if(height[right]<level):
                    water-=height[right]
                elif(height[right]>=level): #bigger than one
                    water-=level
                    dis=right-left-1
                    water+=(min(height[left],height[right])-level)*dis
                    level=min(height[left],height[right])
        return water
   
s=Solution()
print(s.trap([0]))
                 

            
