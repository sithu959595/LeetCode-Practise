#Best Solution()
# class Solution(object):
#     def lengthOfLongestSubstring(self, s):
#         """
#         :type s: str
#         :rtype: int
#         """
#         if len(s) <= 1:
#             return len(s)

#         max_l = 1
#         start,end = 0,1

#         seen = collections.defaultdict(int)

#         while start <= len(s) and end <= len(s):
#             cur_char = s[end-1]
#             # print('*******')
#             # print('start',start)
#             # print('end',end)
#             # print('cur_char',cur_char)
#             # print('seen',seen)
#             # print('max_l',max_l)
#             if cur_char in seen and start <= seen[cur_char]:
#                 start = seen[cur_char] + 1
#             else:
#                 max_l = max(max_l, end - start)
#             seen[cur_char] = end - 1
#             end += 1
            

#         return max_l




            



class Solution(object):
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        left=0
        right=0
        length=0
        max=0
        map={}
        while(right<len(s)):
          # print(map)
          if not(map.get(s[right])==None): #repeat
            left=map.get(s[right])+1
            right=map.get(s[right])+1
            map={}
            length=0
          else: #not repeat.Go to Next character
            # print(s[right])
            map[s[right]]=right
            right+=1
            length+=1
            if(max<length):
              max=length
        return max
      
s=Solution()
print(s.lengthOfLongestSubstring("pwwkew"))
            
            
          
# map={"a":12}
# if "a" in map:
#   print("NNN")
