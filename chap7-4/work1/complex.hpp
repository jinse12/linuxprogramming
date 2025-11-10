//***********************************************
// 제목 : 실습과제 1
// 날짜 : 2025년 11월 10일
// 작성자: 2001178 김진세
//***********************************************

#ifndef COMPLEX_HPP //중복 포함 방지 
#define COMPLEX_HPP

//Complex 클래스 선언
class Complex {
private:
    double real;  //실수부 변수
    double img;   //허수부 변수

public:
    //생성자 (기본값을 0으로
    Complex(double r = 0, double i = 0);

    //연산자 오버로딩 (멤버 함수로 구현)
    Complex& operator++();        //전위 증가 연산자
    Complex operator--(int);      //후위 감소 연산자

    //복소수 출력 함수
    void show();
};

#endif
