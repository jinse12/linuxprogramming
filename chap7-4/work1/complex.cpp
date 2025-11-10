#include <iostream> //입출력 사용을 위한 헤더 포함
#include "complex.hpp" //complex 클래스 헤더 포함
using namespace std; //std:: 생략

//생성자 구현
Complex::Complex(double r, double i) {
    real = r;
    img = i;
    cout << "복소수 " << real << " + " << img << "j 생성" << endl;
}

//복소수 곱셈 연산자 오버로딩
Complex Complex::operator*(Complex a) {
    Complex tmp; //연산 결과를 저장할 임시 객체
    tmp.real = this->real * a.real - this->img * a.img; //실수부 계산
    tmp.img = this->real * a.img + this->img * a.real; //허수부 계산
    return tmp; //계산 결과 반환
}

//전위 증가 연산자
//실수부와 허수부를 각각 1씩 증가
Complex& Complex::operator++() {
    ++real;
    ++img;
    return *this; //자기 자신을 참조로 반환
}

//후위 감소 연산자
//감소 전 값을 반환해야 하므로 복사본을 만들어 반환
Complex Complex::operator--(int) {
    Complex tmp = *this; //현재 상태 저장
    real--; //실수부 감소
    img--;  //허수부 감소
    return tmp; //변경 전 상태 반환
}

//복소수 출력 함수
void Complex::show() {
    cout << real << " + " << img << "j " << endl;
}
