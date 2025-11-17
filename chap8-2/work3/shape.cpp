//*******************************************
// 제목: 실습과제 3
// 날짜: 2025년 11월 17일
// 작성자: 2001178 김진세
//*******************************************

#include <iostream>  //입출력 사용을 위해 포함
using namespace std; //std:: 생략

//기본 클래스 Shape 선언
class Shape {
private:      //Shape 클래스의 멤버 변수를 private로 선언
    int x, y;
public:   //
    Shape(int x, int y) : x(x), y(y) { cout << "Shape 생성, "; } //생성자, 좌표 초기화 후 메시지 출력
    ~Shape() { cout << "Shape 소멸" << endl; } //소멸자, 객체 소멸 시 메시지 출력
    //파생 클래스에서 x,y를 사용할 수 있도록 getter로 지정함
    int getX() { return x; } //x좌표 반환
    int getY() { return y; } //y좌표 반환
};

//Shape를 상속받은 Circle 클래스
class Circle : public Shape {
private:
    int radius; //원의 반지름
public:
    Circle(int x, int y, int r) : Shape(x, y), radius(r) { //기본 클래스 생성자 명시적 호출, 반지름 초기화
        cout << "Circle 생성" << endl; //Circle 생성 메시지 출력
    }
    ~Circle() {
        cout << "Circle 소멸, "; //Circle 소멸 메시지 출력
    }
    void show() { //Circle 정보 출력
        cout << "좌표 (" << getX() << "," << getY() << ")에 반지름 " 
             << radius << "인 원" << endl;
    }
};

//Shape를 상속받은 Rect 클래스
class Rect : public Shape {
private:  //Rect 클래스의 멤버 변수를 private로 설정
    int width, height;
public:  //Rect 클래스의 생성, 소멸 메시지와 정보 출력을 public으로 설정
    Rect(int x, int y, int w, int h) : Shape(x, y), width(w), height(h) { 
        cout << "Rect 생성" << endl; //Rect 생성 메시지 출력
    }
    ~Rect() {
        cout << "Rect 소멸, "; //Rect 소멸 메시지 출력
    }
    void show() { //Rect 정보 출력
        cout << "좌표 (" << getX() << "," << getY() << ")에 폭" 
             << width << ", 높이 " << height << "인 직사각형" << endl;
    }
};

// Shape를 상속받은 Triangle 클래스
class Triangle : public Shape {
private: //Triangle 클래스에서 사용할 멤버 변수를 private로 설정
    int base, height;
public:  //Triangle 클래스의 생성, 소멸 메시지와 정보를 public으로 선언
    Triangle(int x, int y, int b, int h) : Shape(x, y), base(b), height(h) {
        cout << "Triangle 생성" << endl; //Triangle 생성 메시지 출력
    }
    ~Triangle() {
        cout << "Triangle 소멸, "; //Triangle 소멸 메시지 출력
    }
    void show() { //Triangle 정보 출력
        cout << "좌표 (" << getX() << "," << getY() << ")에 밑변 " 
             << base << ", 높이 " << height << "인 삼각형" << endl;
    }
};

int main() {
    Circle x(0,0,2);     //Circle 객체 생성, Shape 생성자 호출 후 Circle 생성자 호출
    Rect y(1,1,5,10);    //Rect 객체 생성, Shape 생성자 호출 후 Rect 생성자 호출
    Triangle z(2,2,5,10);//Triangle 객체 생성, Shape 생성자 호출 후 Triangle 생성자 호출
    
    x.show(); //Circle 정보 출력
    y.show(); //Rect 정보 출력
    z.show(); //Triangle 정보 출력
    
}
