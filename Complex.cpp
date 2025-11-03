#include "Complex.hpp"

// 생성자 정의
Complex::Complex(double r, double i) : real(r), img(i) {
    cout << "복소수 " << real << "+" << img << "j 생성" << endl;
}

// show 함수 정의
void Complex::show() const {
    cout << real << "+" << img << "j" << endl;
}

// 전역 함수 ComplexAdd 정의
void ComplexAdd(const Complex& a, const Complex& b, Complex& result) {
    result.real = a.real + b.real;
    result.img = a.img + b.img;
}
