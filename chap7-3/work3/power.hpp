#ifndef POWER_HPP //헤더 중복 포함 방지
#define POWER_HPP

//Power 클래스 선언, 멤버 변수 선언
class Power {
    int kick;
    int punch;

public:
    //기본값 0으로 생성자 선언
    Power(int k = 0, int p = 0);

    //Power - int 연산: kick과 punch를 감소
    Power operator-(int value);

    //출력 함수
    void show();
};

#endif
