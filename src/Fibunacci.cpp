#include <cstdio>

int main () {
    //Variablen
    long long fib, a=0, b=1;
    int n;

    //Eingabe
    printf("Bitte n Eingeben");
    scanf("%d",&n);

    printf("%d\n", a);

    if (n>1) {
        printf("%d\n", b);
    }
    n = n - 2;

    while (n>0) {
        fib = a + b;
        printf("%lld \n", fib);
        a = b;
        b = fib;
        n = n - 1;
    }

}