#define CATCH_CONFIG_MAIN
#include "../Catch2-devel/single_include/catch2/catch.hpp"
#include "../include/exchange_sort.h"

// Test cases for exchangeSort
TEST_CASE("ExchangeSort functionality", "[exchangeSort]") {
    SECTION("Empty array") {
        int arr[1] = {};
        int n = 0;
        exchangeSort(arr, n);
        REQUIRE(n == 0);
    }

    SECTION("Single element array") {
        int arr[1] = {1};
        int n = 1;
        exchangeSort(arr, n);
        REQUIRE(arr[0] == 1);
    }

    SECTION("Already sorted array") {
        int arr[5] = {1, 2, 3, 4, 5};
        int n = 5;
        exchangeSort(arr, n);
        REQUIRE(arr[0] == 1);
        REQUIRE(arr[1] == 2);
        REQUIRE(arr[2] == 3);
        REQUIRE(arr[3] == 4);
        REQUIRE(arr[4] == 5);
    }

    SECTION("Reverse sorted array") {
        int arr[5] = {5, 4, 3, 2, 1};
        int n = 5;
        exchangeSort(arr, n);
        REQUIRE(arr[0] == 1);
        REQUIRE(arr[1] == 2);
        REQUIRE(arr[2] == 3);
        REQUIRE(arr[3] == 4);
        REQUIRE(arr[4] == 5);
    }

    SECTION("Random array") {
        int arr[11] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
        int n = 11;
        exchangeSort(arr, n);
        REQUIRE(arr[0] == 1);
        REQUIRE(arr[1] == 1);
        REQUIRE(arr[2] == 2);
        REQUIRE(arr[3] == 3);
        REQUIRE(arr[4] == 3);
        REQUIRE(arr[5] == 4);
        REQUIRE(arr[6] == 5);
        REQUIRE(arr[7] == 5);
        REQUIRE(arr[8] == 5);
        REQUIRE(arr[9] == 6);
        REQUIRE(arr[10] == 9);
    }
}
