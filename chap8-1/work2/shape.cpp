#include "shape.hpp" //Shape, Circle, Rect, Triangle 클래스의 선언을 포함

//Shape 클래스 구현
Shape::Shape(): x(0), y(0){} //기본 생성자

void Shape::setXY(int x, int y){ //좌표 설정 함수
    this -> x = x; //객체의 멤버변수 x에 매개변수 x의 값을 대입
    this -> y = y; //객체의 멤버변수 y에 매개변수 y의 값을 대입
}
//x좌표 getter
int Shape::getX() const{
    return x;
}
//y좌표 getter
int Shape::getY() const{
    return y;
}

//Circle 클래스 구현
void Circle::setCircle(int x, int y, int r){ //원 설정
    setXY(x, y); //기본 클래스의 setXY() 호출
    radius = r;
}

void Circle::show() const{ //원 정보 출력
    cout << "좌표 (" << getX() << "," << getY() << ")에 반지름 "
    << radius << "인 원" << endl;
}

//Rect 클래스 구현
void Rect::setRect(int x, int y, int w, int h){ //직사각형 설정
    setXY(x, y); //기본 클래스의 setXY() 호출
    width = w;
    height = h;
}

void Rect::show() const{ //직사각형 정보 출력
    cout << "좌표 (" << getX() << "," << getY() << ")에 폭 " << width
    << ", 높이 " << height << "인 직사각형" << endl;
}

//Triangle 클래스 구현
void Triangle::setTriangle(int x, int y, int b, int h){ //삼각형 설정
    setXY(x, y); //기본 클래스의 setXY() 호출
    base = b;
    height = h;
}

void Triangle::show() const{ //삼각형 정보 출력
    cout << "좌표 (" << getX() << "," << getY() << ")에 밑변 " << base
    << ", 높이 " << height << "인 삼각형" << endl;
}
