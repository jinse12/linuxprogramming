//******************************************************
// 제목: 실습과제 3
// 날짜: 2025년 11월 27일
// 작성자: 2001178 김진세
//******************************************************

#include <iostream>  //입출력 사용을 위해 포함
#include <vector>    //벡터 사용을 위해 포함
#include <algorithm> //max, min_element, sort같은 알고리즘 사용
using namespace std; //std:: 생략

int main() {
    vector<string> words; //문자열 5개를 저장할 벡터 생성
    string input;         //입력값을 임시 저장할 변수 선언

    for (int i = 0; i < 5; i++) {
        cout << "문자열을 입력하세요: ";
        cin >> input;           //입력받은 정수 값을 input에 저장
        words.push_back(input); //입력받은 값을 벡터 맨 뒤에 추가
    }

    sort(words.begin(), words.end()); //벡터의 처음과 끝의 범위를 오름차순으로 정렬하는 sort 함수
    vector<string>::iterator it;      //iterator 객체 생성
    cout << "사전에서 나오는 순서" << endl;
    //벡터의 처음부터 끝까지 iterator를 이동시키면서 각 요소를 하나씩 출력하는 반복문
    for (it = words.begin(); it < words.end(); it++)
        cout << *it << ' ' << endl;
}
