#include <stdio.h>
#import <locale.h>

int main(){
    setlocale(0,"Portuguese");
    printf("Exercício 8\n");

    float c ,f;

    printf("Me dê a temperatura em Fahrenheit: F ",f);
    fflush(stdin);
    scanf("%f",&f);


    c = 5 * (f - 32) / 9;
    printf("Sua temperatura em Celsius é de: C %.1f",c);

    return 0;
}
