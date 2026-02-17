// Copyright 2025 UNN-CS
#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

// Tests for checkPrime
TEST(st1, checkPrime0) {
    EXPECT_FALSE(checkPrime(0));
}

TEST(st1, checkPrime1) {
    EXPECT_FALSE(checkPrime(1));
}

TEST(st1, checkPrime2) {
    EXPECT_TRUE(checkPrime(2));
}

TEST(st1, checkPrime7) {
    EXPECT_TRUE(checkPrime(7));
}

TEST(st1, checkPrime77) {
    EXPECT_FALSE(checkPrime(77));
}

TEST(st1, checkPrime99) {
    EXPECT_FALSE(checkPrime(99));
}

TEST(st1, checkPrime100) {
    EXPECT_FALSE(checkPrime(100));
}

// Tests for nPrime
TEST(st1, nPrime0) {
    EXPECT_EQ(nPrime(0), 0);
}

TEST(st1, nPrime4) {
    EXPECT_EQ(nPrime(4), 7);
}

TEST(st1, nPrime77) {
    EXPECT_EQ(nPrime(77), 389);
}

// Tests for nextPrime
TEST(st1, nextPrime7) {
    EXPECT_EQ(nextPrime(7), 11);
}

TEST(st1, nextPrime8) {
    EXPECT_EQ(nextPrime(8), 11);
}

TEST(st1, nextPrime9) {
    EXPECT_EQ(nextPrime(9), 11);
}

TEST(st1, nextPrime70) {
    EXPECT_EQ(nextPrime(70), 71);
}

TEST(st1, nextPrime87) {
    EXPECT_EQ(nextPrime(87), 89);
}

// Tests for sumPrime
TEST(st1, sumPrime7) {
    uint64_t res = sumPrime(7);
    uint64_t expected = 10;
    EXPECT_EQ(expected, res);
}

TEST(st1, sumPrime10) {
    uint64_t res = sumPrime(10);
    uint64_t expected = 17;
    EXPECT_EQ(expected, res);
}

TEST(st1, sumPrime20) {
    EXPECT_EQ(sumPrime(20), 77);
}
