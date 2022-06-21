#include <iostream>

//LL implementation of a stack

class Node{
public:
    Node* next;
    int data;

Node(){
    next = nullptr;
}

};

class Stack{

private:
Node* top;

public:

Stack(){
    top = nullptr;
}

void push(int input){
    Node* newNode = new Node();
    newNode->data = input;
    newNode->next = top;

}

int pop(){
    Node* tempNode = top;
    int temp = top->data;
    return temp;
}

int peek(){
    return 3;
    //return top->data;
}

};

int main(){
    Stack teststack;
    teststack.push(7);
    std::cout << teststack.peek();
}