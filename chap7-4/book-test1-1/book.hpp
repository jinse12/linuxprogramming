#ifndef _BOOK_HPP_ //중복 포함 방지
#define _BOOK_HPP_

#include <string> //문자열을 사용하기 위해 string 포함
using namespace std; //std:: 생략

//Book 클래스 선언
class Book {
private:
    string title;   //책 제목
    int price;      //책 가격
    int page;       //페이지 수

public:
    //생성자 선언
    Book(string title = "", int price = 0, int page = 0);

    //출력 함수
    void show();

    //멤버함수로 +=, -= 연산자 중복
    Book& operator+=(int value); //가격 증가
    Book& operator-=(int value); //가격 감소
};

#endif
