#include <iostream>

// array implementation of a stack
class Stack{
    private:
    int top_index;
    int capacity;
    int* arr;

    public:
    // default constructor
    Stack(){
        top_index = 0;
        capacity = 10;
        arr = new int[capacity];

    }

    Stack(int varcapacity){
        top_index = 0;
        capacity = varcapacity;
        arr = new int[capacity];

    }

    void push(int element){
        if(top_index > capacity - 1){
            std::cout << "stack is full\n";
            return;
        }else{
            arr[top_index] = element;
            top_index++;
        }
    }

    int peek(){
        return arr[top_index];
    }

    bool isEmpty(){
        return (top_index == 0);
    }

    int pop(){
        return arr[top_index--];
    }
/*
    int returnindex(){
        return top_index;
    }

    int peekspecific(int i){
        return arr[i];
    }*/

};

int main(){
    Stack teststack;
    teststack.push(1);
    std::cout << teststack.isEmpty() << "\n";
    
    Stack teststack2;
    for(int i = 0; i < 11; i++){
        teststack2.push(i);
        std::cout << "push test " << i << "\n";
    }
   // std::cout << "index is " << teststack2.returnindex() << "\n";
   // std::cout << "peek test " << teststack2.peekspecific(9) << "\n";
    //std::cout << "peek test " << teststack2.peek() << "\n";
    for(int i = 0; i < 11; i++){
        std::cout << teststack2.pop() << "\n";
    }

    return 0;
}