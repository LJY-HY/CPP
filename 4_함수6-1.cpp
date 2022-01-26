#include <iostream>
template<typename T>
T add(T a, T b) {
	return a + b;	
}	
int main() {
	std::cout << add<int>(1, 2) << std::endl;				//정확한 표기법
	//타입인자 생략 가능
	std::cout << add(1, 2) << std::endl;
	std::cout << add(1.38, 2.23) << std::endl;		//
	std::cout << add(1, 2.23) << std::endl;			//	error 타입을 결정할 수 없다.
	std::cout << add<double>(1, 2.23) << std::endl;	//	ok
}