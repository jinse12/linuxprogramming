#include <iostream> //입출력 사용을 위한 헤더 포함
#include "complex.hpp" //complex 클래스 헤더 포함
using namespace std; //std:: 생략

//생성자 구현
Complex::Complex(double r, double i) {
    real = r;
    img = i;
    cout << "복소수 " << real << " + " << img << "j 생성" << endl;
}

//전위 증가 연산자
//실수부와 허수부가 각각 1씩 증가
Complex& Complex::operator++() {
    ++real;
    ++img;
    return *this; //자기 자신을 참조로 반환
}

//후위 감소 연산자
//현재 값을 반환하고 나중에 감소
Complex Complex::operator--(int) { //int는 구분자
    Complex tmp = *this; //현재 상태 저장
    real--; //실수부 감소
    img--;  //허수부 감소
    return tmp; //감소 전 상태 반환
}

//복소수 출력 함수
void Complex::show() {
    cout << real << " + " << img << "j " << endl;
}
