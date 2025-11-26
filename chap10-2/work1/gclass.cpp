//******************************************************
// 제목: 실습과제 1
// 날짜: 2025년 11월 25일
// 작성자: 2001178 김진세
//******************************************************

#include <iostream> //입출력 사용을 위해 포함
using namespace std; //std:: 생략을 위해 사용

//어떤 자료형 타입도 적용 가능한 두개의 타입 매개변수를 받는 템플릿 클래스임을 선언
template <class T1, class T2>
class GClass {
    T1 data1; //클래스의 멤버변수 선언
    T2 data2; //각각 다른 타입일 수 있다.
public:
    GClass(); //기본 생성자 선언
    void set(T1 a, T2 b); //두 값을 외부에서 받아 멤버변수에 저장하는 함수
    void get(T1& a, T2& b); //두 값을 참조로 외부에 반환하는 함수
    void swap(); //두 값을 서로 바꾸는 함수
};

//생성자 정의. 객체가 생성될 때 data1, data2를 0으로 초기화
template <class T1, class T2>
GClass<T1, T2>::GClass() {
    data1 = 0;
    data2 = 0;
}

//값 설정. 외부에서 전달된 a,b,c,d 값을 각각 data1, data2에 저장
template <class T1, class T2>
void GClass<T1, T2>::set(T1 a, T2 b) {
    data1 = a;
    data2 = b;
}

//값을 참조로 반환. a,b,c,d에 data1,data2를 복사해서 전달
template <class T1, class T2>
void GClass<T1, T2>::get(T1& a, T2& b) {
    a = data1;
    b = data2;
}

//data1과 data2의 값을 서로 교환함.
template <class T1, class T2>
void GClass<T1, T2>::swap() {
    T1 temp = data1;
    data1 = data2; //T1과 T2가 같은 타입이어야 안전하다
    data2 = temp;
}

int main() {
    int a, b; //변수 선언
    GClass<int, int> x; //int 타입 매개변수로 템플릿이 만들어짐
    x.set(2, 5); //값 저장
    x.get(a, b); //값 출력
    cout << "a=" << a << '\t' << "b=" << b << endl;

    x.swap();    //값 교환
    x.get(a, b); //교환된 값 출력
    cout << "a=" << a << '\t' << "b=" << b << endl;

    double c, d; //변수 선언
    GClass<double, double> y; //double 타입 매개변수로 템플릿 생성
    y.set(3.14, 6.28); //값 저장
    y.get(c, d);       //값 출력
    cout << "c=" << c << '\t' << "d=" << d << endl;

    y.swap();          //값 교환
    y.get(c, d);       //교환된 값 출력
    cout << "c=" << c << '\t' << "d=" << d << endl;

    return 0;
}
