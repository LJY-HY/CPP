#include <iostream>
#include <string>
int main() {
	//C��� ���ڿ� : char []�Ǵ� char* - ����
	char s1[] = "ABCD";
	char s2[5];

	s2 = s1;			//error-> strcpy() �ʿ�

	if (s2==s1){}		//�ּҺ�. error�� �ƴ����� �׻� false
						//strcmp(s2,s1)==0 �̷��� ����Ѵ�.
	std::string s3 = "ABCD";
	std::string s4;

	s4 = s3;			//���԰���
	s4 = s4 + s3;		//������ ����

	if (s4 == s3) {}	//�񱳵� ����(����)
	std::cout << s4 << std::endl;	//��µ� ����
	//s3,s4�� intŸ��ó�� ��밡��
}