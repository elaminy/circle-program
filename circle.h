#ifndef CIRCLE_H
#define CIRCLE_H

// Function prototypes
double calcDistance(double x1, double y1, double x2, double y2);
/* Precondition: Takes as input the coordinates of two points on the Cartesian plane.
   Postcondition: Returns the distance between these two points. */

double calcRadius(double centerX, double centerY, double circumX, double circumY);
/* Precondition: Takes as input the coordinates for the center of a circle and the coordinates of a point on the circumference.
   Postcondition: Returns the radius of the circle. */

double calcCircumference(double radius);
/* Precondition: Takes as input the radius of the circle.
   Postcondition: Returns the circumference of the circle. */

double calcArea(double radius);
/* Precondition: Takes as input the radius of the circle.
   Postcondition: Returns the area of the circle. */

#endif