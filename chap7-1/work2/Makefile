#변수 선언
CX = g++                #C++ 컴파일러 이름
CXFLAGS = -g -Wall      #-g: 디버그 모드, -Wall: 모든 경고 메시지 출력
OBJS = main.o Complex.o ComplexManager.o #오브젝트 파일 목록
TARGET = complex #실행 파일

#실행 파일 링크 규칙
$(TARGET): $(OBJS)
	$(CX) -o $(TARGET) $(OBJS)

#개별 소스 파일의 컴파일 규칙
main.o: main.cpp Complex.hpp ComplexManager.hpp
	$(CX) $(CXFLAGS) -c main.cpp

Complex.o: Complex.cpp Complex.hpp
	$(CX) $(CXFLAGS) -c Complex.cpp

ComplexManager.o: ComplexManager.cpp ComplexManager.hpp Complex.hpp
	$(CX) $(CXFLAGS) -c ComplexManager.cpp

#clean이 가짜 타겟임을 명시
#빌드 과정에서 생성되는 실행파일 및 오브젝트 파일 삭제
.PHONY: clean
clean:
	rm $(TARGET) $(OBJS)
