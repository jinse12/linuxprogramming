#ifndef COMPLEXMANAGER_HPP //중복포함 방지
#define COMPLEXMANAGER_HPP

#include "Complex.hpp" //Complex 클래스 포함

//ComplexManager 클래스 선언부
//복소수 연산을 담당하는 클래스
class ComplexManager {
public:
    //복소수 덧셈 함수
    //두 Complex 객체의 실수부, 허수부를 각각 더한 새로운 Complex를 반환
    Complex ComplexAdd(const Complex& a, const Complex& b);

    //복소수 뺄셈 함수
    //두 Complex 객체의 실수부, 허수부를 각각 뺀 새로운 Complex를 반환
    Complex ComplexSub(const Complex& a, const Complex& b);
};

#endif
