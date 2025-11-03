#변수 선언
CX = g++ # C++ 컴파일러 이름을 변수 CX에 저장
# -g: 디버그모드로 컴파일, -wall: 모든 경고메시지 출력
CXFLAGS = -g -Wall
OBJS = main.o Complex.o # 오브젝트 파일 목록을 변수에 저장
TARGET = complex #실행파일

#실행파일을 만드는 링크 규칙
$(TARGET) : $(OBJS)
	$(CX) -o $(TARGET) $(OBJS)

#목적파일을 만드는 컴파일 규칙
main.o : main.cpp Complex.hpp
	$(CX) $(CXFLAGS) -c main.cpp

Complex.o : Complex.cpp Complex.hpp
	$(CX) $(CXFLAGS) -c Complex.cpp

#clean이 가짜 타겟임을 명시
#빌드 과정에서 생성되는 파일을 삭제하는 규칙
.PHONY: clean
clean :
	rm $(TARGET) $(OBJS)