#include <iostream>

bool isBigger(int a, int b) {
	bool result = true;
	int size = sizeof(int) * 8;

	for (int i = size - 1; i >= 0; --i) {
		int bitA = (a >> i) & 1;
		int bitB = (b >> i) & 1;

		if (bitA > bitB) {
			result = true;
			break;
		}
		else if (bitA < bitB) {
			result = false;
			break;
		}
		else
			result = false;
	}
	return result;
}
int bitAdd(int a, int b) {
	while (b != 0) {
		int sum = a ^ b; // "Додаємо" не враховуючи перенос
		int carry = (a & b) << 1; // Обчислюємо перенос

		a = sum;
		b = carry;
	}
	return a;
}

int main() {
	{
		int a = 211;
		int b = 211;
		std::cout << isBigger(a, b) << std::endl; // result - 0

		int c = 183;
		int d = 182;
		std::cout << isBigger(c, d) << std::endl; // result - 1

		int e = 86;
		int f = 134;
		std::cout << isBigger(e, f) << std::endl; // result - 0
	}

	int a = 69;
	int b = -73;
	std::cout << bitAdd(a, b) << std::endl; // result -4

	int c = 48;
	int d = 24;
	std::cout << bitAdd(c, d) << std::endl; // result 72

	int e = 53;
	int f = 19;
	std::cout << bitAdd(e, f) << std::endl; // result 72
}