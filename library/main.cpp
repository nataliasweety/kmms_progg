#include <clocale>
#include <cstdlib>
#include <iostream>

int main() {
	std::setlocale(LC_ALL, "");

	int input_user;
	do {
		std::cout << "Библиотека приветствует вас, Илья Владимирович!" << std::endl;
		std::cout << "1 - Русские писатели" << std::endl;
		std::cout << "0 - Завершить чтение" << std::endl;
		std::cout << "Ваш выбор > ";

		std::cin >> input_user;
		if (input_user == 1) {
			//TODO
		}
		else if (input_user == 0) {
			exit(0);
		}
		std::cout << std::endl;
	} while (true);

	return 0;
}