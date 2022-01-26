struct Point {
	int x;
	int y;
};

// 20page 내용
int main() {
	int n = 0;
	Point p1 = { 0,0 };
	int x1[3] = { 1,2,3 };		// 지금 초기화하는 방법이 종류에 따라 다르다.

	//C++11에 추가된 "일관된 초기화(uniform initialization)문법
	//흔히 "중괄호 초기화"라고도 한다.
	int n2 = { 0 };
	Point p2 = { 0,0 };
	int x2[3] = { 1,2,3 };


	int n3 { 0 };
	Point p3 { 0,0 };
	int x3[3] { 1,2,3 };		

	//직접 초기화(direct init) : =가 없는 경우
	//복사 초기화(copy init)		: =가 있는 경우
	//위 2개는 약간의 차이가 있다.(객체 배울때 설명)
	//-----------------------------------------------
	int n4 = 3.4;	// C/C++에서 가능. 다만 암묵적 변환.
					// 하지만 너무 위험하다. 다른 대부분의 언어는 error!

	int n5{ 3.4 };	// error. 중괄호 초기화는 데이터 손실이 있는 경우error
	char c{ 500 };	// error. 1byte는 0~255만 가능
					// prevent narrow
}