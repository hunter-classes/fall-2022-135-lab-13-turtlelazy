#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

TEST_CASE("TASK A")
{
    CHECK(printRange(-2, 10) == "-2 -1 0 1 2 3 4 5 6 7 8 9 10");
    CHECK(printRange(-2, -2) == "-2");
    CHECK(printRange(-4, -2) == "-4 -3 -2");
    CHECK(printRange(2, 4) == "2 3 4");
}

TEST_CASE("TASK B")
{
    CHECK(sumRange(-2, 10) == 52);
    CHECK(sumRange(-2, -2) == -2);
    CHECK(sumRange(-4, -2) == -9);
    CHECK(sumRange(2, 4) == 9);
}

TEST_CASE("TASK C")
{
    int size = 10;
    int *arr = new int[size];
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
    CHECK(sumArray(arr, size) == 43);
    size = 0;
    arr = new int[size];
    CHECK(sumArray(arr, size) == 0);


    size = 9;
    arr = new int[size];
    arr[0] = 12;
    arr[1] = 17;
    arr[2] = -5;
    arr[3] = 3;
    arr[4] = 7;
    arr[5] = -15;
    arr[6] = 27;
    arr[7] = 5;
    arr[8] = 13;
    CHECK(sumArray(arr, size) == 64);

}

TEST_CASE("TASK D"){
    CHECK(isAlphanumeric("abcd112kjlh21kjg3l21li38y"));
    CHECK(!isAlphanumeric(""));
    CHECK(isAlphanumeric("Abcd1234xyz"));
    CHECK(!isAlphanumeric("KLMN 8-7-6"));
}

TEST_CASE("TASK E"){
    CHECK(nestedParens("((()))"));
    CHECK(nestedParens("()"));
    CHECK(nestedParens(""));
    CHECK(!nestedParens("((("));
    CHECK(!nestedParens("(()"));
    CHECK(!nestedParens(")("));
    CHECK(!nestedParens("a(b)c"));
}

TEST_CASE("TASK F"){
    int size = 9;
    int *prices = new int[size];

    prices[0] = 10;
    prices[1] = 15;
    prices[2] = 12;
    prices[3] = 18;
    prices[4] = 19;
    prices[5] = 17;
    prices[6] = 13;
    prices[7] = 35;
    prices[8] = 33;
    CHECK(divisible(prices, size));

    size = 9;
    prices = new int[size];
    prices[0] = 10;
    prices[1] = 15;
    prices[2] = 12;
    prices[3] = 18;
    prices[4] = 19;
    prices[5] = 17;
    prices[6] = 13;
    prices[7] = 35;
    prices[8] = 34;
    CHECK(!divisible(prices, size));

    size = 3;
    prices = new int[size];
    prices[0] = 1;
    prices[1] = 2;
    prices[2] = 3;
    CHECK(divisible(prices, size));

    size = 0;
    prices = new int[size];
    CHECK(divisible(prices, size));


}