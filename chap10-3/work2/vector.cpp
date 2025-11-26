//******************************************************
// 제목: 실습과제 2
// 날짜: 2025년 11월 26일
// 작성자: 2001178 김진세
//******************************************************

include <iostream> //입출력 사용을 위해 포함
#include <vector>   //vector 포함
using namespace std; //std:: 생략을 위해 사용

int main() {
    vector<int> numbers;  //정수를 저장할 벡터
    int num; //

    cout << "정수 4개를 입력하시오: "; //입력 메시지

    //벡터에 4개의 정수 입력
    for (int i = 0; i < 4; ++i) {
        cin >> num;
        numbers.push_back(num); //입력 값을 벡터에 추가
    }

    //최대값과 최소값 초기화
    int max_val = numbers[0];
    int min_val = numbers[0];

    //벡터를 순회하며 최대값과 최소값 계산
    for (int i = 1; i < numbers.size(); ++i) {
        if (numbers[i] > max_val) max_val = numbers[i];
        if (numbers[i] < min_val) min_val = numbers[i];
    }

    cout << "최대값은 " << max_val << ", 최소값은 " << min_val << "입니다." << endl;

    return 0;
}
