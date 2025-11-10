#ifndef _BOOK_HPP_ //중복 포함 방지
#define _BOOK_HPP_

#include <string> //문자열을 사용하기 위해 string 포함
using namespace std; //std:: 생략

//책 정보를 저장하는 Book 클래스
class Book {
private:
    string title; //책 제목 저장
    int price;    //책 가격 저장
    int page;     //책 페이지 수 저장

public:
    Book(string t = "", int p = 0, int pg = 0); //생성자 선언
    void show(); //책 정보 출력
    string getTitle() const; //책 제목 반환

    //! 연산자: 가격이 0이면 true 반환
    bool operator!() const;
};

//Book 객체와 string 비교: 사전 순 비교
bool operator<(const string& str, const Book& book); //string < Book
bool operator<(const Book& book, const string& str); //Book < string

#endif
