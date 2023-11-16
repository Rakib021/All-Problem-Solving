#include<bits/stdc++.h>
using namespace std;

class Stack{
    public:
        int *arr;
        int stack_size;
        int array_cap;

    Stack(){
        arr = new int [1];
        array_cap =1;

        stack_size=0;
    }

    void increase_size(){
        int *tmp;
        tmp = new int [array_cap*2];

        for(int i=0;i<array_cap;i++){
            tmp[i]=arr[i];
        }
        swap(arr,tmp);
        delete tmp;
        array_cap = array_cap*2;
    }
}