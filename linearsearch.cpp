#include <iostream>

int iterative(int size, int target, int* arr){
    for(int i = 0; i < size; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}

int recursive(int size, int target, int* arr){
    return 0;
}

int main(){
    int arr[6] = {1, 5, 6, 2, 0, 5};
    iterative(6, 0, arr);
    return 0;
}