#include <iostream> //입출력 사용을 위해 포함
#include "book.hpp" //Book 클래스의 선언 포함

int main() {
    Book book("벼룩시장", 0, 50); //책 객체 생성, 가격 0

    if(!book) //가격이 0이면 true
        cout << "공짜다" << endl; //메시지 출력

    return 0;
}
