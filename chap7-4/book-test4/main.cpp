#include <iostream> //입출력 사용을 위해 포함
#include "book.hpp" //Book 클래스의 선언 포함

int main() {
    Book a("청춘", 20000, 300); //Book 객체 a 생성, 생성자 호출
    string b; //사용자 입력을 저장할 문자열 변수 선언

    cout << "책 이름을 입력하세요>>";
    getline(cin, b); //문자열 입력받고 b에 저장

    // 외부 연산자 함수 < 사용으로 Book 객체와 string 비교 가능
    if(b < a) //외부 연산자 함수 호출. 조건문으로 사전 순으로 비교
        cout << a.getTitle() << "이 " << b << "보다 뒤에 있구나!" << endl;

    return 0;
}
