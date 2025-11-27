//******************************************************
// 제목: 실습과제 2
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
        cout << "문자를 입력하시오: ";
        cin >> input; //입력받은 정수값을 input에 저장
        words.push_back(input); //입력받은 값을 벡터 맨 뒤에 추가
    }
    vector<string>::iterator it;  //이터레이터 객체를 선언
    it = max_element(words.begin(), words.end()); //벡터의 모든 원소에서 최대값을 찾는 함수
    cout << "사전에서 제일 뒤에 나오는 단어는 " << *it << endl; //최대값 출력 메시지. *it는 max_element가 반환한 최대값을 가리킨다.
    return 0;
}
