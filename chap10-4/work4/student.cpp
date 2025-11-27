//******************************************************
// 제목: 실습과제 4
// 날짜: 2025년 11월 27일
// 작성자: 2001178 김진세
//******************************************************

#include <iostream>   //입출력 사용을 위해 포함
#include <vector>     //vector 사용을 위해 포함
#include <algorithm>  //알고리즘 함수 사용
using namespace std;  //std:: 생략

//student 클래스 정의. 이름, 점수 private 멤버변수 선언
class student {
    string name;
    int score;
public: //생성자 정의. student 객체가 생성될 때 student 클래스 코드가 실행됨
    student(string n = "", int s = 0) : name(n), score(s) {}

    string getname() const { return name; } //private 멤버변수 읽기
    int getscore() const { return score; }

    bool operator<(const student& other) const { //점수를 비교하는 operator <
        return this->score < other.score;
    }
};
int main() {
    vector<student> st; //학생 객체를 저장하는 벡터
    string name; //사용자 입력을 받을 변수 선언
    int score;

    for (int i = 0; i < 3; i++) {
        cout << "이름과 성적을 입력: "; //반복문으로 3번 입력받음
        cin >> name >> score; //입력받은 값을 변수 name, score에 저장
        st.push_back(student(name, score)); //입력받은 값을 벡터 맨 뒤에 추가
    }

    //최우수 학생 찾기
    vector<student>::iterator it = max_element(st.begin(), st.end());

    cout << "최우수 학생은" << endl;
    cout << "이름: " << it->getname() << endl;
    cout << "성적: " << it->getscore() << "점" << endl;

    return 0;
}
//메인함수가 먼저 시작되고 입력값이 들어가야 student 객체 생성이 가능
