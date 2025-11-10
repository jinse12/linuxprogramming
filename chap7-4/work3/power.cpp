#include "power.hpp"  //Power 클래스 선언 포함

//생성자 구현
Power::Power(int kick, int punch) {
    //매개변수로 멤버변수 초기화
    this->kick = kick;
    this->punch = punch;
}

//show 함수 구현
//현재 Power 객체의 kick, punch 값을 출력
void Power::show() {
    cout << "kick=" << kick << ", punch=" << punch << endl;
}

//friend 함수로 정의된 곱셈 연산자 오버로딩
//왼쪽 피연산자가 int이므로 Power 멤버 함수로는 불가능
Power operator*(int value, Power a) {
    Power tmp; //임시 객체 생성
    tmp.kick = a.kick * value;   //a의 kick에 정수 value를 곱함
    tmp.punch = a.punch * value; //a의 punch에 정수 value를 곱함
    return tmp; //계산 결과를 반환
}
