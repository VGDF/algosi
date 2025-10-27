#include <gtest/gtest.h>
#include "../include/bubble_sort.h"

TEST(BubbleSortTest, EmptyArray) {
    int arr[1] = {};
    int n = 0;
    bubbleSort(arr, n);
    EXPECT_EQ(n, 0);
}

TEST(BubbleSortTest, SingleElementArray) {
    int arr[1] = {1};
    int n = 1;
    bubbleSort(arr, n);
    EXPECT_EQ(arr[0], 1);
}

TEST(BubbleSortTest, AlreadySortedArray) {
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;
    bubbleSort(arr, n);
    EXPECT_EQ(arr[0], 1);
    EXPECT_EQ(arr[1], 2);
    EXPECT_EQ(arr[2], 3);
    EXPECT_EQ(arr[3], 4);
    EXPECT_EQ(arr[4], 5);
}

TEST(BubbleSortTest, ReverseSortedArray) {
    int arr[5] = {5, 4, 3, 2, 1};
    int n = 5;
    bubbleSort(arr, n);
    EXPECT_EQ(arr[0], 1);
    EXPECT_EQ(arr[1], 2);
    EXPECT_EQ(arr[2], 3);
    EXPECT_EQ(arr[3], 4);
    EXPECT_EQ(arr[4], 5);
}

TEST(BubbleSortTest, RandomArray) {
    int arr[11] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
    int n = 11;
    bubbleSort(arr, n);
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
