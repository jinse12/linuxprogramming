/************************************************
// 제목: 실습과제 4
// 날짜: 2025년 12월 4일
// 작성자: 2001178 김진세
//************************************************
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> matrix = { {-5, 2, 35},{-20, 5, 100},{-75, 5, -25} };

    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[i].size(); j++) {
            if (matrix[i][j] < 0)
                matrix[i][j] = 0;
            else
                matrix[i][j] = 255;
        }
    }

    cout << "수정행렬" << endl;
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[i].size(); j++) {
            cout << matrix[i][j] << '\t';
        }
        cout << endl;
    }

    return 0;
}
