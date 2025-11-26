//******************************************************
// 제목: 실습과제 2
// 날짜: 2025년 11월 26일
// 작성자: 2001178 김진세
//******************************************************

#include <iostream> //입출력 사용을 위해 포함
using namespace std; //std:: 생략을 위해 사용

//템플릿 클래스 정의
//T는 배열에 저장할 데이터 타입
template <class T>
class Container {
    T* p;       //동적 배열을 가리키는 포인터
    int size;   //배열의 크기

public:
    //생성자: n개의 T 타입 요소를 저장할 배열 생성
    Container(int n) {
        size = n;           //저장할 수 있는 데이터 개수 기록
        p = new T[n];       //T 타입의 동적 배열 생성
    }

    //소멸자: 동적 할당된 메모리 해제
    ~Container() {
        delete[] p;
    }

    //index 위치에 value 값을 저장하는 함수
    void set(int index, T value) {
        p[index] = value;
    }

    //index 위치의 값을 반환하는 함수
    T get(int index) {
        return p[index];
    }
};

int main() {
    //char 타입을 저장하는 컨테이너 생성 (크기 26)
    Container<char> c(26);

    //배열에 'a'~'z' 저장
    for (int i = 0; i < 26; i++)
        c.set(i, 'a' + i);

    //배열의 값을 역순으로 출력
    for (int i = 25; i >= 0; i--)
        cout << c.get(i);

    cout << endl;
}
