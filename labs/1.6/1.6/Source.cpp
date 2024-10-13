#include <iostream>

int main() {
	{
		const char CONST1 = '5';
		char ch1;
		ch1 = 'b';
		char ch2 = '!';

		const char CONST2 = 0xc;
		char ch3;
		ch3 = 0x68;
		char ch4 = 0x2b;
	}

	//2 Завдання
	int i1;
	float flt2;
	unsigned short unShrt3;
	
	i1 = 274;
	flt2 = 1.001e-2;
	unShrt3 = 78;
	
	double dblD;
	int nE;
	char chF;
	
	dblD = i1;
	nE = flt2;
	chF = unShrt3;
	
	dblD = (double)i1;
	nE = (int)flt2;
	chF = (char)unShrt3;
	
	double* pdblD;
	void* pV;
	pV = &i1;
	pdblD = (double*)pV;
	dblD = *pdblD;

	int* pnE;
	pV = &flt2;
	pnE = (int*)pV;
	nE = *pnE;

	char* pchF;
	pV = &unShrt3;
	pchF = (char*)pV;
	chF = *pchF;
}