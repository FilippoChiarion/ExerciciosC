#include <stdio.h>
#import <locale.h>
int main(){
    setlocale(0,"Portuguese");
    printf("Exercício 2\n");
    int b, h, a;
    printf("Me dê a base de um retângulo: ",b);
    fflush(stdin);
    scanf("%i",&b);
    printf("Me dê a altura de um retângulo: ",h);
    fflush(stdin);
    scanf("%i",&h);
    a =  b * h;
    printf("A área do retãngulo é: %i",a);

    return 0;
}
