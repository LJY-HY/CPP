int foo() {
	return 0;
}

int main() {
	int ret = foo();
	if (ret == 0) {
	}
	//------------------------
	//C++17���� init if��� ���� ����
	if (int ret = foo(); ret == 0) {
		//ret�� ������ if�� �ȿ�����
	}
	switch (int n = foo(); n) {
	case1: break;
	case2: break;
	}
	//"�ʱ�ȭ ������ ���� ���"
}