#ifndef COMPLEX_HPP //중복 포함 방지
#define COMPLEX_HPP

#include <iostream> //입출력 헤더 포함
using namespace std; //std:: 생략

//Complex 클래스 선언
class Complex {
private:
    double real; //실수부
    double img;  //허수부

public:
    //생성자 선언
    Complex(double r = 0, double i = 0);

    //복소수를 출력하는 멤버함수
    void show() const;

    //ComplexManager 클래스가 private 멤버에 접근할 수 있도록 friend 선언
    friend class ComplexManager;
};

#endif
