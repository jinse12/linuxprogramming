#include <iostream>   //입출력을 사용하기 위해 포함
#include "shape.hpp"  //Shape, Circle, Rect, Triangle 클래스의 선언을 포함
using namespace std;

int main() {
    Circle x;      //원 객체
    Rect y;        //직사각형 객체
    Triangle z;    //삼각형 객체

    x.setCircle(0, 0, 2);      //(0,0), 반지름 2
    y.setRect(1, 1, 5, 10);    //(1,1), 폭 5, 높이 10
    z.setTriangle(2, 2, 3, 4); //(2,2), 밑변 3, 높이 4

    x.show(); //원 정보 출력
    y.show(); //직사각형 정보 출력
    z.show(); //삼각형 정보 출력

    return 0;
}
