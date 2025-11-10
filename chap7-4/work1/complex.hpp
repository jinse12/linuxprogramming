#ifndef COMPLEX_HPP
#define COMPLEX_HPP

class Complex {
private:
    double real;  // 실수부
    double img;   // 허수부

public:
    // 생성자
    Complex(double r = 0, double i = 0);

    // 연산자 오버로딩 (멤버 함수)
    Complex operator*(Complex a); // 곱셈
    Complex& operator++();        // 전위 증가 (++x)
    Complex operator--(int);      // 후위 감소 (x--)

    // 출력 함수
    void show();

    // 생성 메시지 출력용 함수 (optional)
    void printCreate();
};

#endi
