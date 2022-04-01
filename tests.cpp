#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

TEST_CASE("checks if the distance is right between eng_frequencies and decoder function"){
  CHECK(decoder("results") == (0.0011));

}

TEST_CASE("checksif encryptCaesar is working "){
  CHECK(encryptCaesar("results",5) == "wjxzqyx");

}
