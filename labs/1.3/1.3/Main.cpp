#include <iostream>

int main() {
	//Заперечення
	int var = -11;
	int iVar = ~var;
	
	//Побітове І
	int var2 = 60, var3 = 93;
	int andVar = var2 & var3;

	//Побітове Або
	int var4 = 105, var5 = 36;
	int orVar = var4 | var5;

	//Побітове ХАбо
	int var6 = 5, var7 = 49;
	int xorVar = var6 ^ var7;

	//Зсув вліво
	int var8 = 878;
	int lShift = var8 << 30;

	//Зсув вправо
	int var9 = 124;
	int rShift = var9 >> 30;
	
}