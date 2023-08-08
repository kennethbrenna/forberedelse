#include "../include/Bus.h"
#include "../include/Car.h"
#include "../include/MotorCycle.h"

#define CATCH_CONFIG_MAIN

#include <catch2/catch.hpp>

TEST_CASE("How many seats left = acutal seats left") {
    Bus busTest("Bus", "JK74955", 2005, "White", 200);
    REQUIRE(busTest.howManySeatsLeft(75) == 125);


}

