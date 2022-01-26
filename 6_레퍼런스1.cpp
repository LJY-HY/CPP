#include <iostream>
int main() {
	int n = 10;
	int* p = &n;					//주소연산자 &.
	int& r = n;						//선언할때 &는 reference를 만든것. 주소연산자가 아님.
	r = 20;
	std::cout << n << std::endl;
	std::cout << &n << std::endl;
	std::cout << &r << std::endl;

	//int& r1;//이건 error. 레퍼런스(참조)는 반드시 초기화되어야한다.
}