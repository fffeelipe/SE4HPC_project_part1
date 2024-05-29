#include <iostream>
#include "vector"

using  namespace  std;


void multiplyMatricesWithoutErrors(const std::vector<std::vector<int>> &A,
                                   const std::vector<std::vector<int>> &B,
                                   std::vector<std::vector<int>> &C, int rowsA, int colsA,
                                   int colsB) {
    for (int i = 0; i < rowsA; ++i) {
        for (int j = 0; j < colsB; ++j) {
            C[i][j] = 0;
            for (int k = 0; k < colsA; ++k) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    //std::cout << "Welcome to the first part of the project!" << std::endl;

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
    multiplyMatricesWithoutErrors(A, B, C, A.size(), A[0].size(), B[0].size());

    for(auto r: C){
        cout<<"{";
        for(auto c: r){
            cout<<c<<", ";
        }
        cout<<"},\n";
    }

    return 0;
}
