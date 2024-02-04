#Best Solution
# class Solution1(object):
#     def isOneEditDistance(self, s, t):
#         """
#         :type s: str
#         :type t: str
#         :rtype: bool
#         """

#         is_one_edit_apart = False

#         if abs(len(s) - len(t)) <= 1:
#             # do something
#             index_s = 0
#             index_t = 0
#             replacements = 0

#             while index_s < len(s) and index_t < len(t) and replacements <= 1:
#                 print(index_s,":",index_t)
#                 if s[index_s] == t[index_t]:
#                     index_s += 1
#                     index_t += 1
#                 else:
#                     if replacements >= 1:
#                         break

#                     replacements += 1

#                     if len(s) == len(t):
#                         index_s += 1
#                         index_t += 1
#                     elif len(s) < len(t):
#                         index_t += 1
#                     else:
#                         index_s += 1

#             if index_t < len(t) or index_s < len(s):
#                 replacements += 1

#             if replacements == 1:
#                 is_one_edit_apart = True

#         return is_one_edit_apart
        

class Solution(object):
    
    def isOneEditDistance(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """   
      
        return check(0,0,s,t,True)

def check(sPointer,tPointer,s,t,chance):
    print("******current",sPointer,":",tPointer)
    curS="" if sPointer>=len(s) else s[sPointer]
    curT="" if tPointer>=len(t) else t[tPointer]
    if(sPointer==len(s) and tPointer==len(t)):
        print("same")
        if(chance):
            return False
        return True
    # if(sPointer>=len(s) and tPointer<len(t)):      
    #     return False
    # if(sPointer<len(s) and tPointer>=len(t)):  
    #     return False
    if curS==curT:
        return check(sPointer+1,tPointer+1,s,t,chance)
    elif chance:
        result=check(sPointer+1,tPointer,s,t,False) or check(sPointer,tPointer+1,s,t,False) or check(sPointer+1,tPointer+1,s,t,False)
        # print("result is",result)
        return result
    else:
        return False                 


            
  

s=Solution1()
print(s.isOneEditDistance("teacher","teach"))

