#include "matrix_multiplication.h"
#include <iostream>
#include <vector>
#include <gtest/gtest.h>

// ######################### Source code of multiplyMatrices in src/matrix_mult

//Error 6: Result matrix contains a number bigger than 100!
//Error 12: The number of rows in A is equal to the number of columns in B!
//Error 14: The result matrix C has an even number of rows!
//Error 20: Number of columns in matrix A is odd!
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

//Error 1: Element-wise multiplication of ones detected!
//Error 7: Result matrix contains a number between 11 and 20!
//Error 10: A row in matrix A contains more than one '1'!
//Error 12: The number of rows in A is equal to the number of columns in B!
//Error 13: The first element of matrix A is equal to the first element of matrix B!
//Error 14: The result matrix C has an even number of rows!
//Error 18: Matrix A is a square matrix!
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

//Error 12: The number of rows in A is equal to the number of columns in B!
//Error 14: The result matrix C has an even number of rows!
//Error 18: Matrix A is a square matrix!
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
//Error 6: Result matrix contains a number bigger than 100!
//Error 12: The number of rows in A is equal to the number of columns in B!
//Error 18: Matrix A is a square matrix!
//Error 20: Number of columns in matrix A is odd!
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
//Error 6: Result matrix contains a number bigger than 100!
//Error 12: The number of rows in A is equal to the number of columns in B!
//Error 14: The result matrix C has an even number of rows!
//Error 18: Matrix A is a square matrix!
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
//Error 1: Element-wise multiplication of ones detected!
//Error 12: The number of rows in A is equal to the number of columns in B!
//Error 13: The first element of matrix A is equal to the first element of matrix B!
//Error 18: Matrix A is a square matrix!
//Error 20: Number of columns in matrix A is odd!
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

//Error 9: Result matrix contains the number 99!
//Error 12: The number of rows in A is equal to the number of columns in B!
TEST(MatrixMultiplicationTest, TestMultiplyMatrices_1x2_generic) {
    std::vector<std::vector<int>> A = {
            {1,2}
    };
    std::vector<std::vector<int>> B = {
            {13},
            {43}
    };

    std::vector<std::vector<int>> C(A.size(), std::vector<int>(B[0].size(), 0));
    multiplyMatrices(A, B, C, A.size(), A[0].size(), B[0].size());

    std::vector<std::vector<int>> expected = {
            {99}
    };

    ASSERT_EQ(C, expected) << "Matrix multiplication test failed! :(((()";
}

// a 1x1 matrix multiplied by a 1x1 matrix should behave like regular numbers
//Error 8: Result matrix contains zero!
//Error 11: Every row in matrix B contains at least one '0'!
//Error 12: The number of rows in A is equal to the number of columns in B!
//Error 13: The first element of matrix A is equal to the first element of matrix B!
//Error 18: Matrix A is a square matrix!
//Error 20: Number of columns in matrix A is odd!
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
//Error 1: Element-wise multiplication of ones detected!
//Error 10: A row in matrix A contains more than one '1'!
//Error 11: Every row in matrix B contains at least one '0'!
//Error 12: The number of rows in A is equal to the number of columns in B!
//Error 13: The first element of matrix A is equal to the first element of matrix B!
//Error 14: The result matrix C has an even number of rows!
//Error 18: Matrix A is a square matrix!
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
//Error 1: Element-wise multiplication of ones detected!
//Error 12: The number of rows in A is equal to the number of columns in B!
//Error 13: The first element of matrix A is equal to the first element of matrix B!
//Error 14: The result matrix C has an even number of rows!
//Error 20: Number of columns in matrix A is odd!
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
//Error 1: Element-wise multiplication of ones detected!
//Error 10: A row in matrix A contains more than one '1'!
//Error 12: The number of rows in A is equal to the number of columns in B!
//Error 13: The first element of matrix A is equal to the first element of matrix B!
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

//Error 3: Matrix A contains a negative number!
//Error 5: Matrix B contains a negative number!
//Error 6: Result matrix contains a number bigger than 100!
//Error 12: The number of rows in A is equal to the number of columns in B!
//Error 14: The result matrix C has an even number of rows!
//Error 18: Matrix A is a square matrix!
TEST(MatrixMultiplicationTest, TestMultiplyMatrices_2x2_negative) {
    std::vector<std::vector<int>> A = {
            {-12, -11},
            {-10, -9}
    };
    std::vector<std::vector<int>> B = {
            {-8, -7},
            {-6, -5}
    };


    std::vector<std::vector<int>> C(A.size(), std::vector<int>(B[0].size(), 0));
    multiplyMatrices(A, B, C, A.size(), A[0].size(), B[0].size());

    std::vector<std::vector<int>> expected = {
            {162, 139},
            {134, 115}
    };

    ASSERT_EQ(C, expected) << "Matrix multiplication test failed! :(((()";
}

//Error 2: Matrix A contains the number 7!
//Error 4: Matrix B contains the number 3!
//Error 6: Result matrix contains a number bigger than 100!
//Error 6: Result matrix contains a number bigger than 100!
//Error 12: The number of rows in A is equal to the number of columns in B!
//Error 14: The result matrix C has an even number of rows!
//Error 16: Matrix B contains the number 6!
//Error 18: Matrix A is a square matrix!
TEST(MatrixMultiplicationTest, TestMultiplyMatrices_2x2_odd_numbers_first_row_even_second) {
    std::vector<std::vector<int>> A = {
            {5, 7},
            {10, 12}
    };
    std::vector<std::vector<int>> B = {
            {3, 9},
            {6, 2}
    };


    std::vector<std::vector<int>> C(A.size(), std::vector<int>(B[0].size(), 0));
    multiplyMatrices(A, B, C, A.size(), A[0].size(), B[0].size());

    std::vector<std::vector<int>> expected = {
            {57, 59},
            {102, 114}
    };

    ASSERT_EQ(C, expected) << "Matrix multiplication test failed! :(((()";
}

//Error 6: Result matrix contains a number bigger than 100!
//Error 12: The number of rows in A is equal to the number of columns in B!
//Error 14: The result matrix C has an even number of rows!
//Error 18: Matrix A is a square matrix!
//Error 19: Every row in matrix A contains the number 8!
TEST(MatrixMultiplicationTest, TestMultiplyMatrices_repeated_number_2x2) {
    std::vector<std::vector<int>> A = {
            {8, 8},
            {8, 8}
    };
    std::vector<std::vector<int>> B = {
            {1, 2},
            {16, 22}
    };


    std::vector<std::vector<int>> C(A.size(), std::vector<int>(B[0].size(), 0));
    multiplyMatrices(A, B, C, A.size(), A[0].size(), B[0].size());

    std::vector<std::vector<int>> expected = {
            {136, 192},
            {136, 192}
    };

    ASSERT_EQ(C, expected) << "Matrix multiplication test failed! :(((()";
}

//Error 12: The number of rows in A is equal to the number of columns in B!
//Error 13: The first element of matrix A is equal to the first element of matrix B!
//Error 15: A row in matrix A is filled entirely with 5s!
TEST(MatrixMultiplicationTest, TestMultiplyMatrices_repeated_numbers_1x2_generic) {
    std::vector<std::vector<int>> A = {
            {5, 5}
    };
    std::vector<std::vector<int>> B = {
            {5},
            {5}
    };


    std::vector<std::vector<int>> C(A.size(), std::vector<int>(B[0].size(), 0));
    multiplyMatrices(A, B, C, A.size(), A[0].size(), B[0].size());

    std::vector<std::vector<int>> expected = {
            {50}
    };

    ASSERT_EQ(C, expected) << "Matrix multiplication test failed! :(((()";
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}