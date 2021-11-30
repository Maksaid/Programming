#include <stdio.h>
#include "figure.h"

int main()
{
    struct figure pentgon;

    printf("X1 = ");
    scanf("%lf", &pentgon.X1);
    printf("Y1 = ");
    scanf("%lf", &pentgon.Y1);
    printf("X2 = ");
    scanf("%lf", &pentgon.X2);
    printf("Y2 = ");
    scanf("%lf", &pentgon.Y2);

    printf("Perimeter is: %lf \n", perimeter(pentgon));
    printf("Square is: %lf", square(pentgon));
}