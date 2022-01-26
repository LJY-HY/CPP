#include <iostream>
//?? add(T1 a, T2 b) {
//template<typename T1, typename T2>
//decltype(a+b) add(T1 a, T2 b)	// a,b�� �������� ����ϴ� ǥ����̶� ����
//{
//	return a + b;
//}
template<typename T1, typename T2>
//auto add(T1 a, T2 b)->decltype(a+b)	// a,b�� �������� ����ϴ� ǥ����̶� ����
auto add(T1 a, T2 b)					// C++14���ʹ� ������ȯŸ���ڵ� ������ ����. �ֳ��ϸ� return�� type�� �����Ͽ� �ڵ����� ������
{
	return a + b;
}
int main() {
	std::cout << add<int,double>(1, 2.23) << std::endl;	//	ok
	std::cout << add(1, 2.23) << std::endl;				// Ÿ�� ��������
														// �Լ� ���ڷ� Ÿ�� ����
}