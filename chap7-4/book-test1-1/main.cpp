#include <iostream> //입출력 사용을 위한 헤더 포함
#include "book.hpp" //Book 클래스의 선언 포함

int main() {
    Book a("청춘", 20000, 300), b("미래", 30000, 500);

    a += 500; //a의 가격 500 증가
    b -= 500; //b의 가격 500 감소

    a.show(); //청춘 20500원 300 페이지
    b.show(); //미래 29500원 500 페이지

    return 0;
}
