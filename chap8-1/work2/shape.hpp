#ifndef _SHAPE_HPP_ //중복 포함 방지
#define _SHAPE_HPP_

#include <iostream> //입출력 사용을 위해 포함
using namespace std;//std:: 생략

//자식 클래스에서 사용할 공통기능을 Shape 클래스에 선언
class Shape {
protected:
    int x, y; //x, y를 protected 멤버로 선언
public:
    Shape(); //기본 생성자
    void setXY(int x, int y); //좌표 설정
    int getX() const; //x좌표 getter
    int getY() const; //y좌표 getter
};

//Shape 클래스를 상속받는 Circle 클래스 선언
class Circle : public Shape {
private:
    int radius; //반지름
public:
    void setCircle(int x, int y, int r); //원 설정
    void show() const; //원 정보 출력
};

//Shape 클래스를 상속받는 Rect 클래스
class Rect : public Shape {
private:
    int width; //폭
    int height; //높이
public:
    void setRect(int x, int y, int w, int h); //직사각형 설정
    void show() const; //직사각형 정보 출력
};

//Shape 클래스를 상속받는 Triangle 클래스
class Triangle : public Shape {
private:
    int base; //밑변
    int height; //높이
public:
    void setTriangle(int x, int y, int b, int h); //삼각형 설정
    void show() const; //삼각형 정보 출력
};

#endif
