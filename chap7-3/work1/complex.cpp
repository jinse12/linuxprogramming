#include <iostream> //입출력 기능 사용을 위해 포함
#include "complex.hpp" //complex.hpp 포함
using namespace std; //std:: 생략

//생성자 구현
//this->real, this->img를 사용해 멤버 변수 초기화
Complex::Complex(double r, double i) {
    this->real = r;
    this->img = i;
}

//+ 연산자 중복 구현
//객체(this)와 다른 Complex 객체 a를 더해 새로운 Complex 객체(tmp)를 반환
Complex Complex::operator+(Complex a) {
    Complex tmp;           //결과를 저장할 임시 객체
    tmp.real = this->real + a.real; //실수부 합을 tmp.real에 저장
    tmp.img = this->img + a.img;    //허수부 합을 tmp.img에 저장
    return tmp;            //합이 저장된 객체 반환
}

//show 함수 구현
//복소수 "real + imgj" 출력
void Complex::show() {
    cout << this->real << " + " << this->img << "j" << endl;
}
