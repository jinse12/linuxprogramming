#include "ComplexManager.hpp" //헤더 포함

//ComplexAdd() 멤버함수 정의
Complex ComplexManager::ComplexAdd(const Complex& a, const Complex& b) {
    //a, b의 private 멤버에 접근 가능 (friend 선언으로
    double r = a.real + b.real;
    double i = a.img + b.img;

    //결과를 담은 Complex 객체 생성 및 반환
    return Complex(r, i);
}
