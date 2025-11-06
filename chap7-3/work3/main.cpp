#include <iostream>   //입출력 기능을 사용하기 위해 포함
#include "power.hpp"  //Complex 클래스 정의 포함
using namespace std;  //std:: 생략

int main() {
    Power a(3, 5), b;  //Power 클래스 객체 생성
    a.show();          //a 출력 -> kick=3, punch=5
    b.show();          //b 출력 -> kick=0, punch=0

    b = a - 2;         //a에서 2를 빼고 b에 저장
                       //이때 operator-(int value)가 호출되고
                       //this=a, value=2, tmp가 생성 후 반환된다     
    a.show();          //a 객체는 변하지 않음
    b.show();          //b 출력 -> kick=1, punch=3

    return 0;
}
