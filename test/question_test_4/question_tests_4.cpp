#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question4.h"
#include <vector>

using std::vector;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

vector<double> cookie1 = {1.5,1,2.75};
vector<double> cookie2 = {3,2,5.5};
vector<double> cookie3 = {0.75,0.5,1.375};


TEST_CASE("test get_cookie_ingredients")
{
	REQUIRE(get_cookie_ingredients(48) == cookie1);
	REQUIRE(get_cookie_ingredients(96) == cookie2);
	REQUIRE(get_cookie_ingredients(24) == cookie3);
}
