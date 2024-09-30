#include <iostream>

int main() {
	//usigned short
	unsigned short A;
	unsigned short* pA;
	pA = &A;
	*pA = 524;

	void* pVoid;
	pVoid = &A;
	pVoid = pA;

	int sizeA = sizeof(A);

	//int
	int B;
	int* pB;
	pB = &B;
	*pB = -61;

	pVoid = &B;
	pVoid = pB;

	int sizeB = sizeof(B);

	//float
	float C;
	float* pC;
	pC = &C;
	*pC = 25.7295;

	pVoid = &C;
	pVoid = pC;

	//double
	double D;
	double* pD;
	pD = &D;
	*pD = -0.53e-707;

	pVoid = &D;
	pVoid = pD;
}