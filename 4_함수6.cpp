//���� ��ȯ Ÿ�� - p37

int add(int a, int b) {
	return a + b;
}

//C++11���� ���� ���ο� �Լ� ���
//suffix return type �Ǵ� trailing return type
auto add2(int a, int b) ->int
{
	return a + b;
}

int main() {
	int n = add(1, 2);
}