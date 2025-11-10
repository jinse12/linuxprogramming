#include <iostream>     //입출력 사용을 위한 헤더 포함
#include "complex.hpp"  //Complex 클래스 선언 포함
using namespace std;    //std:: 생략

int main() {
    Complex x(2, 3); //생성자에서 Complex 객체 생성시 자동으로 메시지 출력

    ++x; //전위 증가 연산
    cout << "증가결과 "; //출력 문구
    x.show(); //증가된 값 출력

    x--; //후위 감소 연산
    cout << "감소결과 "; //출력 문구
    x.show(); //감소된 값 출

    return 0;
}
