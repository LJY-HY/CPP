#include <stdio.h>
namespace Audio {
	void init() {
		printf("Audio init\n");
	}
}
namespace Video {
	// Video관련 함수, 구조체, 전역변수 등을 모두 여기에 넣는다.
	void init() {
		printf("Video init\n");
	}
}

int main() {
	Video::init();
}