#include <iostream> //입출력 사용을 위한 헤더 포함
#include "book.hpp" //Book 클래스의 선언 포함

//생성자 구현: 멤버 변수 초기화
Book::Book(string t, int p, int pg) {
    title = t;
    price = p;
    page = pg;
}

//책 정보 출력
void Book::show() {
    cout << title << " " << price << "원 " << page << " 페이지" << endl;
}

//책 제목 반환
string Book::getTitle() const {
    return title;
}

//! 연산자 구현: 가격이 0이면 true 반환
bool Book::operator!() const {
    return price == 0;
}

//외부 연산자 함수 구현: string < Book
bool operator<(const string& str, const Book& book) {
    return str < book.getTitle(); //사전 순 비교
}

//외부 연산자 함수 구현: Book < string
bool operator<(const Book& book, const string& str) {
    return book.getTitle() < str; //사전 순 비교
}
