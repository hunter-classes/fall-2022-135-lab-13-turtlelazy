#include "funcs.h"
#include <string>
#include <cctype>

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
    if(size == 0){
        return 0;
    }
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

//Task D
bool isAlphanumeric(std::string s){
    if(s.length() == 0){
        return false;
    }
    if(s.length() == 1){
        return std::isalnum(s.at(0));
    }
    return std::isalnum(s.at(0)) && isAlphanumeric(s.substr(1,s.length()-1));
}

//Task E
bool nestedParens(std::string s){
    return nestedParensHelper(s,0);
}

bool nestedParensHelper(std::string s, int count){
    if(s.length() == 0){
        return true;
    }

    if(s.length() == 1){
        if(s.at(0) == ')'){
            count -= 1;
            return count == 0;
        }
        return false;
    }

    else{
        if(s.at(0) == ')'){
            count -= 1;
        }
        else if(s.at(0) == '('){
            count += 1;
        }
        else{
            return false;
        }
    }
    return nestedParensHelper(s.substr(1,s.length()-1),count);
}

//Task F
bool divisible(int *prices, int size){
    return divisibleHelper(prices, size, 0, 0, 0);
}

bool divisibleHelper(int *prices, int size, int left_sum, int right_sum, int index){
    if(index == size){
        return left_sum == right_sum;
    }
    return divisibleHelper(prices, size, left_sum + prices[index], right_sum, index+1) || divisibleHelper(prices, size, left_sum, right_sum + prices[index], index+1);
}