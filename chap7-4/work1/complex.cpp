#include <iostream>
#include "complex.hpp"
using namespace std;

// 생성자
Complex::Complex(double r, double i) {
    this->real = r;
    this->img = i;
    cout << "복소수" << real << "+" << img << "j생성" << endl;
}

// 곱셈 연산자
Complex Complex::operator*(Complex a) {
    Complex tmp;
    tmp.real = this->real * a.real - this->img * a.img;
    tmp.img = this->real * a.img + this->img * a.real;
    return tmp;
}

// 전위 증가 연산자 (++x)
Complex& Complex::operator++() {
    ++real;
    ++img;
    return *this;
}

// 후위 감소 연산자 (x--)
Complex Complex::operator--(int) {
    Complex tmp = *this;
    real--;
    img--;
    return tmp;
}

// 출력 함수
void Complex::show() {
    cout << real << "+" << img << "j" << endl;
}
