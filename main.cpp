#include "Complex.hpp"

int main() {
    Complex x(2, 3), y(-5, 10), sum; // x, y, sum 생성

    // 합 계산
    ComplexAdd(x, y, sum);

    cout << "두 복소수의 합은 ";
    sum.show();

    return 0;
}
