#ifndef _BOOK_HPP_ //중복 포함 방지
#define _BOOK_HPP_

#include <string> //문자열을 사용하기 위해 string 포함
using namespace std; //std:: 생략

//책 정보를 저장하는 Book 클래스
class Book {
    string title; //책 제목 저장
    int price;    //책 가격 저장
    int page;     //책 페이지 수 저장

public:
    Book(string t = "", int p = 0, int pg = 0); //생성자: 제목, 가격, 페이지 수 초기화
    void show(); //책 정보 출력 함수

    //! 연산자: 가격이 0이면 공짜로 판단
    bool operator!() const; //const: 멤버 변수 변경 금지
};

#endif
