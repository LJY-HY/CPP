#include <iostream>

//void f1(int arr[3]) {		// error. �迭�� ����� �� ����
void f1(int *p,int sz){

}
template<typename T,int N>
inline int size(T (&arr)[N]) {		//������ ������ ũ�� ������ ���� �ʴ´�.
	return N;
}
int main() {
	int x[3] = { 1,2,3 };
	//f1(&x[0],3);		//�迭�� 1��° ����� �ּ� ����-->������
	f1(x,3);			//�׷��� �迭�� �̸��� �ּҷ� �������ش�.(Decay)

	int n = size(x);	//C++������ �迭�� ũ�⸦ ���ϴ� �Լ��� ���� �� �ִ�.

	for (auto n : x) {
		//x�� ������ ���ϴ� ������ ���� �����ϴ�.
	}
}