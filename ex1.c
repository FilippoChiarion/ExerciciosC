#include <stdio.h>
#import <locale.h>
int main () {
    printf("Exercicio 1\n");
    setlocale(0,"Portuguese");
    int a, b;

    printf("Me dê um número: ", a);

    scanf ("%i", &a);

    b = a - 1;

    printf ("Seu antecessor é: \"%i\"\n", b);

    return 0;
}
