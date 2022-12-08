#pragma once
#include <gtest/gtest.h>
#include <lib/number.h>

TEST(laba_5, Multiplication) {
    const auto expected = 160;
    const auto actual = number_1(40, 4);
    ASSERT_EQ(actual, expected);
}

TEST(laba_5, Summa) {
    const auto expected = 44;
    const auto actual = number_2(40, 4);
    ASSERT_EQ(actual, expected);
}

TEST(laba_5, Division) {
    const auto expected = 10;
    const auto actual = number_3(40, 4);
    ASSERT_EQ(actual, expected);
}

TEST(laba_5, Subtraction) {
    const auto expected = 36;
    const auto actual = number_4(40, 4);
    ASSERT_EQ(actual, expected);
}