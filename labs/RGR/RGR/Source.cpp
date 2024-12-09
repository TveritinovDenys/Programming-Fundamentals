#include <iostream>
#include <string>

bool isCorrect(std::string& chain) {
	int size = chain.size();

	// Перевіряємо, чи правильно починається і закінчуєтсья ланцюжок
	if (chain[0] != '%' || chain[size - 1] != '%')
		return false;

	// Починаючи з другого, перевіряємо, чи йдутть після початку цифри
	int i = 1;
	while (i < size && isdigit(chain[i])) {
		i++;
	}

	// Перевіряємо, чи достатньо символів ще для остачі, чи йдуть після цифр правильні символи  
	if (i >= size - 2 || chain[i] != '~' || chain[i + 1] != '~' && chain[i + 1] != '%')
		return false;
	i += 2; //Пропуск цих символів

	// Перевіряємо, чи є ще символи далі або відсутність букв
	if (i >= size - 1 || !isupper(chain[i])) {
		return false;
	}

	// Перевіряємо, букви далі 
	while (i < size - 1 && isupper(chain[i])) {
		i++;
	}

	// Повертаємо значення залежно від того, який був резултьтат перевірок до цього
	return i == size - 1;
}

int main() {
	std::string str = "%13%~AB%";
	bool result = isCorrect(str);

	if (result)
		std::cout << "The chain " << str << " is correct" << std::endl;
	else
		std::cout << "The chain " << str << " is not correct" << std::endl;
	
}