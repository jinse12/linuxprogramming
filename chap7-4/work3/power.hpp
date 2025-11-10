//************************************************
// 제목: 실습과제3
// 날짜: 2025년 11월 10일
// 작성자: 2001178 김진세
//************************************************

#ifndef POWER_H //중복 포함 방지
#define POWER_H

#include <iostream> //표준 입출력 사용을 위한 헤더 포함
using namespace std;//std:: 생략

//Power 클래스 선언부
//kick, punch를 멤버로 가지는 클래스
class Power {
    int kick;
    int punch;

public:
    //기본값이 0인 생성자 선언
    Power(int kick = 0, int punch = 0);

    //객체의 현재 값을 출력하는 멤버함수
    void show();

    //Power 객체와 정수를 곱하는 연산자 함수를 friend로 선언하여 외부 접근 허용
    friend Power operator*(int value, Power a);
};

#endif
