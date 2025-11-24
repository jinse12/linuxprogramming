#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers;  // 정수를 저장할 벡터
    int num;

    cout << "정수 4개를 입력하시오: ";
    
    // 벡터에 4개의 정수 입력
    for (int i = 0; i < 4; ++i) {
        cin >> num;
        numbers.push_back(num); // 입력 값을 벡터에 추가
    }

    // 최대값과 최소값 초기화
    int max_val = numbers[0];
    int min_val = numbers[0];

    // 벡터를 순회하며 최대값과 최소값 계산
    for (int i = 1; i < numbers.size(); ++i) {
        if (numbers[i] > max_val) max_val = numbers[i];
        if (numbers[i] < min_val) min_val = numbers[i];
    }

    cout << "최대값은 " << max_val << ", 최소값은 " << min_val << "입니다." << endl;

    return 0;
}
