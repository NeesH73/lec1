#include "AreaCalculator.h"
#include <cmath>

double areaUnderCurve(double a, double b, int intervals) {
    double step = (b - a) / intervals;
    double area = 0.0;

    for (int i = 0; i < intervals; i++) {
        double x = a + i * step;
        area += std::pow(x, 2) * step; // Площадь под графиком x^2
    }

    return area;
}
