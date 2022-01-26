//후위 반환 타입 - p37

int add(int a, int b) {
	return a + b;
}

//C++11부터 나온 새로운 함수 모양
//suffix return type 또는 trailing return type
auto add2(int a, int b) ->int
{
	return a + b;
}

int main() {
	int n = add(1, 2);
}