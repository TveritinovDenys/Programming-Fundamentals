#include <iostream>

enum Names{Vlad, Andrew, Vlada, Katya, Denys};
struct student {
	Names name;
	int height;
	float weight;
};

int main() {
	student stdArr[5];
	stdArr[0] = { Vlad, 178, 68 };
	stdArr[1] = { Andrew, 188, 90.8 };
	stdArr[2] = { Vlada, 164, 54 };
	stdArr[3] = { Katya, 155, 60 };
	stdArr[4].name = Denys;
	stdArr[4].height = 188;
	stdArr[4].weight = 78;

	int count = 0;
	for (int i = 0; i < 5; i++) {
		if ((float)stdArr[i].height - 110 == stdArr[i].weight)
			count++;
	}

	std::cout << count << std::endl;
}