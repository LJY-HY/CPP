#include <stdio.h>
namespace Audio {
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

int main() {
	Video::init();
}