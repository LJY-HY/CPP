#include <iostream>
int main() {
	int n = 10;
	int* p = &n;					//�ּҿ����� &.
	int& r = n;						//�����Ҷ� &�� reference�� �����. �ּҿ����ڰ� �ƴ�.
	r = 20;
	std::cout << n << std::endl;
	std::cout << &n << std::endl;
	std::cout << &r << std::endl;

	//int& r1;//�̰� error. ���۷���(����)�� �ݵ�� �ʱ�ȭ�Ǿ���Ѵ�.
}