from linkedList import DoubleLinkedList

class Queue:
    def __init__(self):
        self.__list = DoubleLinkedList()
        
    def enqueue(self,val):
        return self.__list.add(val)
    
    def dequeue(self):
        val = self.__list.front()
        self.__list.remove_first()
        return val
    
    def front(self):
        return self.__list.front()
    
    def __len__(self):
        return self.__list.size()