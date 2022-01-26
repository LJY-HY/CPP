struct Point {
	int x;
	int y;
};

// 20page 내용
int main() {
	Point pt = { 1,2 };
	int arr[3] = { 1,2,3 };

	//C++17부터 구조체나 배열에서 값을 꺼낼 때 아래처럼 가능합니다.
	// "structure binding"이라는 문법
	auto [x, y] = pt;		//int x=pt.x
							//int y=pt.y
							//python : x,y=(1,2) => unpacking
	//int [x1,y1]=pt		//error. auto만 된다. 설령 type이 맞다 하더라도
	// 구조체뿐 아니라 배열도 가능
	auto [a, b, c] = arr;	//단 개수가 일치해야 합니다.
	auto [a1, b1] = arr;	//error
}