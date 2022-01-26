#include <iostream>

int main() {
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (int i = 0; i < 10; i++) {
		std::cout << x[i] << std::endl;
	}

	//C++11�� ���ο� for��- " range for"
	//python : for n in x
	//�̶� x�� �����迭�� �����ϴ�.
	int i = 0;
	for (auto n : x) {
		++i;
		std::cout << n << std::endl;
	}
	//���ڿ��� ��� ���ڿ� �迭 �Ǵ� string�� ����. char*�� �ȵ�
	char s[] = "ABCDEFG";			//OK
	std::string s = "ABCDEFG";		//OK
	const char* s = "ABCDEFG";		//ERROR=>�־ȵ���?
	for (auto c : s) {
		std::cout << c << std::endl;
	}
}