#include <stdio.h>
#import <locale.h>

int main(){
    setlocale(0,"Portuguese");
    printf("Exerc�cio 8\n");

    float c ,f;

    printf("Me d� a temperatura em Fahrenheit: F ",f);
    fflush(stdin);
    scanf("%f",&f);


    c = 5 * (f - 32) / 9;
    printf("Sua temperatura em Celsius � de: C %.1f",c);

    return 0;
}
