//*************************************************************
// 제목 : 실습과제 3(실수부와 허수부를 멤버변수로 갖는 복소수 클래스)
// 날짜 : 2025년 11월 3일
// 작성자 : 2001178 김진세
//*************************************************************
#include <iostream>             //입출력 헤더 포함
#include "Complex.hpp"          //Complex 클래스 포함
#include "ComplexManager.hpp"   //ComplexManager 클래스 포함
using namespace std;            //std:: 생략

int main() {
    //복소수 객체 생성 (x = 5+5j, y = 2+2j)
    Complex x(5, 5), y(2, 2), sum, sub;

    //복소수 연산을 수행할 객체 생성
    ComplexManager man;

    //덧셈 수행
    sum = man.ComplexAdd(x, y);
    cout << "두 복소수의 합은 ";
    sum.show(); //결과 출력

    //뺄셈 수행
    sub = man.ComplexSub(x, y);
    cout << "두 복소수의 차는 ";
    sub.show(); //결과 출력

    return 0;
}
