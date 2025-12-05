#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> number;
    vector<int>::iterator it;
    int num;

    cout << "ㅅㅈ ㅇㄹ: ";
    for (int i = 0; i < 5; i++) {
        cin >> num;
        number.push_back(num);
    }

    cout << "ㅊㄱ ㅂㅌ ㅇㅅ: ";
    for (it = number.begin(); it < number.end(); it++) {
        cout << *it << ' ';
    }
    cout << endl;

    for (it = number.begin(); it != number.end(); ) {
        if (*it < 0) {
            it = number.erase(it);
        }
        else {
            it++;
        }
    }

    cout << "ㅇㅅ ㅅㅈ ㅎ: ";
    for (it = number.begin(); it < number.end(); it++) {
        cout << *it << ' ';
    }
    cout << endl;

    double sum = 0.0;
    for (int i = 0; i < number.size(); i++) {
        sum += number[i];
    }
    double avg = sum / number.size();

    cout << "ㅍㄱ: " << avg << endl;

    return 0;
}
