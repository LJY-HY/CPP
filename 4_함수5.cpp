//함수 삭제

//2개 정수의 최대 공약수 구하기
int gcd(int a, int b) {
	return 0;
}
//double gcd(double a, double b);			//의도적으로 선언만, 구현을 제공하지 않는다.
											//그런데 선언만 해놓고 나중에 call을 했을 경우 구현이 없으므로 LINK ERROR가 발생한다.
											//즉 ERROR를 내겠다는 의미
double gcd(double a, double b) = delete;	//C++11에서 도입된 함수 삭제라는 문법.
											//즉 LINK ERROR대신 Compile error를 발생시켜 일찍 찾겠다는 뜻
int main() {
	gcd(10, 4);
	gcd(3.3, 4.4);					//gcd의 double 버전이 없지만 error는 아님
									//컴파일러는 call "double 버전을 링커가 찾아서 주소를 채워달라"
									//함수가 삭제되면 컴파일 에러
}