#include <iostream>    //입출력 기능을 사용하기 위해 포함
#include "complex.hpp" //Complex 클래스 정의 포함
using namespace std;   //std:: 생략

//생성자 구현
//this-> 사용하여 멤버 변수 초기화
Complex::Complex(double r, double i) {
    this->real = r;  
    this->img = i;
}

//곱셈 연산자 오버로딩 구현
Complex Complex::operator*(Complex a) {
    Complex tmp; //결과를 저장할 임시 객체  
    //복소수 곱셈: (a+bi)*(c+di) = (ac - bd) + (ad + bc)i
    tmp.real = this->real * a.real - this->img * a.img; //실수부: ac - bd
    tmp.img = this->real * a.img + this->img * a.real;  //허수부: ad + bc
    return tmp;  //곱셈 결과가 저장된 객체 반환
}

//출력 함수 구현
void Complex::show() {
    //"real + imgj" 형태로 복소수 출력
    cout << this->real << " + " << this->img << "j" << endl;
}
