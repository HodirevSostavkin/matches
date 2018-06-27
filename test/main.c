#define CTEST_MAIN

#include <ctest.h>
#include "matches.h"

CTEST(max_matches_check, correct_max_matches_check)
{
    int result = maxMatches(999);
    int exp = 10;
    ASSERT_EQUAL(exp, result);
}

CTEST(max_matches_check, cor_max_matches_check)
{
    int result = maxMatches(8);
    int exp = 8;
    ASSERT_EQUAL(exp, result);
}

CTEST(max_matches_check, incorrect_max_matches_check)
{
    int result = maxMatches(999);
    int exp = 999;
    ASSERT_NOT_EQUAL(exp, result);
}

CTEST(max_matches_check, incor_max_matches_check)
{
    int result = maxMatches(3);
    int exp = 10;
    ASSERT_NOT_EQUAL(exp, result);
}

int main(int argc, const char** argv)
{
    return ctest_main(argc, argv);
}
