// square.h 만들기
// extern "C" : C++컴파일러에게 해당 심볼이 C언어라고 알려주는 것.
//				name mangling을 하지 말라는 것
//extern "C" int square(int a);

// square.c 만들기. 반드시 확장자 .c로 하기
//int square(int a) {
//	return a * a;
//}

//main.cpp 반드시 .cpp로 할것
#include "square.h"
int main()   {
	square(3);		//error발생
					// call ?square@@YAHH@Z 을 할 것이다. 하지만 존재하는 것은 square.c의 square함수뿐....
}