#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v;
    cout << "정수 4개를 입력하시오 >> ";
    for (int i = 0; i < 4; i++) {
        int n;
        cin >> n;
        v.push_back(n);
    }
    vector<int>::iterator it;
    it = max_element(v.begin(), v.end());
    cout << "최대값은 " << distance(v.begin(), it) +1 << "번째 값 " << *it << endl;
    it = min_element(v.begin(), v.end());
    cout << "최소값은 " << distance(v.begin(), it) +1 << "번째 값 " << *it << endl;
    sort(v.begin(), v.end());
    cout << "오름차순 결과는 ";
    for (it = v.begin(); it < v.end(); it++)
        cout << *it << ' ';
    cout << endl;
    sort(v.begin(), v.end(), std::greater<int>());
    cout << "내림차순 결과는 ";
    for (it = v.begin(); it < v.end(); it++)
        cout << *it << ' ';
    cout << endl;

}
