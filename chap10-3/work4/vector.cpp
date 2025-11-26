//******************************************************
// 제목: 실습과제 4
// 날짜: 2025년 11월 26일
// 작성자: 2001178 김진세
//******************************************************

#include <iostream> //입출력 사용 위해 포함
#include <vector>   //배열 대신 vector 사용
using namespace std;//std:: 생략

int main() {
    vector<int> numbers; //자료형이 int인 vector number 선언
    int num;             //입력 값을 임시 저장할 변수 선언

    cout << "숫자 5개를 입력하세요: "; //사용자에게 숫자 5개 입력을 요청
    for (int i = 0; i < 5; ++i) {
        cin >> num;              //키보드에서 정수 하나를 입력받아 num에 저장
        numbers.push_back(num);  //입력받은 값을 벡터 맨 뒤에 추가
    }

    //초기 벡터 출력
    cout << "초기 벡터 원소 : "; 
    for (int i = 0; i < numbers.size(); i++) { //벡터를 처음 입력한 순서대로 출력
        cout << numbers[i] << " ";
    }
    cout << endl;

    //음수 삭제
    //numbers.begin()은 벡터의 첫 번째 원소를 가리키는 iterator 반환
    //numbers.end()는 벡터 마지막 원소 다음을 가리키는 iterator 반환
    for (vector<int>::iterator it = numbers.begin(); it != numbers.end(); ) {
        if (*it < 0) {
            it = numbers.erase(it); //원소가 음수이면 erase는 음수 삭제 후 다음 원소의 주소 반환
        }
        else {
            it++; //음수가 아니면 iterator를 다음 원소로 이동
        }
    }

    //음수 삭제 후 벡터 출력
    cout << "음수를 삭제 후 벡터 원소 : ";
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    //평균 계산
    double sum = 0.0;
    for (int i = 0; i < numbers.size(); i++) {
        sum += numbers[i];
    }

    double avg = sum / numbers.size();
    cout << "평균값 : " << avg << endl;

    return 0;
}
