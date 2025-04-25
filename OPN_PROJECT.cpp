#include <iostream>

float Substraction(float x, float y) {
	return x - y;
}

int main() {
	float x, y;
	std::cout << "Введите x и y: ";
	std::cin >> x >> y;
	std::cout << "Разность x-y = " << Substraction(x, y);
}