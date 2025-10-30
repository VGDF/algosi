#define CATCH_CONFIG_MAIN
#include "catch2/catch.hpp"
#include "method1.h"

// Test cases for method1
TEST_CASE("Method1 functionality", "[method1]") {
// Test case for method1
REQUIRE(method1(1, 2) == 3);
}
