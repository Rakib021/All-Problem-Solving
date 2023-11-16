from linkedList import DoubleLinkedList

class Stack:
    def __init__(self):
        self.__list = DoubleLinkedList()

    def push(self,val):
        return self.__list.add(val)
    def pop(self):
        val = self.__list.back()
        self.__list.remove_last()
        return val
    
    def is_empty(self):
        return self.__list.size ==0
    
    def peek(self):
        return self.__list.back()
    
    def __len__(self):
        return self.__list.size
    
    
    
myStack = Stack()
myStack.push(1)
myStack.push(3)
myStack.push(5)
myStack.push(8)
myStack.push(21)
myStack.push(54)
myStack.push(31)
print(len(myStack))
print(myStack.peek())

print(myStack.pop())
print(len(myStack))
print(myStack.peek())
