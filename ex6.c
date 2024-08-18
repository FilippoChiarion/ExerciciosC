#include <stdio.h>
#import <locale.h>
int main(){
    setlocale(0,"Portuguese");
    printf("Exercício 6\n");

    float fabrica ,distribuidor ,impostos ,total;

    printf("Custo do carro de fábrica: R$ ",fabrica);
    fflush(stdin);
    scanf("%f",&fabrica);

    distribuidor = 28;
    impostos = 45;
    total = ( distribuidor / 100 * fabrica) + ( impostos / 100 * fabrica) + fabrica;
    printf("Custo final ao consumidor: R$ %.2f",total);

    return 0;
}
