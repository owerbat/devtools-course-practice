// Copyright 2019 Obolenskiy Arseniy
#include <gtest/gtest.h>
#include "include/vigenere_cipher.h"

TEST(VigenereCipherTest, Can_Replicate_Caesar_Cipher_With_Zero_Shift) {
    std::string message = "walrus";
    std::string key = "a";
    ASSERT_EQ(message, VigenereCipher::encrypt(message, key));
}

TEST(VigenereCipherTest, Can_Replicate_Caesar_Cipher_With_Shift_1) {
    const char shift = 1;
    std::string message = "walrus";
    std::string key = "b";
    std::string expected(message);
    for (unsigned i = 0; i < expected.size(); ++i) {
        expected[i] += shift;
        if (!isalnum(expected[i]))
            expected[i] -= 26;
    }
    ASSERT_EQ(expected, VigenereCipher::encrypt(message, key));
}

TEST(VigenereCipherTest, Can_Replicate_Caesar_Cipher_With_Shift_5) {
    const char shift = 5;
    std::string message = "walrus";
    std::string key = "f";
    std::string expected(message);
    for (unsigned i = 0; i < expected.size(); ++i) {
        expected[i] += shift;
        if (!isalnum(expected[i]))
            expected[i] -= 26;
    }
    ASSERT_EQ(expected, VigenereCipher::encrypt(message, key));
}

TEST(VigenereCipherTest, Can_Replicate_Caesar_Cipher_With_Shift_25) {
    const char shift = 25;
    std::string message = "walrus";
    std::string key = "z";
    std::string expected(message);
    for (unsigned i = 0; i < expected.size(); ++i) {
        expected[i] += shift;
        if (!isalnum(expected[i]))
            expected[i] -= 26;
    }
    ASSERT_EQ(expected, VigenereCipher::encrypt(message, key));
}
