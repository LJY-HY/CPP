#include <cstdio>		//�̰Ŵ� ���� �� �Ⱦ�(printf�� �� �Ⱦ��ϱ�)
#include <iostream>		//std::cout, std::cin�� ���ؼ�, printf

int main() {
	int n = 10;
	double d = 3.4;

	//C ǥ�� ��� �Լ�
	printf("%d\n", n);

	//C++ ǥ�� ��� "��ü"
	std::cout << n << ", " << d << std::endl; // '\n'���� �� ���� �̰͵� ������ C++������ std::endl

	//ǥ�� �Է�
	scanf_s("%d", &n);	//C

	std::cin >> n;		//C++
						//�ٽ� : "&n" �� �ƴ϶� "n"
						//		 ">>"���⿡ �����Ұ�
}