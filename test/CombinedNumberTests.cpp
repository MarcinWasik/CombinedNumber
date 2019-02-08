#include <gtest/gtest.h>
#include "CombinedNumber.hpp"
#include <list>

struct CombinedNumberTests : public ::testing::Test
{
};

TEST_F(CombinedNumberTests, assertThatFalseIsTrue)
{
    ASSERT_TRUE(true);
}

TEST_F(CombinedNumberTests, whenEmptyStringShouldb)
{
       std::list<unsigned int> l = {};
       CombinedNumber cn;
       auto result = cn.constructGreatestNumber(l);
       ASSERT_EQ(result,"");
}
