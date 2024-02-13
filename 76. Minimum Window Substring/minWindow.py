class Solution(object):
    def isEqua(self,origin,search):
      for i in origin:
        if origin[i]>search.get(i,float("-inf")):
          return False
      return True
    def minWindow(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: str
        """
        search={}
        origin={}
        minWindow=""
        right=0
        left=0
        queue=[]
        
        for i in range(len(t)):
          origin[t[i]]=origin.get(t[i],0)+1
        # search=origin.copy()
        
        while left<len(s):
          if s[left] in origin:
            search[s[left]]=search.get(s[left],0)+1
            queue.append((s[left],left))
            break
          else:
            left+=1
        right=left
        if(right<len(s)-1):
          right+=1
        if(s[right] in origin):
          queue.append((s[right],right))
          search[s[right]]=search.get(s[right],0)+1
        if(self.isEqua(origin,search)):
              print("same")
              curLen=right-left
              if(curLen<len(minWindow)) or len(minWindow)==0:
                minWindow=s[left:right]
                print("update minWindow",minWindow)
        print(left,queue,search)
        while left<right:
          print("left:",left," ,right:",right," search:",search," queue:",queue)
          if not(self.isEqua(origin,search)): #move right
            # print("Right",right,s)
            if(right<len(s)-1):
              right+=1
            if(s[right] in origin):
              queue.append((s[right],right))
              search[s[right]]=search.get(s[right],0)+1
            # #update window
            # if(self.isEqua(origin,search)):
            #   curLen=right-left
            #   if(curLen<len(minWindow)) or len(minWindow)==0:
            #     minWindow=s[left:right]
            #     print("update minWindow",minWindow)
          else: 
            print("Left")
            #update window
            curLen=right-left+1
            if(curLen<len(minWindow)) or len(minWindow)==0:
              minWindow=s[left:right+1]
              print("update minWindow",minWindow)
            #move left
            first=queue.pop(0)[0]
            if first in search:
              if search[s[left]]==1:
                del search[s[left]]
              else:
                search[s[left]]-=1
            if(len(queue)>0):
              left=queue[0][1]
            if(self.isEqua(origin,search)):
              curLen=right-left+1
              if(curLen<len(minWindow)) or len(minWindow)==0:
                minWindow=s[left:right+1]
                print("update minWindow",minWindow)
              
        return minWindow
            
     


# class Solution(object):
#     def minWindow(self, s, t):
#         """
#         :type s: str
#         :type t: str
#         :rtype: str
#         """
#         search={}
#         origin={}
#         minWindow=""
#         right=0
#         left=0
#         queue=[]
        
#         for i in range(len(t)):
#           origin[t[i]]=origin.get(t[i],0)+1
#         search=origin.copy()
        
#         while left<len(s):
#           if s[left] in search:
#             if search[s[left]]==1:
#               del search[s[left]]
#             else:
#               search[s[left]]-=1
#             queue.append((s[left],left))
#             break
#           else:
#             left+=1
        
#         right=left+1
#         while right<len(s):
#           print("left:",left," ,right:",right," search:",search," queue:",queue," origin:",origin)
#           if not(len(search)==0): #search is not empty yet. So,move right
#             if s[right] in origin:
#                 #put it on queue
#                 queue.append((s[right],right))
#             if s[right] in search: #find one from search
#               #delete that from search
#               if search[s[right]]==1:
#                 del search[s[right]]
#               else:
#                 search[s[right]]-=1
              
#             right+=1
#             #update window
#             if(len(search)==0):
#               curLen=right-left
#               if(curLen<len(minWindow)) or len(minWindow)==0:
#                 minWindow=s[left:right]
#                 print("update minWindow",minWindow)
#           else: # search is empty. Move Left
#             #move left
#             search[queue.pop(0)[0]]=1
#             left=queue[0][1]
#         return minWindow
            
              
            
          
          
      
      
# a=[]
# a.append("a")
# a.append("b")
# a.append("c")
# print(a.pop())
# print(a)

# b=[("a",2),("b",3)]
# print(b.pop(0)[1])

# map={}
# map["a"]=1
# map["b"]=1
# map1={}
# map1["a"]=1
# map1["b"]=1
# map1["c"]=1
# if map==map1:
#   print("there")

# s=Solution()
# print(s.minWindow("ADOBECODEBANC","ABC"))
