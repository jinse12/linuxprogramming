#include "ComplexManager.hpp" //ComplexManager.hpp 헤더 포함

//ComplexAdd() 멤버 함수 정의
//두 복소수를 더한 결과를 반환
Complex ComplexManager::ComplexAdd(const Complex& a, const Complex& b) {
    //friend로 private 멤버 접근 가능
    double r = a.real + b.real; //실수부 더하기
    double i = a.img + b.img;   //허수부 더하기

    //결과 복소수를 반환
    return Complex(r, i);
}

//ComplexSub() 멤버 함수 정의
//두 복소수의 차를 반환
Complex ComplexManager::ComplexSub(const Complex& a, const Complex& b) {
    double r = a.real - b.real; //실수부 빼기
    double i = a.img - b.img;   //허수부 빼기

    //결과 복소수를 반환
    return Complex(r, i);
}
