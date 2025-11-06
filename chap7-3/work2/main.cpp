#include <iostream>       // 입출력 기능 사용을 위해 포함
#include "complex.hpp"    // Complex 클래스 정의 포함
using namespace std;      // std:: 생략

int main() {
    // Complex 클래스 객체 생성
    // sum은 기본값 0 + 0i로 초기화
    Complex x(2, 3), y(-5, 10), sum;

    // 곱셈 연산자 호출: x * y
    // 결과를 sum 객체에 저장
    sum = x * y;

    cout << "두 복소수의 곱은 "; // 메시지 출력

    // sum 객체의 show() 함수 호출
    // 곱셈 결과를 "real + imgj" 형태로 출력
    sum.show();

    return 0;
}
