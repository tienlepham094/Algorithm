class Solution(object):
    def hasCycle(self, head):
        list= set()
        while head:
            if head in list:
                return True
				#Checking if there is any node repeat in the list
            else:
                list.add(head)
				#Keeping the record of all the node
                head=head.next
        return False