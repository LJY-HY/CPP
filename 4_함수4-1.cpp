// �Լ� ���ø� p33
#include <iostream>

template<typename T>
T square(T a) {
	return a * a;
}
int main() {
	
	square(3);					//square<int>(3)
	square(3.4);
	//printf("%p\n", &square);	// square�� �޸𸮿� �����ϴ� �Լ��� �ƴմϴ�.
								// ������ �ð��� �����Ϸ��� ����ϴ� "Ʋ"�Դϴ�.
								// �޸𸮿� ���̴� ���� �ƴϹǷ� �ּҴ� ���� �� �����ϴ�.
	printf("%p\n", &square<int>);	//ok
								// square<int>�� Ʋ�� ����ؼ� ���� �Լ��Դϴ�.
								// �޸𸮿� �����Ƿ� �ּҸ� ���� �� �ֽ��ϴ�.		
}
// C++���� ���� �߿��� ��: ��ü���� + generic(template)
