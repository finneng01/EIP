#include <cstdio>
#include <iostream>
#include <math.h>
#define PI 3.14159265358979323846


float grad2bog (float);
int main () {
    float xg, xb, y;
    printf("Bitte x eingeben: ");
    scanf("%f", &xg);

    xb = grad2bog (xg);
    y = sin(xb);
    printf("Eingeben sin(%f) = %f\n", xg, y);

}

float grad2bog (float g) {
    float b;

    b = g * PI / 180;

    return b;
}