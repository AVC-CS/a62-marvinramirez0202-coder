#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "main.hpp"

// T1: getRandom() returns value in [0, 99]
TEST_CASE("getRandom range", "[T1]")
{
    srand(42);
    for (int i = 0; i < 10; i++) {
        int r = getRandom();
        REQUIRE(r >= 0);
        REQUIRE(r <= 99);
    }
}

// T2: getClosestMed basic — mean is exact match
TEST_CASE("getClosestMed exact mean", "[T2]")
{
    // mean = 2.0, closest = 2
    REQUIRE(getClosestMed(1, 2, 3) == 2);
    // mean = 20.0, closest = 20
    REQUIRE(getClosestMed(10, 20, 30) == 20);
}

// T3: getClosestMed — closest is not the middle value
TEST_CASE("getClosestMed non-middle", "[T3]")
{
    // mean = 7.33, closest = 10
    REQUIRE(getClosestMed(1, 10, 11) == 10);
    // mean = 5.0, closest = 5
    REQUIRE(getClosestMed(1, 5, 9) == 5);
}

// T4: getClosestMed edge — begin/end anchored values
TEST_CASE("getClosestMed edge cases", "[T4]")
{
    // mean = 50, closest = 50
    REQUIRE(getClosestMed(0, 50, 100) == 50);
    // mean = 33.0, closest = 33
    REQUIRE(getClosestMed(0, 33, 99) == 33);
}
