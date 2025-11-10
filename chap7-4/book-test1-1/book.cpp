#include <iostream> //입출력 사용을 위해 포함
#include "book.hpp" //Book 클래스의 선언 포함

//생성자 구현
Book::Book(string title, int price, int page) {
    this->title = title; //책 제목 초기화
    this->price = price; //가격 초기화
    this->page = page;   //페이지 초기화
}

//출력 함수 구현
void Book::show() {
    cout << title << " " << price << "원 " << page << " 페이지" << endl;
}

//+= 연산자 멤버함수 구현
Book& Book::operator+=(int value) {
    price += value; //가격 증가
    return *this;   //자기 자신 반환
}

//-= 연산자 멤버함수 구현
Book& Book::operator-=(int value) {
    price -= value; //가격 감소
    return *this;   //자기 자신 반환
}
