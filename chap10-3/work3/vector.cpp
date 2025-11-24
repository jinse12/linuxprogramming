#include <iostream>
#include <vector>
#include <string>   // string 사용
using namespace std;

int main() {
    vector<string> words; // 문자열을 저장할 벡터
    string input;

    // 5개의 문자열 입력
    for (int i = 0; i < 5; ++i) {
        cout << "문자열을 입력하세요: ";
        cin >> input;
        words.push_back(input); // 벡터에 추가
    }

    // 벡터의 첫 번째 문자열을 최대값 초기화
    string max_word = words[0];

    // 벡터를 순회하면서 사전 순 비교
    for (int i = 1; i < words.size(); ++i) {
        if (words[i] > max_word) { // 사전 순으로 비교
            max_word = words[i];
        }
    }

    cout << "사전에서 제일 뒤에 나오는 단어는 " << max_word << " 입니다." << endl;

    return 0;
}
