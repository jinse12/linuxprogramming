#ifndef COMPLEX_HPP
#define COMPLEX_HPP

#include <iostream> //표준 입출력 헤더를 위한 헤더 포함
using namespace std; //std:: 생략

//Complex 클래스 선언
class Complex {
private:
    double real; //실수부 멤버변수
    double img; //허수부 멤버변수

public:
    //전역 함수 ComplexAdd를 friend로 선언
    //클래스 외부에 정의되나, private 멤버에 접근 가능
    //복소수 덧셈을 위해 실수부, 허수부에 접근할 수 있게 함
    friend void ComplexAdd(const Complex& a, const Complex& b, Complex& result);

    //생성자, 실수부와 허수부를 초기화함
    Complex(double r = 0, double i = 0);

    //show 멤버 함수, 복소수 출력
    void show() const;
};

#endif
