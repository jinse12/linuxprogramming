#ifndef _BOOK_HPP_ //중복 포함 방지
#define _BOOK_HPP_

#include <string> //문자열을 사용하기 위해 string 포함
using namespace std; //std:: 생략

//책 정보를 저장하는 Book 클래스
class Book {
private:
    string title; //책 제목
    int price;    //책 가격
    int page;     //책 페이지 수

public:
    Book(string t = "", int p = 0, int pg = 0); //생성자 선언
    void show(); //출력 함수

    //friend 선언으로 외부 함수에서 private 멤버 접근 가능
    friend Book& operator+=(Book& b, int value);
    friend Book& operator-=(Book& b, int value);
};

#endif
