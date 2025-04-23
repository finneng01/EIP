#include <cstdio>

int summe(int);

int main() {
    int n;
    do {
        printf("Bitte n Eingeben");
        scanf("%d",&n);
    } while (n <= 0);

    printf("Die Summe von 1 bis %d ist %d\n", n, summe(n));
}

int summe(int x) {
    if (x == 1) {
        return 1;
    } else {
        return x + summe(x - 1);
    }
}