# 변수 선언
CX = g++# C++ 컴파일러 이름
CXFLAGS = -g -Wall# -g: 디버그용, -Wall: 모든 경고 출력
OBJS = main.o power.o# 오브젝트 파일 목록
TARGET = power# 실행파일 이름

#실행파일을 만드는 링크 규칙
$(TARGET) : $(OBJS)
	$(CX) -o $(TARGET) $(OBJS)

#목적파일을 만드는 컴파일 규칙
main.o : main.cpp power.hpp
	$(CX) $(CXFLAGS) -c main.cpp

power.o : power.cpp power.hpp
	$(CX) $(CXFLAGS) -c power.cpp

#clean이 가짜 타겟임을 명시
#빌드 과정에서 생성되는 파일 삭제
.PHONY: clean
clean :
	rm $(TARGET) $(OBJS)
