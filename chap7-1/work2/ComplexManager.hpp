#ifndef COMPLEXMANAGER_HPP //중복 포함 방지
#define COMPLEXMANAGER_HPP

#include "Complex.hpp" //Complex.hpp 헤더 포함

//ComplexManager 클래스 선언
class ComplexManager {
public:
    //복소수 덧셈을 수행하는 멤버함수
    //두 Complex 객체를 더한 결과를 새로운 Complex로 반환
    Complex ComplexAdd(const Complex& a, const Complex& b);
};

#endif
