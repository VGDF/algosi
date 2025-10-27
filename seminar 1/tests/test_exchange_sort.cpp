#include <gtest/gtest.h>
#include "../include/exchange_sort.h"

TEST(ExchangeSortTest, EmptyArray) {
    int arr[1] = {};
    int n = 0;
    exchangeSort(arr, n);
    EXPECT_EQ(n, 0);
}

TEST(ExchangeSortTest, SingleElementArray) {
    int arr[1] = {1};
    int n = 1;
    exchangeSort(arr, n);
    EXPECT_EQ(arr[0], 1);
}

TEST(ExchangeSortTest, AlreadySortedArray) {
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;
    exchangeSort(arr, n);
    EXPECT_EQ(arr[0], 1);
    EXPECT_EQ(arr[1], 2);
    EXPECT_EQ(arr[2], 3);
    EXPECT_EQ(arr[3], 4);
    EXPECT_EQ(arr[4], 5);
}

TEST(ExchangeSortTest, ReverseSortedArray) {
    int arr[5] = {5, 4, 3, 2, 1};
    int n = 5;
    exchangeSort(arr, n);
    EXPECT_EQ(arr[0], 1);
    EXPECT_EQ(arr[1], 2);
    EXPECT_EQ(arr[2], 3);
    EXPECT_EQ(arr[3], 4);
    EXPECT_EQ(arr[4], 5);
}

TEST(ExchangeSortTest, RandomArray) {
    int arr[11] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
    int n = 11;
    exchangeSort(arr, n);
    EXPECT_EQ(arr[0], 1);
    EXPECT_EQ(arr[1], 1);
    EXPECT_EQ(arr[2], 2);
    EXPECT_EQ(arr[3], 3);
    EXPECT_EQ(arr[4], 3);
    EXPECT_EQ(arr[5], 4);
    EXPECT_EQ(arr[6], 5);
    EXPECT_EQ(arr[7], 5);
    EXPECT_EQ(arr[8], 5);
    EXPECT_EQ(arr[9], 6);
    EXPECT_EQ(arr[10], 9);
}
