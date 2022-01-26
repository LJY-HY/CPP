#include <iostream>

int main() {
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (int i = 0; i < 10; i++) {
		std::cout << x[i] << std::endl;
	}

	//C++11의 새로운 for문- " range for"
	//python : for n in x
	//이때 x는 정적배열만 가능하다.
	int i = 0;
	for (auto n : x) {
		++i;
		std::cout << n << std::endl;
	}
	//문자열의 경우 문자열 배열 또는 string은 가능. char*는 안됨
	char s[] = "ABCDEFG";			//OK
	std::string s = "ABCDEFG";		//OK
	const char* s = "ABCDEFG";		//ERROR=>왜안되지?
	for (auto c : s) {
		std::cout << c << std::endl;
	}
}