#include <algorithm>
using namespace std;			//�̰� ��������. ���� �����Ҷ��� ��������

int count = 10;

int main() {
	// ��� C++ǥ���� std��� namespace�̸����� �ȿ� �ֽ��ϴ�.
	//int n = std::min(10, 30);	//C++ǥ���Լ�. <algorithm>����� ����
	int n = min(10, 30);		//
	int n2 = count;				//min�տ� std::���̱� �ȴٰ� �������� using namespace std�� �����ع����� ������ ������.
								//C++ǥ�ؿ� "std::count()"��� �Լ��� �ֽ��ϴ�.
								//�������� count�� �̸��浹
}