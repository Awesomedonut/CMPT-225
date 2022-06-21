#include <iostream>

//array implementation of a queue

class Queue{

    private:
    int front;
    int back;
    int* arr;
    int capacity;
    int nums;

    public:
    Queue(){
        capacity = 10;
        nums = 0;
        arr = new int[capacity];
        front = 0;
        back = 0;
    }

    void enqueue(int element){
        if(isFull()){
            std::cout << "error\n";
            return;
        }else{
            back = (front + nums) % capacity;
            arr[back] = element;
            nums++;
            std::cout << "enqueue successful\n";
            if(back == capacity - 1){
                back = 0;
            }else{
                back++;
            }
            
        }
        
    }

    int dequeue(){
        if(isEmpty()){
            //throw std::out_of_range("queue is empty");
            std::cout << "empty\n";
        }else{
            nums--;
            return arr[front++];
        }
    
    }

    bool isFull(){
        return (front == back && nums != 0);
    }

    bool isEmpty(){
        return (nums == 0);
    }

    void print(int choice){
        if(choice == 1){
            std::cout << "front is " << front << "\n";
        }else{
            std::cout << "back is " << back << "\n";
        }
    }
};

int main(){
    Queue testqueue;
    testqueue.enqueue(2);
    std::cout << testqueue.dequeue();

    Queue testqueue2;
    for(int i = 0; i < 5; i++){
        testqueue2.enqueue(i);
    }

    testqueue2.print(1);
    testqueue2.print(2);

    for(int i = 0; i < 5; i++){
        std::cout << testqueue2.dequeue() << "\n";
    }

    testqueue2.print(1);
    testqueue2.print(2);
    testqueue2.enqueue(34);
    testqueue2.print(2);

    return 0;
}