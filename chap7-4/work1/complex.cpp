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
    return *this; //자기 자신을 참조로 반환. 반환값을 참조로. 주소에 있는 값!이 리턴됨
    //*this는 전위 증가로 real, img가 1씩 증가한 현재 객체 자체를 가리킴. 그 객체가 그대로 반환된다.
}
//리턴값은 일반적으로 상수취급

//후위 감소 연산자. 후위는 상수이기 때문에 &를 안붙임
//현재 값을 반환하고 나중에 감소
Complex Complex::operator--(int) { //함수의 형태를 구분하기 위해 임의의 정수인 int를 선언.
    Complex tmp = *this; //증가 이전 객체 상태 저장
    real--; //실수부 감소
    img--;  //허수부 감소
    return tmp; //감소하기 이전의 객체 상태를 반환
}

//복소수 출력 함수
void Complex::show() {
    cout << real << " + " << img << "j " << endl;
}
