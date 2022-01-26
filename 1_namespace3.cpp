#include <algorithm>
using namespace std;			//이거 하지마라. 실제 업무할때는 쓰지마라

int count = 10;

int main() {
	// 모든 C++표준은 std라는 namespace이름공간 안에 있습니다.
	//int n = std::min(10, 30);	//C++표준함수. <algorithm>헤더에 있음
	int n = min(10, 30);		//
	int n2 = count;				//min앞에 std::붙이기 싫다고 전역으로 using namespace std를 선언해버리면 컴파일 에러임.
								//C++표준에 "std::count()"라는 함수가 있습니다.
								//전역변수 count와 이름충돌
}