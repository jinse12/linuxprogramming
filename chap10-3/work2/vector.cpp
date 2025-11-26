//******************************************************
// 제목: 실습과제 2
// 날짜: 2025년 11월 26일
// 작성자: 2001178 김진세
//******************************************************


#include <iostream> //입출력 사용을 위해 포함
#include <vector>   //vector 헤더파일 포함
using namespace std; //std:: 생략을 위해 사용

int main() {
    vector<int> numbers;  //자료형이 int인 vector number 선언
    int num; //입력값을 임시 저장할 변수 선언

    cout << "정수 4개를 입력하시오: "; //사용자에게 정수 4개 입력을 요청

    //벡터에 4개의 정수 입력
    for (int i = 0; i < 4; i++) {
        cin >> num;             //키보드에서 정수 하나를 입력받아 num에 저장
        numbers.push_back(num); //입력받은 값을 벡터 맨 뒤에 추가
    }

    //최대값과 최소값 초기화
    int max_val = numbers[0];
    int min_val = numbers[0];

    //벡터를 순회하며 최대값과 최소값 계산
    for (int i = 1; i < numbers.size(); i++) {
        if (numbers[i] > max_val) max_val = numbers[i];
        if (numbers[i] < min_val) min_val = numbers[i];
    }
    //계산된 최대값과 최소값 출력
    cout << "최대값은 " << max_val << ", 최소값은 " << min_val << "입니다." << endl;

    return 0;
}


