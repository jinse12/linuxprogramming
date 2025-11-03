#include "Complex.hpp" //Complex.hpp 헤더 포함

//생성자 정의
//매개변수로 전달받은 실수부와 허수부를 초기화
Complex::Complex(double r, double i) : real(r), img(i) {
}

//복소수 출력 함수 정의
//a+bj를 화면에 출력
void Complex::show() const {
    cout << real << "+" << img << "j" << endl;
}
