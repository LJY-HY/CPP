#include <stdio.h>
namespace Audio{
	void init() {
	printf("Audio init\n");
	}
}
namespace Video {
	// Video���� �Լ�, ����ü, �������� ���� ��� ���⿡ �ִ´�.
	void init() {
		printf("Video init\n");
	}
}
//global namespace : Ư�� �̸������� ���Ե��� ���� ����
void init() {
	printf("Global init\n");
}

//using�� �Լ� �� �Ǵ� �ۿ� ���� �� �ֽ��ϴ�. �׷��� �̴� �ʹ� �����ϴ�.
using Video::init;			
int main() {
	// namespace�ȿ� �ִ� ��Ҹ� ����ϴ� 3���� ���
	Video::init();			//1. ������ �̸�

	//using Video::init;		// 2. using����(declareation)
	init();					// init�Լ��� Video �̸� ���� ���
	::init();				// :: ==> scope resolution ������. global�ǹ�

	using namespace Video;	// 3. using ���þ�(directive)
	init();					// Video���� ��� �ɺ��� Video �̸� ���� ���ڴ�.
							// �̴� �̸��浹 ���ɼ��� ���δ�. "��������"
							// 1���� ���
}