#include "power.hpp"  //Power 클래스 선언 포함

int main() {
    //Power 객체 생성
    //a는 kick=3, punch=5로 초기화됨
    //b는 기본값 (0, 0)으로 초기화됨
    Power a(3, 5), b;

    //현재 상태 출력
    a.show();
    b.show();

    //friend 함수를 호출하여 정수 * Power 연산
    //각 멤버 변수에 2를 곱한 새로운 Power 객체 생성
    b = 2 * a;

    //결과 출력
    a.show();  //a는 변하지 않음
    b.show();  //b는 (6, 10)으로 변경됨

    return 0;
}
