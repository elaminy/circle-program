#include <cmath>
#include "circle.h"

const double PI = 3.1416;

double calcDistance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

double calcRadius(double centerX, double centerY, double circumX, double circumY) {
    return calcDistance(centerX, centerY, circumX, circumY);
}

double calcCircumference(double radius) {
    return 2 * PI * radius;
}

double calcArea(double radius) {
    return PI * pow(radius, 2);
}