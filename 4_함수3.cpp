#include <iostream>

// ������ Ÿ���̳� ������ �ٸ��� "�����̸��� �Լ��� ������"���� �� �ִ�
// ���� ��� ��ü���� �� �����ϴ� ����
// �����ε� �ȵǴ� ��� : C���,Python
int square(int a) {
	return a * a;
}
double square(double a) {
	return a * a;
}
int main() {
	std::cout << square(3) << std::endl;
	std::cout << square(3.4) << std::endl;
}

// �Լ� �����ε� ����
// name mangling :	C++ �����Ϸ��� ������ �ð��� �Լ� �̸��� ������ ���¸� ������ ���ο� �̸����� �����ϴ� ��
//					�ᱹ, �ҽ������� �̸��� ����������
//					�����ϵ� �Ŀ��� �޶�����.