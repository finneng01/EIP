//library
#include<stdio.h>
#include<ctype.h>

//function
int fibonacci(int);

//start of main
int main() {

    //variable
    int n, fibo_n;
    //input
    printf(
            "Bitte geben Sie die Zahl ein, bis zu welcher die Folge aufgeführt werden soll.\n");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Fehlerhafte Eingabe.");
        return (1);
    }

    //cal & output
    printf("Die Zahlen der Fibonacci Folge bis zur %d. Stelle:\n", n);
    for (int i = 1; i <= n; i++) {
        fibo_n = fibonacci(i);
        printf("%7d", fibo_n);
    }

    //end of main
    return (0);
}

//function
int fibonacci(int a) {
    int b;
    if (a == 1 || a == 2) {
        return (1);
    } else {
        b = fibonacci(a - 1) + fibonacci(a - 2);
        return (b);
    }
}