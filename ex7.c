#include <stdio.h>
#import <locale.h>

int main(){
    setlocale(0,"Portuguese");
    printf("Exercício 7\n");

    float carros ,salario, comissao, vendas, total;

    printf("Número de carros vendidos: ",carros);
    fflush(stdin);
    scanf("%f",&carros);
    printf("Valor total de suas vendas: R$ ",vendas);
    fflush(stdin);
    scanf("%f",&vendas);
    printf("Salário fixo: R$ ",salario);
    fflush(stdin);
    scanf("%f",&salario);
    printf("Valor que ele recebe por carro vendido: R$ ",comissao);
    fflush(stdin);
    scanf("%f",&comissao);


    total = (comissao * carros) + (vendas / 100 * 5) + salario;
    printf("O salário final é de: R$ %.2f",total);


    return 0;
}
