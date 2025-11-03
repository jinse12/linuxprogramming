//*************************************************************
// 제목 : 실습과제 2(실수부와 허수부를 멤버변수로 갖는 복소수 클래스)
// 날짜 : 2025년 11월 3일
// 작성자 : 2001178 김진세
//*************************************************************

#include <iostream> //입출력 헤더 포함
#include "Complex.hpp" //Complex.hpp 헤더 포함
#include "ComplexManager.hpp" //ComplexManager.hpp 헤더 포함
using namespace std; //std:: 생략

int main() {
    Complex x(2, 3), y(-5, 10), sum; //복소수 객체 3개 생성
    ComplexManager man;              //ComplexManager 객체 생성

    //ComplexManager의 멤버함수를 사용하여 두 복소수를 더함
    sum = man.ComplexAdd(x, y);

    cout << "두 복소수의 합은 ";
    sum.show(); //결과 출력

    return 0; //실행 종료
}
