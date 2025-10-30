#define CATCH_CONFIG_MAIN
#include "catch2/catch.hpp"
#include "method1.h"
#include "method2.h"
#include "method3.h"

TEST_CASE("Method1 functionality", "[method1]") {
    REQUIRE(method1(1, 2) == 3);
    REQUIRE(method1(0, 0) == 0);
    REQUIRE(method1(-1, 1) == 0);
    REQUIRE(method1(-1, -1) == -2);
}

TEST_CASE("Method2 functionality", "[method2]") {
    REQUIRE(method2(1, 2) == 3);
    REQUIRE(method2(0, 0) == 0);
    REQUIRE(method2(-1, 1) == 0);
    REQUIRE(method2(-1, -1) == -2);
}

TEST_CASE("Method3 functionality", "[method3]") {
    REQUIRE(method3(1, 2) == 3);
    REQUIRE(method3(0, 0) == 0);
    REQUIRE(method3(-1, 1) == 0);
    REQUIRE(method3(-1, -1) == -2);
}
