#include <iostream>

struct Point {
	int x;
	int y;
};

int main() {
	struct Point p1;	//C ��Ÿ��
	Point p2;			//C++, struct ��� �ȴ�.

	int n1 = 0b10;		//C++/C11���� 2���� ǥ��� ����
	int n2 = 1'000'000;	//C++11���� �ڸ��� ǥ��� ����. 
						//������ ���ͷ� ������ '�� �����Ѵ�. �� �ּ���ȿ��

	//���ο� Ÿ��
	bool b = true;		// or false or 1/0. ũ��� 1byte
	long long n = 0;	//64��Ʈ ����. 8byte
	
}