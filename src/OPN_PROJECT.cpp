#include <iostream>

float Substraction(float x, float y) {
	return x - y;
}

float Addition(float x, float y) {
	return x + y;
}

float Multiply(float x, float y) {
	return x * y;
}

int main() {
	setlocale(LC_ALL, "RUS");
	float x, y;
	std::cout << "Введите x и y: ";
	std::cin >> x >> y;
	std::cout << "Разность x-y = " << Substraction(x, y) << std::endl;
	std::cout << "Сумма x+y = " << Addition(x, y) << std::endl;
	std::cout << "Произведение x*y = " << Multiply(x, y) << std::endl;
}