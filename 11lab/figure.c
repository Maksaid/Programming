#include <stdio.h>
#include "figure.h"
#include <math.h>

double square(struct figure triangle) {
    double a = sqrt(pow(triangle.X1 - triangle.X2, 2) + pow(triangle.Y1 - triangle.Y2, 2));
    double s = pow(a,2)/4*(sqrt(25+10* sqrt(5)));
    return s;
}

double perimeter(struct figure triangle) {
    double a = sqrt(pow(triangle.X1 - triangle.X2, 2) + pow(triangle.Y1 - triangle.Y2, 2));
    double p = (5*a)/2;
    return p;
}