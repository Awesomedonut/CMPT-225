#include <iostream>

//array implementation of a queue

class Queue{

    private:
    int front;
    int back;
    int* arr;
    int capacity;

    public:
    Queue(){
        capacity = 10;
        arr = new int[capacity];
        front = 0;
        back = 0;
    }

    void enqueue(int element){
        if(back > capacity - 1){
            std::cout << "overflow error\n";
            return;
        }else{
            arr[back] = element;
            back++;
        }
        
    }

    int dequeue(){
        return arr[front++];
    }

    bool isEmpty(){
        return (front == back);
    }
};

int main(){
    Queue testqueue;
    testqueue.enqueue(2);
    std::cout << testqueue.dequeue();
    return 0;
}