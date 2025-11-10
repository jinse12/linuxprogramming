#include <iostream>
#include "complex.hpp"
using namespace std;

int main() {
    Complex x(2, 3);  // 생성자에서 "복소수2+3j생성" 출력

    ++x;
    cout << "증가결과";
    x.show();

    x--;
    cout << "감소결과";
    x.show();

    return 0;
}
