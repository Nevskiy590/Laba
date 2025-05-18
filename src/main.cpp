/**
 * @file main.cpp
 * @brief Простая программа-калькулятор с базовыми операциями
 */

#include <iostream>

 /**
  * @brief Вычисляет разность двух чисел
  * @param x Первое число (уменьшаемое)
  * @param y Второе число (вычитаемое)
  * @return Результат вычитания (x - y)
  */
float Substraction(float x, float y) {
    return x - y;
}

/**
 * @brief Вычисляет сумму двух чисел
 * @param x Первое слагаемое
 * @param y Второе слагаемое
 * @return Результат сложения (x + y)
 */
float Addition(float x, float y) {
    return x + y;
}

/**
 * @brief Вычисляет произведение двух чисел
 * @param x Первый множитель
 * @param y Второй множитель
 * @return Результат умножения (x * y)
 */
float Multiply(float x, float y) {
    return x * y;
}

/**
 * @brief Главная функция программы
 * @return Код завершения (0 - успешно)
 */
int main() {
    setlocale(LC_ALL, "RUS");
    float x, y;
    std::cout << "Введите x и y: ";
    std::cin >> x >> y;
    std::cout << "Разность x-y = " << Substraction(x, y) << std::endl;
    std::cout << "Сумма x+y = " << Addition(x, y) << std::endl;
    std::cout << "Произведение x*y = " << Multiply(x, y) << std::endl;
    return 0;
}