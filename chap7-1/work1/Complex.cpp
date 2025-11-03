#include "Complex.hpp" //Complex.hpp 헤더파일 포함

// Complex 생성자 정의, 실수부와 허수부를 매개변수로 초기화
//객체가 생성될 때 콘솔에 생성 메시지 출력
Complex::Complex(double r, double i) : real(r), img(i) {
    cout << "복소수 " << real << "+" << img << "j 생성" << endl;
}

// show() 멤버함수 정의
void Complex::show() const {
    cout << real << "+" << img << "j" << endl;
}

// 전역함수 ComplexAdd 정의.
// Complex 클래스의 friend 함수이므로 private 멤버에 접근 가능
// 합한 결과를 저장할 Complex 객체를 참조로 받아서 리턴한다
void ComplexAdd(const Complex& a, const Complex& b, Complex& result) {
    // 실수부끼리 더하고 허수부끼리 더함.
    result.real = a.real + b.real;
    result.img = a.img + b.img;
}
