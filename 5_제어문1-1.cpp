#include <iostream>
#include <ranges>
int main() {
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };
	// C++20 이전까지는 range for는 모든 요소 열거만 가능했습니다.
	// C++20부터 좋은 도구가 많이 추가되었습니다.
	for (auto n : std::views::reverse(x)) {
		std::cout << n << std::endl;
	}
}