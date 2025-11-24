#include <iostream>
using namespace std;

template <class T1, class T2>
class GClass {
    T1 data1;
    T2 data2;
public:
    GClass();
    void set(T1 a, T2 b);
    void get(T1& a, T2& b);
    void swap(); // 멤버 함수 추가
};

// 생성자
template <class T1, class T2>
GClass<T1, T2>::GClass() {
    data1 = 0;
    data2 = 0;
}

// 값 설정
template <class T1, class T2>
void GClass<T1, T2>::set(T1 a, T2 b) {
    data1 = a;
    data2 = b;
}

// 값 가져오기
template <class T1, class T2>
void GClass<T1, T2>::get(T1& a, T2& b) {
    a = data1;
    b = data2;
}

// 값 교환 (swap)
template <class T1, class T2>
void GClass<T1, T2>::swap() {
    T1 temp = data1;
    data1 = data2; // T1과 T2가 같은 타입이어야 안전
    data2 = temp;
}

int main() {
    int a, b;
    GClass<int, int> x;
    x.set(2, 5);
    x.get(a, b);
    cout << "a=" << a << '\t' << "b=" << b << endl;

    x.swap(); // 값 교환
    x.get(a, b);
    cout << "a=" << a << '\t' << "b=" << b << endl;
}
