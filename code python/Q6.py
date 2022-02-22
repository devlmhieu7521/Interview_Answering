class Node:
    def __init__(self, val=None):
        self.val = val
        self.next = None
class LinkedList:
    def __init__(self):
        self.head = None
    
    def push(self,data):
        new_node = Node(data)
        new_node.next=self.head
        self.head = new_node


    def printList(self):
        temp = self.head
        while(temp):
            print(temp.val , end = ' ')
            temp = temp.next
    def Q6(self):
        cur = self.head
        if cur == None:
            return
        while cur.next != None:
            if cur.val == cur.next.val:
                next = cur.next.next
                cur.next = None
                cur.next = next
            else:
                cur = cur.next
        return cur

if __name__ == "__main__":
    list = LinkedList()
    list.push(1)
    list.push(2)
    list.push(2)
    list.Q6()
    list.printList()
    
