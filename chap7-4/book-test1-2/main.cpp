#include <iostream> //입출력 사용 위한 헤더 포함
#include "book.hpp" //Book 클래스의 선언 포함

int main() {
    Book a("청춘", 20000, 300), b("미래", 30000, 500);

    a += 500; //외부 함수 호출
    b -= 500; //외부 함수 호출

    a.show(); //청춘 20500원 300 페이지
    b.show(); //미래 29500원 500 페이지

    return 0;
}
