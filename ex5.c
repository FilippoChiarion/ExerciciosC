#include <stdio.h>
#import <locale.h>
int main(){
    setlocale(0,"Portuguese");
    printf("Exercício 5\n");

    float salario, reajuste, total;

    printf("Salário mensal:  R$ ",salario);
    fflush(stdin);
    scanf("%f",&salario);
    printf("Qual o percentual do reajuste: (%%) ",reajuste);
    fflush(stdin);
    scanf("%f",&reajuste);


    total = (float)(reajuste / 100 * salario) + salario;
    printf("Seu novo salário é de: R$ %.2f",total = (reajuste / 100 * salario) + salario);

    return 0;
}
