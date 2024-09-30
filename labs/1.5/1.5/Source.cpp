#include <iostream>

int main() {
	float A1 = 36.7;
	float B1 = 56.2;
	int C1 = 99;
	int D1 = 99;

	bool first = ((A1 < B1) ^ !(C1 != D1));


	int A2 = 86;
	int B2 = 65;
	float C2 = 75.2;
	float D2 = 43.6;

	bool second = ((A2 < B2) ^ !(C2 != D2));
}