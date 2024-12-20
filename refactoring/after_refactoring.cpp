#include <cmath>
#include <iostream>

int main() {
    double angle;
    std::cout << "Введите угол (в радианах): " << std::endl;
    std::cin >> angle;

    double cos2x = std::cos(2 * angle);
    double tanx = std::tan(angle);

    if (cos2x != 1) {
	float f1;
        f1 = (1 + sin(2 * angle)) / (1 - cos2x);
        std::cout << "F(x1) = " << f1 << std::endl;
    } else {
        std::cout << "Неверный ввод для F(x1)" << std::endl;
    }

    if (tanx != 1) {
	float f2;
        f2 = (1 + tanx * tanx) / (1 - tanx * tanx);
        std::cout << "F(x2) = " << f2 << std::endl;
    } else {
        std::cout << "Неверный ввод для F(x2)" << std::endl;
    }

    return 0;
}