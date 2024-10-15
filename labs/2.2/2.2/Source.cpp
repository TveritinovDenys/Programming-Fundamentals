#include <iostream>
#include <string>

enum Names { Andrew, Vlad, Denys, Igor, Maksym, Olga, Dasha };
struct student {
	Names name;
	int yearOfStudy;
	bool stipend;
};

int main() {
	student stdArr[7];

	stdArr[0] = { Andrew, 1, false };
	stdArr[1] = { Vlad, 1, true };
	stdArr[2] = { Denys,1,true };
	stdArr[3] = { Igor, 4, false };
	stdArr[4] = { Maksym, 1, false };
	stdArr[5] = { Olga, 1, false };
	stdArr[6].name = Dasha;
	stdArr[6].yearOfStudy = 2;
	stdArr[6].stipend = true;

	int stipCount = 0;
	for (int i = 0; i < 7; i++) {
		if (stdArr[i].yearOfStudy == 1 && stdArr[i].stipend == 1) {
			stipCount++;
		}
	}
	
	float result = (float)stipCount * 100 / 7;
	std::cout << result << std::endl;
}