//**********************************************
// 제목: 실습과제 2
// 날짜: 2025년 11월 20일
// 작성자: 2001178 김진세
//**********************************************
#include <iostream> //입출력 사용을 위해 포함
using namespace std;//std:: 생략

class Circle { //Circle 클래스 선언
    int radius; //원의 반지름을 저장하는 멤버 변수 선언
public: //public으로 멤버 함수 외부 접근 허용
    //매개변수 생성자는 radius 값을 전달발아 멤버 변수 radius를 초기화
    //기본값이 1이므로 Circle()호출 시 radius = 1로 초기화됨
    Circle(int radius = 1) { this->radius = radius; }
    //radius는 private이므로 외부에서 직접 접근이 불가능
    //main()에서 Circle 객체의 반지름을 출력할 때
    //get함수를 통해 값을 가져온다
    int getRadius() { return radius; }

    //Circle 객체 비교를 위한 > 연산자 오버로딩
    //다른 Circle 객체의 반지름과 현재 객체의 반지름을 비교함
    //other 객체를 변경하지 않고(const) 참조로 받음. 둘을 비교해야하기 때문에
    bool operator>(const Circle& other) const {
        return this->radius > other.radius;
    }
};

template <class T> //템플릿 매개변수 선언. 자료형을 일반화함
T bigger(T a, T b) { //두개의 매개변수를 비교하여 큰 값을 반환하는 템플릿 함수
    if (a > b) return a;
    else return b;
}

int main() {
    int a = 20, b = 50, c; //int형 변수를 20과 50으로 초기화
    c = bigger(a, b); //int형 bigger 함수 생성. a, b중 큰 값을 c에 반환함
    cout << "20과 50중 큰 값은 " << c << endl; //큰 값 c를 출력

    Circle donut(10), pizza(20), y; //반지름이 각각 10, 20인 Circle 객체 donut, pizza 생성, y 생성
    y = bigger(donut, pizza); //bigger()템플릿 함수가 Circle 타입으로 자동 생성됨. operator로 비교. 
    cout << "donut과 pizza중 큰 반지름은 " << y.getRadius() << endl; //y는 pizza와 동일한 객체가 되어 반지름 20 출력

    return 0;
}
