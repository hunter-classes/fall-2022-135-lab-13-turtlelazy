#include "funcs.h"
#include <string>

//Task A
std::string printRange(int left, int right){
    if (left == right){
        return std::to_string(left);
    }
    
    return std::to_string(left) + " " + printRange(left+1,right);
}

//Task B
int sumRange(int left, int right){
        if (left == right){
        return (left);
    }
    
    return (left) + sumRange(left+1,right);
}

//Task C

int sumArray(int *arr, int size){
    return sumArrayInRange(arr, 0,size-1);
}
int sumArrayInRange(int *arr, int left, int right){
    if(left == right){
        return arr[left];
    }
    else{
        return arr[left] + sumArrayInRange(arr,left+1,right);
    }
}