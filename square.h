//extern "C" int square(int a);

#ifdef __cplusplus
extern "C" {
#endif
	int square(int a);

#ifdef __cplusplus
}
#endif

// 함수 오버로딩은 아주 쉬워보이는 문법.
// 그런데 "name mangling"현상 때문에, C와 C++언어사이의 호환성 문제가 있다.
// C/C++을 모두 지원하는 헤더는 위처럼 해야한다.