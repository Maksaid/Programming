#ifndef FIGURE_H
#define FIGURE_H

struct figure {
    double X1;
    double X2;
    double Y1;
    double Y2;
};

double square(struct figure);
double perimeter(struct figure);

#endif