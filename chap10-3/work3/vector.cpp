//******************************************************
// 제목: 실습과제 3
// 날짜: 2025년 11월 26일
// 작성자: 2001178 김진세
//******************************************************

#include <iostream> //입출력 사용 위해 포함
#include <vector>   //배열 대신 vector 사용
#include <string>   //문자열 사용 위해 string 헤더파일 포함
using namespace std;//std:: 생략

int main() {
    vector<string> words; //문자열을 여러 개 저장할 벡터
    string input;         //매번 입력되는 문자열을 임시 저장할 변수

    //5개의 문자열 입력
    for (int i = 0; i < 5; i++) {
        cout << "문자열을 입력하세요: "; //입력 메시지 출력
        cin >> input;           //키보드에서 정수 하나를 입력받아 input에 저장
        words.push_back(input); //입력받은 값을 벡터 맨 뒤에 추가
    }
    //기준을 첫 번째 문자열로 설정하고
    //반복문에서 나머지 단어들과 비교하여 더 큰(사전에서 뒤에 있는) 단어가 나오면 갱신
    string max_word = words[0];

    //벡터를 순회하면서 사전 순으로 비교
    for (int i = 1; i < words.size(); i++) {
        if (words[i] > max_word) {
            max_word = words[i];
        }
    }
    //사전에서 제일 뒤에 나오는 단어 출력
    cout << "사전에서 제일 뒤에 나오는 단어는 " << max_word << " 입니다." << endl;

    return 0;
}
