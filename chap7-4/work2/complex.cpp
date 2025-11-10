#include <iostream> //입출력 사용을 위한 헤더 포함
#include "complex.hpp" //complex 클래스 헤더 포함
using namespace std; //std:: 생략

//생성자 구현
Complex::Complex(double r, double i) {
    real = r;
    img = i;
    cout << "복소수 " << real << " + " << img << "j 생성" << endl;
}

//프렌드 함수 전위 증가 연산자
Complex& operator++(Complex& a) {
    ++a.real;
    ++a.img;
    return a; //증가된 객체 참조 반환
}

//프렌드 함수 후위 감소 연산자
Complex operator--(Complex& a, int) {
    Complex tmp = a; //감소 이전 객체 상태 저장
    a.real--; //실수부 감소
    a.img--;  //허수부 감소
    return tmp; //감소하기 이전의 객체 상태를 반환
}

//복소수 출력 함수
void Complex::show() {
    cout << real << " + " << img << "j " << endl;
}
