//************************************************
// 제목: 교재 실습문제 1번
// 날짜: 2025년 11월 17일
// 작성자: 2001178 김진세
//************************************************
#include <iostream>  //입출력 사용을 위해 포함
#include <string>    //문자열 사용을 위해 포함
using namespace std; //std:: 생략

//기본 클래스 Circle 선언
class Circle {
    int radius; //멤버 변수 선언
public:
    Circle(int radius=0) { this->radius = radius; } //매개변수 생성자, 0으로 radius 초기화
    int getRadius() { return radius; } //radius 반환
    void setRadius(int radius) { this->radius = radius; } //radius 설정
    double getArea() { return 3.14 * radius * radius; } //원 면적 계산
};

//Circle을 상속받은 NamedCircle 클래스
class NamedCircle : public Circle {
    string name; //멤버변수 선언
public:
    //매개변수 생성자. Circle의 생성자 호출로 radius 초기화, name 초기화
    NamedCircle(int radius, string name) : Circle(radius), name(name) { 
    }
    void show() { //원의 반지름과 이름을 출력
        cout << "반지름이 " << getRadius() << "인 " << name << endl;
    }
};

int main() {
    NamedCircle waffle(3, "waffle"); //NamedCircle 객체 생성. radius 3, name "waffle"
    waffle.show(); //정보 출력
}
