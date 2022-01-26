#include <iostream>

void inc1(int n) { ++n; }
void inc2(int*p) { ++(*p); }
void inc3(int&r) { ++r; }

int main() {
	int a = 10, b = 10, c = 10;

	inc1(a);			// call by value->실패
	inc2(&b);			// call by pointer->성공
	inc3(c);			// call by reference->성공

	std::cout << a << std::endl;
	std::cout << b<< std::endl;
	std::cout << c<< std::endl;

	//int* p = 0;
	//int& r;
}

void f1(int* p) {
	//안전하려면 if문 필요
	if (p != 0) {
		*p = 10;			//NULL을 넣을 수 있으므로 pointer는 if문으로 체크해줘야한다.
	}
}

void f2(int& r) {
	r = 10;					//이건 따로 체크할 필요없이 안전하다
}
//결론 : 함수 만들 때, reference로 받는 것은 포인터로 받는것과 유사하지만 좀더 편리하고 안전하다. 하지만 대부분 
//포인터로 다 구현가능하다.