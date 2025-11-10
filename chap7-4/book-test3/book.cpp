#include <iostream> //입출력 사용을 위해 포함
#include "book.hpp" //Book 클래스의 선언 포함

//생성자 구현. 멤버 변수 초기화
Book::Book(string t, int p, int pg) {
    title = t; //책 제목 초기화
    price = p; //책 가격 초기화
    page = pg; //페이지 수 초기화
}

//책 정보 출력
void Book::show() {
    cout << title << " " << price << "원 " << page << " 페이지" << endl;
}

//! 연산자 구현: 가격이 0이면 true 반환
bool Book::operator!() const {
    return price == 0; //가격이 0이면 true, 아니면 false
}
