#include <cstdio>		//이거는 이제 잘 안씀(printf를 잘 안쓰니까)
#include <iostream>		//std::cout, std::cin을 위해서, printf

int main() {
	int n = 10;
	double d = 3.4;

	//C 표준 출력 함수
	printf("%d\n", n);

	//C++ 표준 출력 "객체"
	std::cout << n << ", " << d << std::endl; // '\n'개행 시 물론 이것도 되지만 C++공식은 std::endl

	//표준 입력
	scanf_s("%d", &n);	//C

	std::cin >> n;		//C++
						//핵심 : "&n" 이 아니라 "n"
						//		 ">>"방향에 주의할것
}