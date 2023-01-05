#include <my_sqrt/my_sqrt.h>
#include <gtest/gtest.h>

TEST(my_sqrt_Test, TestIntegerOne_One)
{
    const auto expected = 1;
    const auto actual = my_sqrt(1);
    ASSERT_EQ(expected, actual);
}

TEST(my_sqrt_Test, TestIntegerZero_Zero)
{
    const auto expected = 0;
    const auto actual = my_sqrt(0);
    ASSERT_EQ(expected, actual);
}

TEST(my_sqrt_Test, TestInteger10_Hundred)
{
    const auto expected = 100;
    const auto actual = my_sqrt(10);
    ASSERT_EQ(actual, expected);
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

