# merge two sorted lists
# using linkedlist

# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def mergeTwoLists(self, list1, list2):
        """
        :type list1: Optional[ListNode]
        :type list2: Optional[ListNode]
        :rtype: Optional[ListNode]
        """
        list = ListNode()
        dummy = list
        while list1 and list2:
        	
            if list1.val > list2.val:
                dummy.next = list2
                list2 = list2.next

            else:
                dummy.next = list1
                list1= list1.next
            dummy = dummy.next #change the pointer location

        if list1:
            dummy.next = list1

        if list2:
            dummy.next = list2

        return list.next