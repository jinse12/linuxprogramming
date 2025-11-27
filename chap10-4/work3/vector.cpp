//******************************************************
// 제목: 실습과제 3
// 날짜: 2025년 11월 27일
// 작성자: 2001178 김진세
//******************************************************

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<string> words;
    string input;

    for (int i = 0; i < 5; i++) {
        cout << "문자열을 입력하세요: ";
        cin >> input;
        words.push_back(input);
    }
    sort(words.begin(), words.end());

    vector<string>::iterator it;
    cout << "사전에서 나오는 순서" << endl;
    for (it = words.begin(); it < words.end(); it++)
        cout << *it << ' ' << endl;
}
