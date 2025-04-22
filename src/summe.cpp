#include <cstdio>

int summ(int x);

int main () {
    int n;

    do {
        printf("Bitte n Eingeben");
        scanf("%d",&n);
    } while (n <= 0);

    printf("%d = %d\n", n, summ(n));
} //end main

int summ (int x) {
    if (x == 1) {
        return 1.0;
    } else {
        return (x+summ(x-1));
    }
}