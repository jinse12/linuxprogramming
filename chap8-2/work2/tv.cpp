//********************************************
// 제목: 실습과제 2
// 날짜: 2025년 11월 17일
// 작성자: 2001178 김진세
//********************************************

#include <iostream> //입출력 사용을 위해 포함
#include <string>   //문자열 사용을 위해 포함
using namespace std; //std:: 생략

//기본 클래스 TV 선언
class TV {
protected:    //멤버 접근 지정을 protected로 지정
    int size; //TV 크기를 저장하는 멤버 변수
public:       //멤버 접근 지정을 public으로 지정
    TV() : size(0) { cout << "TV 생성" << endl; } 
    //기본 생성자, size를 0으로 초기화하고 생성 메시지 출력
    void setTV(int s) { size = s; } //TV 크기 설정
    int getSize() { return size; }   //TV 크기 반환
};

//TV의 파생 클래스 WideTV 선언
class WideTV : public TV { //TV를 public 상속
protected:        //멤버 접근 지정을 protected로 지정  
    bool videoIn; //true,false
public:           //멤버 접근 지정을 public으로 지정
    WideTV() : TV(), videoIn(false) { cout << "WideTV 생성" << endl; } 
    //기본 생성자, TV 기본 생성자 호출, videoIn 초기값 false, 생성 메시지 출력
    void setWideTV(int s, bool v) { setTV(s); videoIn = v; } 
    //TV 크기와 videoIn 동시에 설정
    bool getVideoIn() { return videoIn; } //videoIn 값 반환
};

//WideTV의 파생 클래스 SmartTV 선언
class SmartTV : public WideTV { //WideTV를 public 상속
    string ipAddr; //SmartTV의 IP 주소를 저장할 멤버 변수
public:            //멤버 접근 지정을 public으로 지정
    SmartTV() : WideTV(), ipAddr("") { cout << "SmartTV 생성" << endl; } 
    //기본 생성자, WideTV 기본 생성자 호출, IP의 빈 초기값, 생성 메시지 출력
    void setSmartTV(int s, bool v, string ip) { setWideTV(s, v); ipAddr = ip; } 
    //SmartTV 멤버 변수 모두 설정
    string getIpAddr() { return ipAddr; } //IP 주소 반환
};

int main() {
    SmartTV htv; //SmartTV 객체 생성, SmartTV, WideTV, TV 생성자 순서로 호출됨
    htv.setSmartTV(50, false, "192.0.0.2"); 
    //크기 50, videoIn false, IP 주소 설정

    cout << "size = " << htv.getSize() << endl; 
    //TV 크기 출력
    cout << "videoIn = " << boolalpha << htv.getVideoIn() << endl; 
    //videoIn이 true인지, false인지를 출력(boolalpha를 이용하여).
    cout << "IP = " << htv.getIpAddr() << endl;
    //IP 주소 출력
}
