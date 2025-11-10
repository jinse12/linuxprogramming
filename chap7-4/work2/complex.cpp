#include <iostream> //입출력 사용을 위한 헤더 포함
#include "complex.hpp" //complex 클래스 헤더 포함
using namespace std; //std:: 생략

//생성자 구현
Complex::Complex(double r, double i) {
    real = r;
    img = i;
    cout << "복소수 " << real << " + " << img << "j 생성" << endl;
}

//프렌드 함수로 곱셈 연산자 구현
//(a+bi)*(c+di)=(ac-bd)+(ad+bc)i
Complex operator*(const Complex& a, const Complex& b) {
    Complex tmp; //연산 결과를 저장할 임시 객체 생성
    tmp.real = a.real * b.real - a.img * b.img; //실수부 계산
    tmp.img  = a.real * b.img + a.img * b.real; //허수부 계산
    return tmp; //계산 결과 반환
}

//프렌드 함수 전위 증가 연산자
Complex& operator++(Complex& a) {
    ++a.real;
    ++a.img;
    return a; //증가된 객체 참조 반환
}

//프렌드 함수 후위 감소 연산자
Complex operator--(Complex& a, int) {
    Complex tmp = a; //현재 상태 저장
    a.real--; //실수부 감소
    a.img--;  //허수부 감소
    return tmp; //변경 전 상태 반환
}

//복소수 출력 함수
void Complex::show() {
    cout << real << " + " << img << "j " << endl;
}
