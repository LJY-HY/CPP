//#include <stdio.h>				//C��� ���. �̰Ŵ� namespace��� ������ ����� �� ����.
#include <cstdio>					//C++�� ���. printf�� �������� �ְ�, std���� �ִ�.

//	C���				C++���
//	<xxxx.h>	==>		<cxxxx>
//	<stdio.h>	==>		<cstdio>
//	<stdlib.h>	==>		<cstdlib>
//	<string.h>	==>		<cstring>

//	C++ǥ����� : .h �� ������� �ʴ´�.
//				 ��, ����ڰ� ���鶧�� .h�� �ٿ��� �ȴ�.(���̴°� ����)


int main() {
	printf("hello\n");			//ok
	std::printf("hello\n");		//<stdio.h>�� ���� ��, error
								//printf�� Cǥ�������� C++�� ǥ���̱⵵ ��. �ٵ� �� error?
}