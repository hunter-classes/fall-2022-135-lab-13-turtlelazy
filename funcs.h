#pragma once
#include <string>

std::string printRange(int left, int right);
int sumRange(int left, int right);
int sumArray(int *arr, int size);
int sumArrayInRange(int *arr, int left, int right);
bool isAlphanumeric(std::string s);
bool nestedParens(std::string s);
bool nestedParensHelper(std::string s,int count);
bool divisible(int *prices, int size);
bool divisibleHelper(int *prices, int size, int left_sum, int right_sum, int index);