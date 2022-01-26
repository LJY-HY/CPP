// 함수 템플릿 p33
#include <iostream>

template<typename T>
T square(T a) {
	return a * a;
}
int main() {
	
	square(3);					//square<int>(3)
	square(3.4);
	//printf("%p\n", &square);	// square는 메모리에 존재하는 함수가 아닙니다.
								// 컴파일 시간에 컴파일러가 사용하는 "틀"입니다.
								// 메모리에 놓이는 것이 아니므로 주소는 구할 수 없습니다.
	printf("%p\n", &square<int>);	//ok
								// square<int>는 틀을 사용해서 만든 함수입니다.
								// 메모리에 있으므로 주소를 구할 수 있습니다.		
}
// C++에서 가장 중요한 것: 객체지향 + generic(template)
