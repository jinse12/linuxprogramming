//*************************************
// 제목: 실습과제 1
// 날짜: 2025년 12월 4일
// 작성자: 2001178 김진세
//*************************************
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> A = { {2, 4}, {5, -5} };
    vector<vector<int>> B = { {-2, 3}, {0, -5} };
    vector<vector<int>> C;

    for (int i = 0; i < 2; i++) {
        C.push_back({ 0, 0 });
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            C.at(i).at(j) = A.at(i).at(j) + B.at(i).at(j);
        }
    }

    cout << "연산결과: " << endl;
    for (int i = 0; i < C.size(); i++) {
        for (int j = 0; j < C.at(i).size(); j++) {
            cout << C.at(i).at(j) << '\t';
        }
        cout << endl;
    }

    return 0;
}
