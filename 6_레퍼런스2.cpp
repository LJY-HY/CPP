#include <iostream>

void inc1(int n) { ++n; }
void inc2(int*p) { ++(*p); }
void inc3(int&r) { ++r; }

int main() {
	int a = 10, b = 10, c = 10;

	inc1(a);			// call by value->����
	inc2(&b);			// call by pointer->����
	inc3(c);			// call by reference->����

	std::cout << a << std::endl;
	std::cout << b<< std::endl;
	std::cout << c<< std::endl;

	//int* p = 0;
	//int& r;
}

void f1(int* p) {
	//�����Ϸ��� if�� �ʿ�
	if (p != 0) {
		*p = 10;			//NULL�� ���� �� �����Ƿ� pointer�� if������ üũ������Ѵ�.
	}
}

void f2(int& r) {
	r = 10;					//�̰� ���� üũ�� �ʿ���� �����ϴ�
}
//��� : �Լ� ���� ��, reference�� �޴� ���� �����ͷ� �޴°Ͱ� ���������� ���� ���ϰ� �����ϴ�. ������ ��κ� 
//�����ͷ� �� ���������ϴ�.