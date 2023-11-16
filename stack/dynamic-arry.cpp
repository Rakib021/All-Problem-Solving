#include <bits/stdc++.h>
using namespace std;


class Stack
{
public:
    
    int *arr;
    int stack_size;
    int array_cap ;
    Stack()
    {
        arr = new int [1];
        array_cap=1;

        stack_size = 0;
    }
//makes the array cap multiplied by 2
    void increase_size(){
        int *tmp;
        tmp = new int [array_cap*2];

        for(int i=0;i<array_cap;i++)
                tmp[i] = arr[i];
        swap(arr,tmp);
        delete []tmp;
        array_cap =array_cap*2;


    }




    // add an element in the stack
    void push(int val)
    {

        if (stack_size + 1 > array_cap)
        {
           increase_size();
        }
        stack_size = stack_size + 1;

        arr[stack_size - 1] = val;
    }
    // delete the topmost element from the stack
    void pop()
    {
        if (stack_size == 0)
        {
            cout << "stack is empty\n";
            return;
        }
        arr[stack_size - 1] = 0;
        stack_size = stack_size - 1;
    }

    //returns the top element from the stack

    int top(){
        if (stack_size == 0)
        {
            cout << "stack is empty\n";
            return -1;
        }
        return arr[stack_size-1];
    }
};

int main()
{
    Stack st;
    st.push(4);
    cout<<st.top()<<"\n";
    st.push(2);
    cout<<st.top()<<"\n";
    st.push(1);
    cout<<st.top()<<"\n";
    st.push(6);
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";
}