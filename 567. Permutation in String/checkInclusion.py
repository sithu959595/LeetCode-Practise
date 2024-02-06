# class Solution(object):
#     def checkInclusion(self, s1, s2):
#         """
#         :type s1: str
#         :type s2: str
#         :rtype: bool
#         """
#         map={}
        
#         for i in range(len(s1)):
#           map[s1[i]]=map.get(s1[i],0)+1
#         # print(map)
        
#         right=0
#         left=0
#         cha=""
#         while right<len(s2):
#           print("right:",right,"cha:",cha,",left:",left)
#           print(map)
#           if not(cha==""):#need to move left
#             if(s2[left]==cha): #"reach cha"
#               left+=1
#               right+=1
#               cha=""
#               continue
#             else: #not reach cha yet
#               map[s2[left]]=map.get(s2[left],0)+1
#               left+=1
#               continue
#           if s2[right] in map:
#             if(map[s2[right]]==1):
#               del map[s2[right]]
#             else:
#               map[s2[right]]-=1
#             right+=1
#             if len(map)==0:
#               return True
#           else:
#             #need to move left till find cha
#             cha=s2[right]
#         return False    

            
class Solution(object):
  def checkInclusion(self, s1, s2):
        map={}
        if(len(s2)<len(s1)):
          return False
        for i in range(len(s1)):
          map[s1[i]]=map.get(s1[i],0)+1
        
        check={}
        left=0
        right=len(s1)-1
        for i in range(len(s1)):
          check[s2[i]]=check.get(s2[i],0)+1
        print(check)
        if(map==check):
            return True
        while right<len(s2):
          print("lfet:",left)
          if(check[s2[left]]==1):
            del check[s2[left]]
            left+=1
          else:
            check[s2[left]]-=1
            left+=1
          right+=1
          if(right<len(s2)):
            check[s2[right]]=check.get(s2[right],0)+1 
          if(map==check):
            return True
        return False
        
        
          
          
        
        
        
          
        
# map={"a":10}
# map1=map
# print(len(map1))
# map1={"a":1}
# map2={"a":1}
# print(map1.get("b","no dfd"))
# if map1==map2:
#   print("the same")

s=Solution()
print(s.checkInclusion("ab","eidboaoo"))