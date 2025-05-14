#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

#include "temp.cpp"

TEST_CASE( "2: func_judge_temp_alarm", "[multi-file:2]" ) {
    REQUIRE( func_judge_temp_alarm(0) == false );
}