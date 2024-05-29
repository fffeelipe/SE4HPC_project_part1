#include "matrix_multiplication.h"
#include <iostream>
#include <vector>
#include <gtest/gtest.h>

// ######################### Source code of multiplyMatrices in src/matrix_mult

//Result matrix contains a number bigger than 100!
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


    std::vector<std::vector<int>> C(A.size(), std::vector<int>(B[0].size(), 0));
    multiplyMatrices(A, B, C, A.size(), A[0].size(), B[0].size());


    std::vector<std::vector<int>> expected = {
        {58, 64},
        {139, 154}
    };

    ASSERT_EQ(C, expected) << "Matrix multiplication test failed! :(((()";
}

//Element-wise multiplication of ones detected!
//Result matrix contains a number between 11 and 20!
TEST(MatrixMultiplicationTest, TestMultiplyMatrices_2x2_all1s) {
    std::vector<std::vector<int>> A = {
            {1, 1},
            {1, 1}
    };
    std::vector<std::vector<int>> B = {
            {1, 1},
            {1, 1}
    };

    std::vector<std::vector<int>> C(A.size(), std::vector<int>(B[0].size(), 0));
    multiplyMatrices(A, B, C, A.size(), A[0].size(), B[0].size());


    std::vector<std::vector<int>> expected = {
            {2, 2},
            {2, 2}
    };

    ASSERT_EQ(C, expected) << "Matrix multiplication test failed! :(((()";
}

// generic squared matrix multiplication 2x2
TEST(MatrixMultiplicationTest, TestMultiplyMatrices_2x2) {
    std::vector<std::vector<int>> A = {
            {1, 2},
            {4, 5}
    };
    std::vector<std::vector<int>> B = {
            {7, 8},
            {9, 10}
    };

    std::vector<std::vector<int>> C(A.size(), std::vector<int>(B[0].size(), 0));
    multiplyMatrices(A, B, C, A.size(), A[0].size(), B[0].size());


    std::vector<std::vector<int>> expected = {
            {25, 28},
            {73, 82}
    };

    ASSERT_EQ(C, expected) << "Matrix multiplication test failed! :(((()";
}

// generic squared matrix multiplication 3x3
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

    std::vector<std::vector<int>> C(A.size(), std::vector<int>(B[0].size(), 0));
    multiplyMatrices(A, B, C, A.size(), A[0].size(), B[0].size());

    std::vector<std::vector<int>> expected = {
            {48, 54, 285, },
            {48, 54, 285, },
            {117, 132, 594, },
    };

    ASSERT_EQ(C, expected) << "Matrix multiplication test failed! :(((()";
}

// generic squared matrix multiplication 4x4
TEST(MatrixMultiplicationTest, TestMultiplyMatrices_4x4) {
    std::vector<std::vector<int>> A = {
            {1, 2, 3, 234},
            {1, 2, 3, 654},
            {1, 2, 3, 654},
            {4, 5, 6, 567}
    };
    std::vector<std::vector<int>> B = {
            {7, 8,8, 456},
            {7, 8,8, 675},
            {9, 10,87, 567},
            {9, 10,87, 567}
    };

    std::vector<std::vector<int>> C(A.size(), std::vector<int>(B[0].size(), 0));
    multiplyMatrices(A, B, C, A.size(), A[0].size(), B[0].size());


    std::vector<std::vector<int>> expected = {
            {2154, 2394, 20643, 136185, },
            {5934, 6594, 57183, 374325, },
            {5934, 6594, 57183, 374325, },
            {5220, 5802, 49923, 330090, },
    };

    ASSERT_EQ(C, expected) << "Matrix multiplication test failed! :(((()";
}

// a 1x1 matrix multiplied by a 1x1 matrix should behave like regular numbers
TEST(MatrixMultiplicationTest, TestMultiplyMatrices_1x1) {
    std::vector<std::vector<int>> A = {
            {1}
    };
    std::vector<std::vector<int>> B = {
            {1}
    };

    std::vector<std::vector<int>> C(A.size(), std::vector<int>(B[0].size(), 0));
    multiplyMatrices(A, B, C, A.size(), A[0].size(), B[0].size());

    std::vector<std::vector<int>> expected = {
            {1}
    };

    ASSERT_EQ(C, expected) << "Matrix multiplication test failed! :(((()";
}

// a 1x1 matrix multiplied by a 1x1 matrix should behave like regular numbers
TEST(MatrixMultiplicationTest, TestMultiplyMatrices_1x1_0) {
    std::vector<std::vector<int>> A = {
            {0}
    };
    std::vector<std::vector<int>> B = {
            {0}
    };

    std::vector<std::vector<int>> C(A.size(), std::vector<int>(B[0].size(), 0));
    multiplyMatrices(A, B, C, A.size(), A[0].size(), B[0].size());

    std::vector<std::vector<int>> expected = {
            {0}
    };

    ASSERT_EQ(C, expected) << "Matrix multiplication test failed! :(((()";
}

//matrix multiplication with an identity matrix should return the original matrix
TEST(MatrixMultiplicationTest, TestMultiplyMatrices_4x4_1L) {
    std::vector<std::vector<int>> A = {
            {1, 1, 1, 1},
            {1, 1, 1, 1},
            {1, 1, 1, 1},
            {1, 1, 1, 1},
    };
    std::vector<std::vector<int>> B = {
            {1,0,0,0},
            {0,1,0,0},
            {0,0,1,0},
            {0,0,0,1},
    };

    std::vector<std::vector<int>> C(A.size(), std::vector<int>(B[0].size(), 0));
    multiplyMatrices(A, B, C, A.size(), A[0].size(), B[0].size());

    ASSERT_EQ(C, A) << "Matrix multiplication test failed! :(((()";
}

// a Matrix 4x1 multiplied by a matrix 1x4 should return a matrix of size 4x4
TEST(MatrixMultiplicationTest, TestMultiplyMatrices_4x1_1L) {
        std::vector<std::vector<int>> B = {
                {1, 1, 1, 1}
        };
        std::vector<std::vector<int>> A = {
                {1},
                {1},
                {1},
                {1},
        };

    std::vector<std::vector<int>> C(A.size(), std::vector<int>(B[0].size(), 0));
    multiplyMatrices(A, B, C, A.size(), A[0].size(), B[0].size());

    std::vector<std::vector<int>> expected = {
            {1, 1, 1, 1},
            {1, 1, 1, 1},
            {1, 1, 1, 1},
            {1, 1, 1, 1},
    };

    ASSERT_EQ(C, expected) << "Matrix multiplication test failed! :(((()";
}


// a Matrix 1x4 multiplied by a matrix 4x1 should return a matrix of size 1x1
TEST(MatrixMultiplicationTest, TestMultiplyMatrices_1x4_1L) {
    std::vector<std::vector<int>> A = {
            {1, 1, 1, 1}
    };
    std::vector<std::vector<int>> B = {
            {1},
            {1},
            {1},
            {1},
    };


    std::vector<std::vector<int>> C(A.size(), std::vector<int>(B[0].size(), 0));
    multiplyMatrices(A, B, C, A.size(), A[0].size(), B[0].size());

    std::vector<std::vector<int>> expected = {
            {4}
    };

    ASSERT_EQ(C, expected) << "Matrix multiplication test failed! :(((()";
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
