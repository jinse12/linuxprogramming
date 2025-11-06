#ifndef COMPLEX_HPP // 중복 방지
#define COMPLEX_HPP
// Complex 복소수 클래스
class Complex {
public:
    double real; // 실수부
    double img;  // 허수부

public:
    // 생성자 선언
    Complex(double r = 0, double i = 0);

    // + 연산자 중복
    // 다른 Complex 객체 a와 더한 결과를 반환
    Complex operator+(Complex a);

    // 복소수를 출력하는 함수
    void show();
};

#endif
