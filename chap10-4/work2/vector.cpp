//******************************************************
// 제목: 실습과제 2
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
        cout << "문자를 입력하시오: ";
        cin >> input;
        words.push_back(input);
    }
    vector<string>::iterator it;
    it = max_element(words.begin(), words.end());
    cout << "사전에서 제일 뒤에 나오는 단어는 " << *it << endl;
    return 0;
}
