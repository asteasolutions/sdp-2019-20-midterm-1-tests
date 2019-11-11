#ifndef __PROB2_TESTS_H
#define __PROB2_TESTS_H

#include "test_utils.hpp"

TEST_CASE("Empty list")
{
    //must not crash
    removedups(nullptr);
}

TEST_CASE("Remove inner")
{
    //must not crash

    node<int> *l = tolist<int>({1,2,2,2,2,3,7});
    removegaps(l);
    CHECK(tovector(l) == std::vector<int>({1,3,7}));
}

#endif
