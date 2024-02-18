# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

# One of The Best Solution
# class Solution(object):
#     def getIntersectionNode(self, headA, headB):
#         """
#         :type head1, head1: ListNode
#         :rtype: ListNode
#         """
#         dummy_headA = ListNode(next=headA)
#         dummy_headB = ListNode(next=headB)
#         sizeA, sizeB = 0, 0
#         tmpA, tmpB = dummy_headA, dummy_headB
#         while tmpA.next:
#             sizeA += 1
#             tmpA = tmpA.next
#         while tmpB.next:
#             sizeB += 1
#             tmpB = tmpB.next
        
#         curA, curB = dummy_headA, dummy_headB
#         if sizeA > sizeB:
#             for _ in range(sizeA - sizeB):
#                 curA = curA.next
#         else:
#             for _ in range(sizeB - sizeA):
#                 curB = curB.next
        
#         while curA != curB:
#             curA = curA.next
#             curB = curB.next
        
#         return curA

class ListNode(object):
    def __init__(self, x):
        self.val = x
        self.next = None
class Solution(object):
    def getIntersectionNode(self, headA, headB):
        """
        :type head1, head1: ListNode
        :rtype: ListNode
        """
        mapA={}
        curA=headA
        mapA[curA.val]=True
        while(curA.next):
          curA=curA.next
          mapA[curA.val]=True
        
        curB=headB
        if(mapA.get(curB.val,False)):
          return curB.val
        while(curB.next):
          curB=curB.next
          if(mapA.get(curB.val,False)):
            return curB.val
        return None
          