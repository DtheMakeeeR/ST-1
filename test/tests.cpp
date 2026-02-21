// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

TEST(st1, checkPrime1) {
	uint64_t res = checkPrime(0);
	bool expected = false;
	EXPECT_EQ(expected, res);
}
TEST(st1, checkPrime2) {
	uint64_t res = checkPrime(1);
	bool expected = false;
	EXPECT_EQ(expected, res);
}
TEST(st1, checkPrime3) {
	uint64_t res = checkPrime(2);
	bool expected = true;
	EXPECT_EQ(expected, res);
}
TEST(st1, checkPrime4) {
	uint64_t res = checkPrime(3571);
	bool expected = true;
	EXPECT_EQ(expected, res);
}
TEST(st1, nextPrime1) {
	uint64_t res = nextPrime(4);
	uint64_t expected = 5;
	EXPECT_EQ(expected, res);
}
TEST(st1, nextPrime2) {
	uint64_t res = nextPrime(5);
	uint64_t expected = 7;
	EXPECT_EQ(expected, res);
}
TEST(st1, nextPrime3) {
	uint64_t res = nextPrime(0);
	uint64_t expected = 2;
	EXPECT_EQ(expected, res);
}
TEST(st1, nextPrime4) {
	uint64_t res = nextPrime(1);
	uint64_t expected = 2;
	EXPECT_EQ(expected, res);
}
TEST(st1, nPrime1) {
	uint64_t res = nPrime(1);
	uint64_t expected = 2;
	EXPECT_EQ(expected, res);
}
TEST(st1, nPrime2) {
	uint64_t res = nPrime(10);
	uint64_t expected = 29;
	EXPECT_EQ(expected, res);
}
TEST(st1, nPrime3) {
	uint64_t res = nPrime(50);
	uint64_t expected = 229;
	EXPECT_EQ(expected, res);
}
TEST(st1, sumPrime1) {
  uint64_t res = sumPrime(2000000);
  uint64_t expected = 142913828922;
  EXPECT_EQ(expected, res);
}
TEST(st1, sumPrime2) {
  uint64_t res = sumPrime(10);
  uint64_t expected = 17;
  EXPECT_EQ(expected, res);
}
