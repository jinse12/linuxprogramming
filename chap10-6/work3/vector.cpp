//************************************************
// 제목: 실습과제 3
// 날짜: 2025년 12월 4일
// 작성자: 2001178 김진세
//************************************************
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> matrix = { {-5, 2, 35}, { -20, 5, 100 },{-75, 5, -25} };

    int max_value, max_row, max_column;

    for (int i = 0; i < matrix.size(); i++) {         //행 반복
        for (int j = 0; j < matrix[i].size(); j++) {  //열 반복
            if ((i == 0 && j == 0) || matrix[i][j] > max_value) {
                max_value = matrix[i][j];
                max_row = i;
                max_column = j;
            }
        }
    }

    cout << "최대값은 " << max_value << endl;
    cout << "위치는 " << max_row + 1 << "행 " << max_column + 1 << "열" << endl;

    return 0;
}
