#ifndef COMPLEX_HPP //헤더 중복 포함 방지
#define COMPLEX_HPP

//Complex 복소수 클래스 선언
class Complex {
public:
    double real; //실수부
    double img;  //허수부

public:
    // 생성자 선언
    // 매개변수 r, i로 실수부와 허수부 초기화
    Complex(double r = 0, double i = 0);

    // 곱셈 연산자 오버로딩
    // 다른 Complex 객체 a와 곱한 결과를 새로운 Complex 객체로 반환
    Complex operator*(Complex a);

    // 복소수 출력 함수
    // "real + imgj" 형태로 출력
    void show();
};

#endif
