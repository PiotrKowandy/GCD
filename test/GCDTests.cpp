#include "gtest/gtest.h"
#include "GCD.hpp"

//Euclidean algorithm -----------------------------
TEST(GCD_EuclideanTests, two_that_same_gigits) {
    EXPECT_EQ(3, GCD_Euclidean(3, 3));
}

TEST(GCD_EuclideanTests, two_prime_numbers) {
    EXPECT_EQ(1, GCD_Euclidean(7, 11));
}

TEST(GCD_EuclideanTests, two_zero_numbers) {
    EXPECT_EQ(0, GCD_Euclidean(0, 0));
}

TEST(GCD_EuclideanTests, two_numbers) {
    EXPECT_EQ(20, GCD_Euclidean(100, 20));
}
//--------------------------------------------------

//Euclidean algorithm -----------------------------
TEST(GCD_Euclidean_recurTests, two_that_same_digits_recur) {
    EXPECT_EQ(3, GCD_Euclidean_recur(3, 3));
}

TEST(GCD_Euclidean_recurTests, two_prime_numbers_recur) {
    EXPECT_EQ(1, GCD_Euclidean_recur(7, 11));
}

TEST(GCD_Euclidean_recurTests, two_zero_numbers_recur) {
    EXPECT_EQ(0, GCD_Euclidean_recur(0, 0));
}

TEST(GCD_Euclidean_recurTests, two_numbers_recur) {
    EXPECT_EQ(20, GCD_Euclidean_recur(100, 20));
}
//--------------------------------------------------

TEST (GCD_Euclidean_and_recurTests, compare_two_algoritms){
    EXPECT_EQ(GCD_Euclidean_recur(45,15), GCD_Euclidean(15, 45));
}

TEST (GCD_Euclidean_and_recurTests, compare_two_algoritms_with_different_order){
    EXPECT_EQ(GCD_Euclidean_recur(15, 45), GCD_Euclidean(45, 15));
}