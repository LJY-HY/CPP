#include <iostream>

int main() {
	int n = 10;
	int& r = n;	//n과 동일한 타입의 변수를 만들고 &를 붙이면
				//레퍼런스가 됩니다.

	int n1 = n;

	int x[3] = { 1,2,3 };
	//int y[3] = x;			// C의 대부분의 타입은 복사 될 수 있는데, 배열은 복사될 수 없다.
							//메모리가 크기 때문에 error
	//int &y[3] = x;		//이 표기법은 연산자 우선순위 문제로 배열이다
	int (&y)[3] = x;		//OK 배열을 가리키는 참조		int[3]짜리 배열을 referencing하는 y를 만든거임.

}