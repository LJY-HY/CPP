struct Point {
	int x;
	int y;
};

// 20page ����
int main() {
	Point pt = { 1,2 };
	int arr[3] = { 1,2,3 };

	//C++17���� ����ü�� �迭���� ���� ���� �� �Ʒ�ó�� �����մϴ�.
	// "structure binding"�̶�� ����
	auto [x, y] = pt;		//int x=pt.x
							//int y=pt.y
							//python : x,y=(1,2) => unpacking
	//int [x1,y1]=pt		//error. auto�� �ȴ�. ���� type�� �´� �ϴ���
	// ����ü�� �ƴ϶� �迭�� ����
	auto [a, b, c] = arr;	//�� ������ ��ġ�ؾ� �մϴ�.
	auto [a1, b1] = arr;	//error
}