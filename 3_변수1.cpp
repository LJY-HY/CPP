#include <iostream>

struct Point {
	int x;
	int y;
};

int main() {
	struct Point p1;	//C 스타일
	Point p2;			//C++, struct 없어도 된다.

	int n1 = 0b10;		//C++/C11부터 2진수 표기법 가능
	int n2 = 1'000'000;	//C++11부터 자릿수 표기법 가능. 
						//정수형 리터럴 사이의 '는 무시한다. 즉 주석의효과

	//새로운 타입
	bool b = true;		// or false or 1/0. 크기는 1byte
	long long n = 0;	//64비트 정수. 8byte
	
}