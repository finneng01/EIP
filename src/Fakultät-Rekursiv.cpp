#include <cstdio>
#include <stdio.h>
#include <ctype.h>
#include <math.h>

double fakul(int x);

int main () {
    int n;

    do {
        printf("Bitte n Eingeben");
        scanf("%d",&n);
    } while (n <= 0);

    printf("%d! = %.0lf\n", n, fakul(n));
} //end main

double fakul (int x) {
    if (x == 1) {
        return 1.0;
    } else {
        return (x*fakul(x-1));
    }
}