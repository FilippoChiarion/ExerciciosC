#include <stdio.h>
#import <locale.h>
int main(){
    setlocale(0,"Portuguese");
    printf("Exerc�cio 2\n");
    int b, h, a;
    printf("Me d� a base de um ret�ngulo: ",b);
    fflush(stdin);
    scanf("%i",&b);
    printf("Me d� a altura de um ret�ngulo: ",h);
    fflush(stdin);
    scanf("%i",&h);
    a =  b * h;
    printf("A �rea do ret�ngulo �: %i",a);

    return 0;
}
