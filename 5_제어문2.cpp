int foo() {
	return 0;
}

int main() {
	int ret = foo();
	if (ret == 0) {
	}
	//------------------------
	//C++17부터 init if라는 구문 등장
	if (int ret = foo(); ret == 0) {
		//ret의 수명은 if문 안에서만
	}
	switch (int n = foo(); n) {
	case1: break;
	case2: break;
	}
	//"초기화 구문을 가진 제어문"
}