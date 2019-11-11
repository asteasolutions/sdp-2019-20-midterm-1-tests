#ifndef __PROB1_TESTS_H
#define __PROB1_TESTS_H

#include "test_utils.hpp"

TEST_CASE("Empty list")
{
    //must not crash
    fillgaps(nullptr);
}

TEST_CASE("Fill Gaps")
{
    node<int> *l = tolist<int> ({1,3,7});
    fillgaps (l);
    CHECK (tovector(l) == std::vector<int>({1,2,3,4,5,6,7}));
}

#endif
