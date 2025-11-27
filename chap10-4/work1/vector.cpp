//******************************************************
// 제목: 실습과제 1
// 날짜: 2025년 11월 27일
// 작성자: 2001178 김진세
//******************************************************

#include <iostream>  //입출력 사용을 위해 포함
#include <vector>    //벡터 사용을 위해 포함
#include <algorithm> //max, min_element, sort같은 알고리즘 사용
using namespace std; //std:: 생략

int main() {
    vector<int> v; //입력받은 정수 4개를 저장할 벡터 생성
    cout << "정수 4개를 입력하시오 >> ";
    for (int i = 0; i < 4; i++) { //반복문으로 4번 입력 받음
        int n;    //입력된 값을 임시 저장하는 변수 선언
        cin >> n; //입력된 정수를 n에 저장
        v.push_back(n); //입력된 값을 벡터 맨 뒤에 추가
    }
    vector<int>::iterator it; //iterator 객체 생성
    it = max_element(v.begin(), v.end()); //벡터에 저장된 값의 처음부터 끝까지 순회하며 최대값 계산
    cout << "최대값은 " << distance(v.begin(), it) +1 << "번째 값 " << *it << endl;
    //최대값의 인덱스와 최대값을 출력. *it은 max_element가 반환한 최대값이다.

    it = min_element(v.begin(), v.end()); //벡터에 저장된 값의 처음부터 끝까지 순회하며 최소값 계산
    //최소값의 인덱스와 최소값을 출력. *it은 min_element가 반환한 최소값이다.
    cout << "최소값은 " << distance(v.begin(), it) +1 << "번째 값 " << *it << endl;

    sort(v.begin(), v.end());   //벡터에 저장된 처음과 끝 값을 오름차순으로 정렬하는 sort함수
    cout << "오름차순 결과는 "; //오름차순 결과 메시지
    for (it = v.begin(); it < v.end(); it++) //벡터 v의 모든 원소 출력
        cout << *it << ' ';
    cout << endl;

    //벡터에 저장된 처음과 끝 값을 내림차순으로 정렬하는 sort함수
    sort(v.begin(), v.end(), std::greater<int>());
    cout << "내림차순 결과는 "; //내림차순 결과 메시지
    for (it = v.begin(); it < v.end(); it++) //벡터 v의 모든 원소 출력
        cout << *it << ' ';
    cout << endl;

}
