#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "mylib.h"

using namespace std;

TEST_CASE("getSomething return something with you create it with something") {
    auto mylib = Mylib("something");

    REQUIRE("something" == mylib.getSomething());
}

