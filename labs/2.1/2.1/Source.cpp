#include <iostream>

//Selection sort
void arrSort(int arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		int min = i;

		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[min])
				min = j;
		}

		std::swap(arr[i], arr[min]);
	}
	
}

int main() {
	//1 Завдання
	{
		int arr[11];
		for (int i = 0; i < 11; i++) {
			if (i % 2 == 0)
				arr[i] = 6 * i - 9;
			else
				arr[i] = -9 + 2 * i;
		}

		arrSort(arr, 11);
		for (int i = 0; i < 11; i++)
		{
			std::cout << arr[i] << " ";
		}
	}

	//2 Завдання
	char arr1[10], arr2[10], arr3[10]; //Опис масивів

	for (int i = 0; i < 10; i++) { //Ініціалізація масивів 1 і 2
		arr1[i] = 43 - i;
		arr2[i] = 37 + i;
	}

	int count = 0;
	for (int i = 0; i < 10; i++) { //Ініціалізація масиву 3 рівними значеннями 1 і 2
		for (int j = 0; j < 10; j++) {
			if (arr1[i] == arr2[j]) {
				arr3[count] = arr1[i];

				count++;
				break;
			}
		}
	}

	int mult = 1;
	for (int i = 0; i < 10; i++) { //Знаходження добутку значень більше 40
		if (arr3[i] > 40)
			mult *= arr3[i];
	}
	std::cout << mult;

	//3 завдання
	int mArr[5][4] = { {-9,2,3,4}, {6,-20,8,9}, {11,12,-2,14}, {16,-1,18,19}, {20,-7,22,23} }; //Опис и иниціалізація 2-х вимірного масиву
	int resArr[4]; //Опис масиву

	
	for (int i = 0; i < 4; i++) { //Пошук мінімального значення в стовпцях 2-ї вимірного масиву
		int min = mArr[0][i];
		for (int j = 0; j < 5; j++) {
			if (mArr[j][i] < min)
				min = mArr[j][i];
		}
		resArr[i] = min; //Запис цих значень в одновимірний
	}
}