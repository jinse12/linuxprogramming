#ifndef COMPLEX_HPP //헤더 중복 포함 방지
#define COMPLEX_HPP

//Complex 클래스 선언
class Complex {
private:
    double real; //실수부
    double img;  //허수부

public:
    //생성자 (기본값을 0으로)
    Complex(double r = 0, double i = 0);

    //프렌드 연산자 함수 선언
    //Complex 클래스의 private 멤버(real, img)에도 접근 가능
    friend Complex& operator++(Complex& a);       //전위 증가
    friend Complex operator--(Complex& a, int);   //후위 감소

    //출력 함수
    void show();
}

#endif
