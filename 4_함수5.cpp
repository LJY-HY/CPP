//�Լ� ����

//2�� ������ �ִ� ����� ���ϱ�
int gcd(int a, int b) {
	return 0;
}
//double gcd(double a, double b);			//�ǵ������� ����, ������ �������� �ʴ´�.
											//�׷��� ���� �س��� ���߿� call�� ���� ��� ������ �����Ƿ� LINK ERROR�� �߻��Ѵ�.
											//�� ERROR�� ���ڴٴ� �ǹ�
double gcd(double a, double b) = delete;	//C++11���� ���Ե� �Լ� ������� ����.
											//�� LINK ERROR��� Compile error�� �߻����� ���� ã�ڴٴ� ��
int main() {
	gcd(10, 4);
	gcd(3.3, 4.4);					//gcd�� double ������ ������ error�� �ƴ�
									//�����Ϸ��� call "double ������ ��Ŀ�� ã�Ƽ� �ּҸ� ä���޶�"
									//�Լ��� �����Ǹ� ������ ����
}