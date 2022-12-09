#include "funcs.h"
#include <string>

std::string printRange(int left, int right){
    if (left == right){
        return std::to_string(left);
    }
    
    return std::to_string(left) + " " + printRange(left+1,right);
}

