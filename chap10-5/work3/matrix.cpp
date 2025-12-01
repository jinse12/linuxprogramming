#include <iostream>  //입출력 기능을 사용하기 위해 포함
using namespace std; //std:: 생략

int main() {
    int matrix[3][3] = { {-5,2,35},{-20,5,100},{-75,5,-25} }; //행렬 초기화

    int max_value, max_row, max_column; //최대값과 위치를 저장할 변수

    for (int i = 0; i < 3; i++) { //행 반복
        for (int j = 0; j < 3; j++) { //열 반복
            if (i == 0 && j == 0 || matrix[i][j] > max_value) { //첫 원소이거나 현재 원소가 최대값보다 크면
                max_value = matrix[i][j]; //최대값 갱신
                max_row = i;              //최대값 위치 행 갱신
                max_column = j;           //최대값 위치 열 갱신
            }
        }
    }
    cout << "최대값은 " << max_value << endl; //최대값 출력
    cout << "위치는 " << max_row + 1 << "행 " << max_column + 1 << "열" << endl; //위치 출력

    return 0;
}
