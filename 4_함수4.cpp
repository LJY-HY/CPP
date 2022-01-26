// �Լ� ���ø� p33
#include <iostream>

//int square(int a) {
//	return a * a;
//}
//double square(double a) {
//	return a * a;
//}

// �Լ��� ������ ����(����)�� �Լ��� ���� �� �ʿ��ϸ�
//�Լ��� ������ ����, �Լ��� ������ �� ����� "Ʋ(template)"�� ������.
template<typename T>
T square(T a) {
	return a * a;
}
int main() {
	//square<int>(3);			//�����Ϸ��� Ʋ�� ����ؼ� int square(int)�Լ� ����
	//square<double>(3.4);	//�����Ϸ��� Ʋ�� ����ؼ� double square(double)�Լ� ����

	// Ÿ�� �Ķ���͸� �������� ������ �Լ� ���ڷ� ���� �����Ϸ��� �߷��մϴ�.
	square(3);					//square<int>(3)
	square(3.4);
}
// Code Bloat(�ڵ� ����)
// ���ø� ���� �����Ϸ��� �ʹ� ���� Ÿ�Կ� ���ؼ� 
// �Լ�(Ŭ����)�� �����ؼ� �����ڵ�(��������)�� ũ�Ⱑ Ŀ���� ����
// �޸𸮰� ������ ȯ�濡���� ����!!