#include <stdio.h>
namespace Audio{
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
//global namespace : 특정 이름공간에 포함되지 않은 공간
void init() {
	printf("Global init\n");
}

//using은 함수 안 또는 밖에 있을 수 있습니다. 그러나 이는 너무 위험하다.
using Video::init;			
int main() {
	// namespace안에 있는 요소를 사용하는 3가지 방법
	Video::init();			//1. 완전한 이름

	//using Video::init;		// 2. using선언(declareation)
	init();					// init함수만 Video 이름 없이 사용
	::init();				// :: ==> scope resolution 연산자. global의미

	using namespace Video;	// 3. using 지시어(directive)
	init();					// Video안의 모든 심볼을 Video 이름 없이 쓰겠다.
							// 이는 이름충돌 가능성을 높인다. "쓰지마라"
							// 1번만 써라
}