//********************************************
// 제목: 실습과제1
// 날짜: 2025년 11월 20일
// 작성자: 2001178 김진세
//********************************************

#include <iostream> //입출력 사용을 위해 포함
using namespace std;//std:: 생략

//템플릿 함수 정의
template <class T> //자료형을 템플릿 매개변수로 선언
T getmax(T data[], int n) { //최대값을 구할 배열 data에서 n개의 원소를 합한 결과를 리턴하는 함수
    T max = data[0];            //배열의 첫 번째 워노를 최대값으로 초기화
    for (int i = 1; i < n; i++) {
        if (data[i] > max) {
            max = data[i];      //현재 원소가 max보다 크면 max 갱신
        }
    }
    return max;                 //구한 최대값을 반환
}

int main() {
    int a[5] = {-5, 10, 30, 20, 6}; //정수형 배열
    double b[4] = {3.14, 1.5, -6.0, 0.5}; //실수형 배열
    char c[3] = {'a', 'x', 'p'}; //문자형 배열

    //getmax 함수의 자료형에 일치하는 매개변수를 화면에 출력한다
    cout << "정수 배열의 최대값은 " << getmax(a, 5) << endl; //int 배열 a에서 최대값 계산
    cout << "실수 배열의 최대값은 " << getmax(b, 4) << endl; //double 배열 b에서 최대값 계산
    cout << "문자 배열의 최대값은 " << getmax(c, 3) << endl; //char 배열 c에서 최대값 계산

    return 0;
}
