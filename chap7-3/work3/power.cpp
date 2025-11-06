#include <iostream>   //입출력 기능을 사용하기 위해 포함
#include "power.hpp"  //Complex 클래스 정의 포함
using namespace std;  //std:: 생략

//생성자 구현
//this-> 사용하여 멤버 변수 초기화
Power::Power(int k, int p) {
    this->kick = k;
    this->punch = p;
}

//Power 클래스에서 선언한 - 연산자 함수 구현
//this 객체의 kick, punch에 전달된 정수(value)를 빼서 새로운 Power 객체로 반환
Power Power::operator - (int value) {
    Power tmp; //연산 결과를 저장할 임시 객체 생성
    tmp.kick = this->kick - value;   //kick 감소
    tmp.punch = this->punch - value; //punch 감소
    return tmp; //계산된 결과 객체를 반환
}

//멤버 변수 출력 함수 구현
void Power::show() {
    cout << "kick=" << this->kick << ", punch=" << this->punch << endl;
}
