#include <iostream>
#include <iomanip>	// C++�� �پ��� ����� ������ �Լ��� ���� ���
					// "i/o manipulator(������)
int main() {
	int n = 10;
	std::cout << n << std::endl;				//10����
	std::cout << std::hex<<n << std::endl;		//16����
	std::cout << std::dec<<n << std::endl;		//10����
	std::cout << std::setw(10)<<n << std::endl;	
	std::cout << std::setw(10) << std::setfill('#') << n << std::endl;
}