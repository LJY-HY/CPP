// square.h �����
// extern "C" : C++�����Ϸ����� �ش� �ɺ��� C����� �˷��ִ� ��.
//				name mangling�� ���� ����� ��
//extern "C" int square(int a);

// square.c �����. �ݵ�� Ȯ���� .c�� �ϱ�
//int square(int a) {
//	return a * a;
//}

//main.cpp �ݵ�� .cpp�� �Ұ�
#include "square.h"
int main()   {
	square(3);		//error�߻�
					// call ?square@@YAHH@Z �� �� ���̴�. ������ �����ϴ� ���� square.c�� square�Լ���....
}