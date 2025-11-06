#include <iostream> //입출력 기능 사용을 위해 포함
#include "complex.hpp" //complex.hpp 포함
using namespace std; //std:: 생략

int main() {
    Complex x(2, 3), y(-5, 10), sum; //Complex 클래스 객체 생성
    sum = x + y; //합이 계산된 값을 sum에 저장
    cout << "두 복소수의 합은 "; //메시지 출력
    sum.show(); //sum에 저장된 값을 출력
    return 0;
}
