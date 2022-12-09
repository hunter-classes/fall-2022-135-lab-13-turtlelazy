#include <iostream>
#include "funcs.h"

int main(){
    std::cout << "printRange from -2 to 10: " << printRange(-2, 10) << "\n";
    std::cout << "sumRange from -2 to 10: " << sumRange(-2, 10) << "\n";int size = 10;

    int *arr = new int[size]; // allocate array dynamically
    arr[0] = 12;
    arr[1] = 17;
    arr[2] = -5;
    arr[3] = 3;
    arr[4] = 7;
    arr[5] = -15;
    arr[6] = 27;
    arr[7] = 5;
    arr[8] = 13;
    arr[9] = -21;

    std::cout << "sumArray on array arr " << sumArray(arr, size) << "\n";  // Sum is 43
    std::cout << "isAlphanumeric(\"ABCD\"):" << isAlphanumeric("ABCD") << "\n";        // true (1)
    std::cout << "isAlphanumeric(\"KLMN 8-7-6\"):" << isAlphanumeric("KLMN 8-7-6") << "\n";        // true (1)
    std::cout << "nestedParens(\"((()))\"): " << nestedParens("((()))") << "\n";
    std::cout << "nestedParens(\"(((\"): " << nestedParens("(((") << "\n";
    int divisible_prices [] = {10, 15, 12, 18, 19, 17, 13, 35, 33};
    std::cout << "Is the array divisible_prices divisible? " << divisible(divisible_prices,size) << "\n";
    int notdivisible_prices [] = {1,1,1,1,1};
    std::cout << "Is the array notdivisible_prices divisible? " << divisible(notdivisible_prices,size) << "\n";


    return 0;
}