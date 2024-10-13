#include <iostream>

int main() {
	{
		int nA = 2;
	}

	{
		int nB = 5;
		{
			nB = 8;
			int nC = 1;
		}
	}
}