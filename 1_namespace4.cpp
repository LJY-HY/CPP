//#include <stdio.h>				//C언어 헤더. 이거는 namespace라는 문법을 사용할 수 없음.
#include <cstdio>					//C++용 헤더. printf가 전역에도 있고, std에도 있다.

//	C헤더				C++헤더
//	<xxxx.h>	==>		<cxxxx>
//	<stdio.h>	==>		<cstdio>
//	<stdlib.h>	==>		<cstdlib>
//	<string.h>	==>		<cstring>

//	C++표준헤더 : .h 를 사용하지 않는다.
//				 단, 사용자가 만들때는 .h를 붙여도 된다.(붙이는것 권장)


int main() {
	printf("hello\n");			//ok
	std::printf("hello\n");		//<stdio.h>가 있을 땐, error
								//printf는 C표준이지만 C++의 표준이기도 함. 근데 왜 error?
}