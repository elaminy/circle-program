#include <iostream>
#include "circle.h"

using namespace std;

/* Program Overview:
   Input: The user provides the coordinates of the center point and a point on the circumference of a circle.
   Processing: The program calculates the radius, circumference, and area of the circle using the provided functions.
   Output: The program outputs the radius, circumference, and area of the circle.
*/

int main() {
    double centerX, centerY, circumX, circumY;

    cout << "Enter the coordinates of the center point (x y): ";
    cin >> centerX >> centerY;

    cout << "Enter the coordinates of a point on the circumference (x y): ";
    cin >> circumX >> circumY;

    double radius = calcRadius(centerX, centerY, circumX, circumY);
    double circumference = calcCircumference(radius);
    double area = calcArea(radius);

    cout << "Radius: " << radius << endl;
    cout << "Circumference: " << circumference << endl;
    cout << "Area: " << area << endl;

    return 0;
}