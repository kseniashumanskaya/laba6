#include "fraction.h"
#include <gtest/gtest.h>

TEST(TestCaseName, TestName) {
    EXPECT_EQ(1, 1);
    EXPECT_TRUE(true);
}
TEST(TestingGetNumerator, GetNumerator) {
    Fraction fraction(-45, -465);
    EXPECT_EQ(3, fraction.GetNumerator());
    Fraction fraction2(45, -465);
    EXPECT_EQ(-3, fraction2.GetNumerator());
    Fraction fraction3(-45, 465);
    EXPECT_EQ(-3, fraction3.GetNumerator());
    Fraction fraction4(0, -465);
    EXPECT_EQ(0, fraction4.GetNumerator());
}

TEST(TestingGetDenumerator, GetDenumerator) {
    Fraction fraction(-45, -465);
    EXPECT_EQ(31, fraction.GetDenumerator());
    Fraction fraction2(45, -465);
    EXPECT_EQ(31, fraction2.GetDenumerator());
    Fraction fraction3(-45, 465);
    EXPECT_EQ(31, fraction3.GetDenumerator());
    Fraction fraction4(0, 465);
    EXPECT_EQ(1, fraction4.GetDenumerator());
}
TEST(TestingSum, Sum) {
    Fraction fraction(45, -465);
    Fraction fraction2(8, 784);
    Fraction sum(-263, 3038);
    EXPECT_EQ(sum.GetNumerator(), fraction.operator+(fraction2).GetNumerator());
    EXPECT_EQ(sum.GetDenumerator(), fraction.operator+(fraction2).GetDenumerator());
    Fraction fraction1_2(0, -465);
    Fraction fraction2_2(8, 784);
    Fraction sum2(1, 98);
    EXPECT_EQ(sum2.GetNumerator(), fraction1_2.operator+(fraction2_2).GetNumerator());
    EXPECT_EQ(sum2.GetDenumerator(), fraction1_2.operator+(fraction2_2).GetDenumerator());
    Fraction fraction1_3(-15, -465);
    Fraction fraction2_3(128, -784);
    Fraction sum3(-199,1519);
    EXPECT_EQ(sum3.GetNumerator(), fraction1_3.operator+(fraction2_3).GetNumerator());
    EXPECT_EQ(sum3.GetDenumerator(), fraction1_3.operator+(fraction2_3).GetDenumerator());
}

TEST(TestingMultiplication, Multiplication) {
    Fraction fraction(45, -465);
    Fraction fraction2(8, 784);
    Fraction Multiplication1(-3, 3038);
    EXPECT_EQ(Multiplication1.GetNumerator(), fraction.operator*(fraction2).GetNumerator());
    EXPECT_EQ(Multiplication1.GetDenumerator(), fraction.operator*(fraction2).GetDenumerator());
    Fraction fraction1_2(0, -465);
    Fraction fraction2_2(8, 784);
    Fraction Multiplication2(0, 1);
    EXPECT_EQ(Multiplication2.GetNumerator(), fraction1_2.operator*(fraction2_2).GetNumerator());
    EXPECT_EQ(Multiplication2.GetDenumerator(), fraction1_2.operator*(fraction2_2).GetDenumerator());
    Fraction fraction1_3(-15, -465);
    Fraction fraction2_3(128, -784);
    Fraction Multiplication3(-8, 1519);
    EXPECT_EQ(Multiplication3.GetNumerator(), fraction1_3.operator*(fraction2_3).GetNumerator());
    EXPECT_EQ(Multiplication3.GetDenumerator(), fraction1_3.operator*(fraction2_3).GetDenumerator());
}

TEST(TestingDivision, Division) {
    Fraction fraction(45, -465);
    Fraction fraction2(8, 784);
    Fraction Division1(-294, 31);
    EXPECT_EQ(Division1.GetNumerator(), fraction.operator/(fraction2).GetNumerator());
    EXPECT_EQ(Division1.GetDenumerator(), fraction.operator/(fraction2).GetDenumerator());
    Fraction fraction1_2(0, -465);
    Fraction fraction2_2(8, 784);
    Fraction Division2(0, 1);
    EXPECT_EQ(Division2.GetNumerator(), fraction1_2.operator/(fraction2_2).GetNumerator());
    EXPECT_EQ(Division2.GetDenumerator(), fraction1_2.operator/(fraction2_2).GetDenumerator());
    Fraction fraction1_3(-15, -465);
    Fraction fraction2_3(128, -784);
    Fraction Division3(-49, 248);
    EXPECT_EQ(Division3.GetNumerator(), fraction1_3.operator/(fraction2_3).GetNumerator());
    EXPECT_EQ(Division3.GetDenumerator(), fraction1_3.operator/(fraction2_3).GetDenumerator());
}

TEST(TestingGetDenumerator0, GetDenumerator) {
    Fraction fraction(-45, 0);
    ASSERT_TRUE(fraction.GetDenumerator() == 0);
}

