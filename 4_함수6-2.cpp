#include <iostream>
//?? add(T1 a, T2 b) {
//template<typename T1, typename T2>
//decltype(a+b) add(T1 a, T2 b)	// a,b를 선언전에 사용하는 표기법이라서 에러
//{
//	return a + b;
//}
template<typename T1, typename T2>
//auto add(T1 a, T2 b)->decltype(a+b)	// a,b를 선언전에 사용하는 표기법이라서 에러
auto add(T1 a, T2 b)					// C++14부터는 후위반환타입코드 생략도 가능. 왜냐하면 return의 type만 참고하여 자동으로 정해줌
{
	return a + b;
}
int main() {
	std::cout << add<int,double>(1, 2.23) << std::endl;	//	ok
	std::cout << add(1, 2.23) << std::endl;				// 타입 생략가능
														// 함수 인자로 타입 결정
}