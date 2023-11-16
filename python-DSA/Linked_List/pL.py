class Node :
    def __init__(self):
        self.next = None
        self.prev = None
        self.val = value
        


class DoubleLinkedList:
    def __init__(self):
        self.head = None
        self.tail = None
        self.size =0
        
        
    def add(self,val):
        node = Node(val)
        
        if self.tail is None:
            self.head = node
            self.tail = node
            self.size +=1
            
        else:
            self.tail.next = node
            node.prev = self.tail
            self.tail = node
            self.size +=1
            