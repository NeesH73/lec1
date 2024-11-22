#include <iostream>
#include "AreaCalculator.h"

int main() {
    double a, b;
    int intervals = 1000; // количество интервалов для интегрирования

    std::cout << "Введите a и b: ";
    std::cin >> a >> b;

    double area = areaUnderCurve(a, b, intervals);
    std::cout << "Площадь под графиком функции x^2 от " << a << " до " << b << " равна " << area << std::endl;

    return 0;
}
