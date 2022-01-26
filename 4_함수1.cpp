//C와 다른 C++ 함수의 특징
//	1. 디폴트 인자
//

#include <iostream>
// 주의사항 1. 선언에 default를 적었는데, 구현에서도 default를 적으면 compile error발생.
//			   따라서 함수를 선언과 구현으로 분리할때는 반드시 선언에만 표기해야한다.
void foo(int a, int b = 0, int c = 0);
int main() {
	foo(1, 2, 3);
	foo(1, 2);		//1,2,0		이 경우 1,2만 보낼것인가 아니면 1,2,0을 보낼것인가. 정답은 1,2,0으로 채워서 보낸다.
					//이것이 중요. 이후, 상속 개념을 배울때 중요
					//python에서는 1,2만 보내줌
	foo(1);
}

// default parameter
void foo(int a, int b /*= 0*/, int c /*= 0*/) {		//이렇게 주석표현으로만으로 남기는 경우가 있음. 다만 다중중첩 조심할것
	std::cout << a << ", " << b << ", " << c << std::endl;
}

//주의사항 2. 마지막 인자부터 차례대로만 지정할 수 있다. 시험문제에 나옴
//다음 중 default parameter를 잘못 지정한것은?
void f1(int a, int b = 0 , int c);		//error
void f2(int a = 0, int b, int c = 0);	//error