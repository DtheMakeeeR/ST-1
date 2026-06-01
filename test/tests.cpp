// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

TEST(CheckPrimeTest, OneIsNotPrime) {
    EXPECT_FALSE(checkPrime(1));
}

TEST(CheckPrimeTest, TwoIsPrime) {
    EXPECT_TRUE(checkPrime(2));
}

TEST(CheckPrimeTest, SmallPrimesArePrime) {
    EXPECT_TRUE(checkPrime(3));
    EXPECT_TRUE(checkPrime(5));
    EXPECT_TRUE(checkPrime(7));
    EXPECT_TRUE(checkPrime(11));
}

TEST(CheckPrimeTest, EvenNumbersGreaterThanTwoNotPrime) {
    EXPECT_FALSE(checkPrime(4));
    EXPECT_FALSE(checkPrime(6));
    EXPECT_FALSE(checkPrime(100));
}

TEST(CheckPrimeTest, CompositeOddNumbers) {
    EXPECT_FALSE(checkPrime(9));
    EXPECT_FALSE(checkPrime(15));
    EXPECT_FALSE(checkPrime(21));
    EXPECT_FALSE(checkPrime(25));
}

TEST(CheckPrimeTest, LargePrime) {
    EXPECT_TRUE(checkPrime(104729));  
}

TEST(CheckPrimeTest, LargeComposite) {
    EXPECT_FALSE(checkPrime(1000003 * 1000003));
}



TEST(NPrimeTest, FirstPrimeIsTwo) {
    EXPECT_EQ(nPrime(1), 2);
}

TEST(NPrimeTest, SecondPrimeIsThree) {
    EXPECT_EQ(nPrime(2), 3);
}

TEST(NPrimeTest, TenthPrime) {
    EXPECT_EQ(nPrime(10), 29);
}

TEST(NPrimeTest, HundredthPrime) {
    EXPECT_EQ(nPrime(100), 541);
}

TEST(NPrimeTest, ThPrimeValidatesInput) {
        EXPECT_EQ(nPrime(0), 0);
}



TEST(NextPrimeTest, AfterOneIsTwo) {
    EXPECT_EQ(nextPrime(1), 2);
}

TEST(NextPrimeTest, AfterTwoIsThree) {
    EXPECT_EQ(nextPrime(2), 3);
}

TEST(NextPrimeTest, AfterPrimeGivesNextPrime) {
    EXPECT_EQ(nextPrime(7), 11);
    EXPECT_EQ(nextPrime(13), 17);
}

TEST(NextPrimeTest, AfterCompositeGivesNextPrime) {
    EXPECT_EQ(nextPrime(4), 5);
    EXPECT_EQ(nextPrime(10), 11);
    EXPECT_EQ(nextPrime(14), 17);
}

TEST(NextPrimeTest, LargeInput) {
    EXPECT_EQ(nextPrime(1000000), 1000003);
}



TEST(SumPrimeTest, UpToTwo) {
    EXPECT_EQ(sumPrime(2), 0);  
}

TEST(SumPrimeTest, UpToThree) {
    EXPECT_EQ(sumPrime(3), 2);  
}

TEST(SumPrimeTest, UpToTen) {
    
    EXPECT_EQ(sumPrime(10), 17);
}

TEST(SumPrimeTest, UpToTwenty) {
    
    EXPECT_EQ(sumPrime(20), 77);
}

TEST(SumPrimeTest, UpToHundred) {
    
    EXPECT_EQ(sumPrime(100), 1060);
}

