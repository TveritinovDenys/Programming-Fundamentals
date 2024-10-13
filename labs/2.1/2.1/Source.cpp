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

	char arr1[10], arr2[10], arr3[10];

	for (int i = 0; i < 10; i++) {
		arr1[i] = 43 - i;
		arr2[i] = 37 + i;
	}

	int count = 0;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (arr1[i] == arr2[j]) {
				arr3[count] = arr1[i];

				count++;
				break;
			}
		}
	}

	int mult = 1;
	for (int i = 0; i < 10; i++) {
		if (arr3[i] > 40)
			mult *= arr3[i];
	}
	std::cout << mult;
}