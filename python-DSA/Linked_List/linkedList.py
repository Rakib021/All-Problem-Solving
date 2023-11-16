class Node:
    def __init__(self,value):
        self.val = value
        self.next =None
        self.prev = None
        
        
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
            
        else:                       #eta maneh tail none na...akne at least ekta node ache
            self.tail.next = node  #previous j node ta chilo etar next node hobe newNode
            node.prev = self.tail  #new node er previous hobe purono j node ta chilo seta tail[karon ata doubly linked list]
            self.tail = node      #tarpor update kore dibo j new node create korsi seta hobe akn tail
            self.size +=1
    
    def __remove_node(self,node):
        if node.prev is None:
            self.head = node.next
        else:
            node.prev.next = node.next
        
        if node.next is None:
            self.tail = node.prev
            
        else:
            node.next.prev = node.prev
            
        self.size -=1
        
    
    def remove(self,value):
        node = self.head
        while node is not None:
            if node.val ==value:
                self.__remove_node(node)
                break
            node = node.next      
    
    def remove_first(self):
        if self.head is not None:
            self.__remove_node(self.head)
    def remove_last(self):
        if self.tail is not None:
            self.__remove_node(self.tail)  
    def front(self):
        return self.head.val
        
    def back(self):
        return self.tail.val
    
    def __str__(self):
        vals =[]
        node = self.head
        while node is not None:
            vals.append(node.val)
            node = node.next
        return f"[{','.join(str(val) for val in vals)}]"
            
# myList  = DoubleLinkedList()
# myList.add(2)
# myList.add(4)
# myList.add(1)
# myList.add(7)
# myList.add(10)
# print(myList)

# myList.remove_last()
# print(myList)
# myList.remove_last()
# print(myList)

# print("size",myList.size)
            
            