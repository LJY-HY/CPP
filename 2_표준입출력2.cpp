#include <iostream>
#include <iomanip>	// C++의 다양한 입출력 조정자 함수를 위한 헤더
					// "i/o manipulator(조정자)
int main() {
	int n = 10;
	std::cout << n << std::endl;				//10진수
	std::cout << std::hex<<n << std::endl;		//16진수
	std::cout << std::dec<<n << std::endl;		//10진수
	std::cout << std::setw(10)<<n << std::endl;	
	std::cout << std::setw(10) << std::setfill('#') << n << std::endl;
}