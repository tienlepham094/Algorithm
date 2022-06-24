    def removeElements(self, head, val):
        """
        :type head: ListNode
        :type val: int
        :rtype: ListNode
        """
          def removeElements(self, head, val):
        """
        :type head: ListNode
        :type val: int
        :rtype: ListNode
        """
        if head==None:
            return None # check if linkedlist is null
        
        while head and head.val==val:
            head  = head.next

        # if head not null
        if head:
            cur = head
            while cur.next and cur:
                if cur.next.val == val:
                    cur.next = cur.next.next
                else:
                    cur= cur.next
            return head