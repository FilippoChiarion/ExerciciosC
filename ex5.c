#include <stdio.h>
#import <locale.h>
int main(){
    setlocale(0,"Portuguese");
    printf("Exerc�cio 5\n");

    float salario, reajuste, total;

    printf("Sal�rio mensal:  R$ ",salario);
    fflush(stdin);
    scanf("%f",&salario);
    printf("Qual o percentual do reajuste: (%%) ",reajuste);
    fflush(stdin);
    scanf("%f",&reajuste);


    total = (float)(reajuste / 100 * salario) + salario;
    printf("Seu novo sal�rio � de: R$ %.2f",total = (reajuste / 100 * salario) + salario);

    return 0;
}
