//
// Created by tung on 11/11/17.
//

#include "gtest/gtest.h"
#include "../main/include/EuropeanModel.h"

TEST(EUCallOptionTest, callvalue) {
    EuropeanModel *european_pricer = new EuropeanModel(160.0, 1.5, -0.5, 0.1823, 150);
    ASSERT_NEAR(85.0665, european_pricer->getCallOptionPrice(3), 0.005);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    int ret = RUN_ALL_TESTS();
    return ret;
}

