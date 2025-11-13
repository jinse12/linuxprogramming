#include "shape.hpp" //Shape, Circle, Rect, Triangle 클래스의 선언을 포함

//Shape 클래스 구현
//기본 생성자
Shape::Shape() : x(0), y(0) {}

//좌표 설정 함수
void Shape::setXY(int x, int y) {
    this->x = x;
    this->y = y;
}

//파생클래스에서 사용하는 getter 함수
int Shape::getX() const { return x; }
int Shape::getY() const { return y; }


//Circle 클래스 구현
void Circle::setCircle(int x, int y, int r) {
    setXY(x, y); //부모의 setXY() 호출
    radius = r;
}

void Circle::show() const { //Circle 클래스의 출력 메시지 생성
    cout << "좌표 (" << getX() << "," << getY() << ")에 반지름 "
         << radius << "인 원" << endl;
}


//Rect 클래스 구현
void Rect::setRect(int x, int y, int w, int h) {
    setXY(x, y);
    width = w;
    height = h;
}

void Rect::show() const { //Rect 클래스의 출력 메시지 생성
    cout << "좌표 (" << getX() << "," << getY() << ")에 폭 "
         << width << ", 높이 " << height << "인 직사각형" << endl;
}


//Triangle 클래스 구현
void Triangle::setTriangle(int x, int y, int b, int h) {
    setXY(x, y);
    base = b;
    height = h;
}

void Triangle::show() const { //Triangle 클래스의 출력 메시지 생성
    cout << "좌표 (" << getX() << "," << getY() << ")에 밑변 "
         << base << ", 높이 " << height << "인 삼각형" << endl;
}
