//*********************************************
// 제목: C++ 교재 실습문제 2번
// 날짜: 2025년 11월 17일
// 작성자: 2001178 김진세
//*********************************************

#include <iostream>  //입출력 사용
#include <string>    //문자열 사용
using namespace std; //std:: 생략

//기본 클래스 Circle 선언
class Circle {
    int radius; //멤버 변수 선언
public:
    Circle(int radius=0) { this->radius = radius; } //매개변수 생성자: 반지름 초기화, 기본값 0
    int getRadius() { return radius; } //반지름 반환
    void setRadius(int radius) { this->radius = radius; } //반지름 설정
    double getArea() { return 3.14 * radius * radius; } //원의 면적 계산
};

//Circle을 상속받은 NamedCircle 클래스 선언
class NamedCircle : public Circle {
    string name; //멤버변수 선언
public:
    //매개변수 생성자: radius 0, name을 빈 문자열로 초기화
    NamedCircle(int radius=0, string name="") : Circle(radius), name(name) {
    }

    //반지름과 이름을 동시에 설정하는 함수
    void setNamedCircle(int radius, string name) { 
        setRadius(radius); //Circle 클래스의 setRadius 호출
        this->name = name; //이름 설정
    }

    string getName() { return name; } //이름 반환
};

int main() {
    NamedCircle pizza[5]; //NamedCircle 배열 5개 선언, 기본 생성자가 호출됨
    int r; //반지름 입력 변수
    string n; //이름 입력 변수

    cout << "5 개의 정수 반지름과 원의 이름을 입력하세요" << endl;

    //사용자로부터 5개의 원 정보 입력 받기
    for(int i=0; i<5; i++){
        cout << i+1 << ">> ";
        cin >> r >> n; //반지름과 이름 입력
        pizza[i].setNamedCircle(r, n); //각 배열 요소의 반지름과 이름 설정
    }

    //가장 큰 원 찾기: 초기값으로 첫 번째 원 선택
    int idxMax = 0; 
    double maxArea = pizza[0].getArea(); //첫 번째 원의 면적

    //배열로 최대 면적인 원 찾기
    for(int i=1; i<5; i++){
        if(pizza[i].getArea() > maxArea){ //더 큰 면적을 발견하면
            maxArea = pizza[i].getArea(); //최대 면적 저장
            idxMax = i; //최대 원 인덱스 저장
        }
    }

    //결과 출력
    cout << "가장 면적이 큰 피자는 " << pizza[idxMax].getName() << "입니다." << endl;
}
