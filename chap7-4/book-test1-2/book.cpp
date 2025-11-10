#include <iostream> //입출력 사용 위한 헤더 포함
#include "book.hpp" //Book 클래스의 선언 포함

//생성자 구현
Book::Book(string t, int p, int pg) {
    title = t;
    price = p;
    page = pg;
}

//책 정보 출력
void Book::show() {
    cout << title << " " << price << "원 " << page << " 페이지" << endl;
}

//외부 함수로 += 연산자 구현
Book& operator+=(Book& b, int value) {
    b.price += value; //가격 증가
    return b;
}

//외부 함수로 -= 연산자 구현
Book& operator-=(Book& b, int value) {
    b.price -= value; //가격 감소
    return b;
}
