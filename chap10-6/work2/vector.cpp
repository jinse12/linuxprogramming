#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> scores; //학생 점수 저장
    int index = 0, best_avg = 0;

    for (int i = 0; i < 3; i++) {
        vector<int> tmp(3);
        int sum = 0;

        cout << i + 1 << "번째 학생의 국어, 영어, 수학 성적을 입력: ";
        for (int j = 0; j < 3; j++) {
            cin >> tmp[j];
            sum += tmp[j];
        }

        scores.push_back(tmp); //점수 벡터에 저장

        int avg = sum / 3;
        if (i == 0 || best_avg > best_avg) {
            best_avg = avg;
            index = i;
        }
    }

    cout << "최우수 학생은 " << index + 1 << "번째 학생이고 평균 점수는 " << best_avg << "점이다." << endl;

    return 0;
}
