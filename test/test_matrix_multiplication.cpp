#include "matrix_multiplication.h"
#include <iostream>
#include <vector>
#include <gtest/gtest.h>

// ######################### Source code of multiplyMatrices in src/matrix_mult


TEST(MatrixMultiplicationTest, TestMultiplyMatrices) {
    std::vector<std::vector<int>> A = {
        {1, 2, 3},
        {4, 5, 6}
    };
    std::vector<std::vector<int>> B = {
        {7, 8},
        {9, 10},
        {11, 12}
    };
    std::vector<std::vector<int>> C(2, std::vector<int>(2, 0));

    multiplyMatrices(A, B, C, 2, 3, 2);

    std::vector<std::vector<int>> expected = {
        {58, 64},
        {139, 154}
    };

    ASSERT_EQ(C, expected) << "Matrix multiplication test failed! :(((()";
}

TEST(MatrixMultiplicationTest, TestMultiplyMatrices_2x2) {
    std::vector<std::vector<int>> A = {
            {1, 2},
            {4, 5}
    };
    std::vector<std::vector<int>> B = {
            {7, 8},
            {9, 10}
    };
    std::vector<std::vector<int>> C(2, std::vector<int>(2, 0));

    multiplyMatrices(A, B, C, 2, 2, 2);

    std::vector<std::vector<int>> expected = {
            {25, 28},
            {73, 82}
    };

    ASSERT_EQ(C, expected) << "Matrix multiplication test failed! :(((()";
}

TEST(MatrixMultiplicationTest, TestMultiplyMatrices_3x3) {
    std::vector<std::vector<int>> A = {
            {1, 2, 3},
            {1, 2, 3},
            {4, 5, 6}
    };
    std::vector<std::vector<int>> B = {
            {7, 8,8},
            {7, 8,8},
            {9, 10,87}
    };
    std::vector<std::vector<int>> C(3, std::vector<int>(3, 0));

    multiplyMatrices(A, B, C, 3, 3, 3);

    std::vector<std::vector<int>> expected = {
            {48, 54, 285, },
            {48, 54, 285, },
            {117, 132, 594, },
    };

    ASSERT_EQ(C, expected) << "Matrix multiplication test failed! :(((()";
}


int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
