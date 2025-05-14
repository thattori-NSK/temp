#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

#include "temp.cpp"

TEST_CASE( "1: func_judge_temp_alarm", "[multi-file:1]" ) {
    REQUIRE( func_judge_temp_alarm(0) == false );
    REQUIRE( func_judge_temp_alarm(77.0F) == false );
    REQUIRE( func_judge_temp_alarm(78.0F) == false );   
    REQUIRE( func_judge_temp_alarm(79.0F) == false );
    REQUIRE( func_judge_temp_alarm(80.0F) == true );
    REQUIRE( func_judge_temp_alarm(79.0F) == true );
    REQUIRE( func_judge_temp_alarm(78.0F) == true );
    REQUIRE( func_judge_temp_alarm(77.0F) == false );
}