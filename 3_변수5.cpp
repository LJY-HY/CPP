#include <iostream>
#include <string>
int main() {
	//C언어 문자열 : char []또는 char* - 불편
	char s1[] = "ABCD";
	char s2[5];

	s2 = s1;			//error-> strcpy() 필요

	if (s2==s1){}		//주소비교. error는 아니지만 항상 false
						//strcmp(s2,s1)==0 이렇게 써야한다.
	std::string s3 = "ABCD";
	std::string s4;

	s4 = s3;			//대입가능
	s4 = s4 + s3;		//덧셈도 가능

	if (s4 == s3) {}	//비교도 가능(내용)
	std::cout << s4 << std::endl;	//출력도 가능
	//s3,s4는 int타입처럼 사용가능
}