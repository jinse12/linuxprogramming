#ifndef COMPLEX_HPP
#define COMPLEX_HPP

#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double img;

public:
    // 전역 함수 ComplexAdd를 friend로 선언
    friend void ComplexAdd(const Complex& a, const Complex& b, Complex& result);

    // 생성자
    Complex(double r = 0, double i = 0);

    // show 멤버 함수
    void show() const;
};

#endif
