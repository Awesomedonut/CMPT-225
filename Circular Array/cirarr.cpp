#include <iostream>

class CircularArray{
    private:
    int front;
    int back;
    int* arr;

    public:
    CircularArray(){ //default capacity is 10
        arr = new int[10];
    }

    CircularArray(int capacity){
        arr = new int[capacity];
    }

    void insert(int value){
        arr[front - 1] = value;
        front++;
    }

    int remove();

};

int main(){
    std::cout << "test";
    return 0;
}