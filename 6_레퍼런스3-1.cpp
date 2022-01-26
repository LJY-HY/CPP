#include <iostream>

//void f1(int arr[3]) {		// error. 배열은 복사될 수 없음
void f1(int *p,int sz){

}
template<typename T,int N>
inline int size(T (&arr)[N]) {		//참조로 받으면 크기 정보를 잃지 않는다.
	return N;
}
int main() {
	int x[3] = { 1,2,3 };
	//f1(&x[0],3);		//배열의 1번째 요소의 주소 전달-->귀찮음
	f1(x,3);			//그래서 배열의 이름은 주소로 간주해준다.(Decay)

	int n = size(x);	//C++에서는 배열의 크기를 구하는 함수도 만들 수 있다.

	for (auto n : x) {
		//x의 갯수를 구하는 원리가 위와 유사하다.
	}
}