#include "Complex.hpp" //Complex.hpp 헤더 포함

//Complex 클래스 생성자 정의
Complex::Complex(double r, double i) : real(r), img(i) {
    cout << "복소수 " << real << "+" << img << "j 생성" << endl;
}

//show() 멤버함수 정의
void Complex::show() const {
    cout << real << "+" << img << "j" << endl;
}
