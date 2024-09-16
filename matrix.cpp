#include "TestMatrix.h"
#include <iostream>
  
int main() {
    size_t m, n;
    std::cin >> m >> n;
    Matrix<int> A(m, n);
    A = FillMatrix<int>(m, n);
    std::cout << A << "\n";
}