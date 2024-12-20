#include <clocale>
#include <iostream>

#include "menu.hpp"
#include "functions.hpp"

int main() {
	std::setlocale(LC_ALL, "");

	lib::actions read = { "1 - Русские писатели", lib::read };
	lib::actions exit = { "0 - Завершить чтение", lib::exit };

	lib::actions* children[] = { &exit, &read };
	const int size = sizeof(children) / sizeof(children[0]);

	int input_user;
	do {
		std::cout << "Библиотека приветствует вас, Илья Владимирович!" << std::endl;
		for (int i = 1; i < size; ++i) {
			std::cout << children[i]->title << std::endl;
		}
		std::cout << children[0]->title << std::endl;
		std::cout << "Ваш выбор > ";

		std::cin >> input_user;
		children[input_user]->func();

		std::cout << std::endl;
	} while (true);

	return 0;
}