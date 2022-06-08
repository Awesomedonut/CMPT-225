#include <iostream>

int iterative(int size, int target, int* arr){
    for(int i = 0; i < size; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}

int recursive(int target, int* arr, int i){
    if(arr[i] == target){
        return i;
    }else{
        return recursive(target, arr, i+1);
    }
    //if(found)

    //else recursive(int size-1, int target, int* arr)
    return 0;
}

int main(){
    int arr[6] = {1, 5, 6, 2, 0, 5};
    std::cout << iterative(6, 0, arr) << "\n";
    std::cout << recursive(0, arr, 0);

    return 0;
}