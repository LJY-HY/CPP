#include <iostream>
template<typename T>
T add(T a, T b) {
	return a + b;	
}	
int main() {
	std::cout << add<int>(1, 2) << std::endl;				//��Ȯ�� ǥ���
	//Ÿ������ ���� ����
	std::cout << add(1, 2) << std::endl;
	std::cout << add(1.38, 2.23) << std::endl;		//
	std::cout << add(1, 2.23) << std::endl;			//	error Ÿ���� ������ �� ����.
	std::cout << add<double>(1, 2.23) << std::endl;	//	ok
}