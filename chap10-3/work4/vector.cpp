#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers;
    int num;

    cout << "숫자를 입력하세요: ";
    for (int i = 0; i < 5; ++i) {
        cin >> num;
        numbers.push_back(num);  // 벡터에 추가
    }

    // 초기 벡터 출력
    cout << "초기 벡터 원소 : ";
    for (int i = 0; i < numbers.size(); ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // 음수 삭제
    for (auto it = numbers.begin(); it != numbers.end(); ) {
        if (*it < 0) {
            it = numbers.erase(it); // erase는 삭제 후 다음 요소의 iterator 반환
        } else {
            ++it;
        }
    }

    // 음수 삭제 후 벡터 출력
    cout << "음수를 삭제 후 벡터 원소 : ";
    for (int i = 0; i < numbers.size(); ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // 평균 계산
    double sum = 0.0;
    for (int i = 0; i < numbers.size(); ++i) {
        sum += numbers[i];
    }

    double avg = sum / numbers.size();
    cout << "평균값 : " << avg << endl;

    return 0;
}
